
enum Dir { East, South, West, North, DIR_COUNT };
Dir operator++(Dir dir) { return (Dir(static_cast<int>(dir) + 1) % DIR_COUNT); } 
Dir operator--(Dir dir) { return (Dir(static_cast<int>(dir) + DIR_COUNT - 1) % DIR_COUNT); } 

void SpiralWalk(char** arr, size_t rows, size_t cols, function<void(int)> output)
{
	enum Axis { Horiz, Vert };
	struct DirData { int dRow, dCol; } dirData[] = {
		{ 0, 1 },
		{ 1, 0 },
		{ 0, -1 },
		{ -1, 0 }};
	
	Dir dir = East;
	size_t row = 0, col = 0;
	size_t bounds[] = { cols - 1, rows - 1, 0, 0 };
	for (size_t cells = rows * cols; cells--;)
	{
		output(arr[row][col]);
		
		row += dirData[dRow];
		col += colData[dCol];
		
		if (bounds[dir] == 
		
	}
}

