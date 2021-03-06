
// Question: Given a description of buildings, trace the outline of the resulting city

/*
    Input buildings (left, right) : height  [sorted by left]
        (2, 12) : 8
        (9, 13) : 5
        (15, 29) : 2
        (20, 29) : 4
        (23, 28) : 8

    X-ray plot:

    9 ..............................
    8 ..┌─────────┐..........┌────┐.
    7 ..│.........│..........│....│.
    6 ..│.........│..........│....│.
    5 ..│......┌──┼┐.........│....│.
    4 ..│......│..││......┌──┼────┼┐
    3 ..│......│..││......│..│....││
    2 ..│......│..││.┌────┼──┼────┼┤
    1 ..│......│..││.│....│..│....││
    0 ──┴──────┴──┴┴─┴────┴──┴────┴┴
                1         2
      012345678901234567890123456789

    Skyline plot:

    9 ..............................
    8 ..┌─────────┐..........┌────┐.
    7 ..│.........│..........│....│.
    6 ..│.........│..........│....│.
    5 ..│.........└┐.........│....│.
    4 ..│..........│......┌──┘....└┐
    3 ..│..........│......│........│
    2 ..│..........│.┌────┘........│
    1 ..│..........│.│.............│
    0 ──┴──────────┴─┴─────────────┴
                1         2
      012345678901234567890123456789

    Output segments (runTo, newHeight)  [sorted by runTo]
        (2, 8)
        (12, 5)
        (13, 0)
        (15, 2)
        (20, 4)
        (23, 8)
        (28, 4)
        (29, 0)
*/
