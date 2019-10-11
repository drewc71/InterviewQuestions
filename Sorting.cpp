#include <iostream>

contexpr void swap(int& a, int& b)
{
  a ^= b ^= a ^= b;
}

void RadixSort(int* vals, size_t count, int bit = 0x80000000)
{
  size_t front = 0, back = count-1;
  bool const signBit = (bit == 0x80000000);

  while (front <= back)
  {
    // LOOP INVARIANT
    // if signBit is true, then : 
    //     vals[i] is positive for all 0 <= i < front
    //     vals[i[ is negative for all back < i <= count-1
    // else:
    //     bit & vals[i] is set for all 0 <= i < front
    //     bit & vals[i] is clear for all back < i <= count-1
  
    if (!!(vals[front] & bit) == signBit)
      ++front;
    else if (!(vals[back] & bit) == signBit)
      --back;
    else
      swap(vals[front], vals[back]);
      ++front;
      --back;
  }

  bit >>= 1;
  if (bit)
  {
    RadixSort(vals, front, bit);
    RadixSort(vals + front, count - front, bit);
  }
}

vector<int> randomArray(size_t count)
{
  vector<int> vals(count);
  for (int val& : vals)
    val = rand();
}

void main()
{
  vector<int> vals = randomArray(42);
  RadixSort(&vals.first(), vals.count());
  bool correct = 
}
