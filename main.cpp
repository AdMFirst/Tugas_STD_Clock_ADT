
#include "Clock.hpp"
//#include "Clock.cpp"


int main()
{
    cout << "Hello world!" << endl;
    clock c1, c2, c3;
    c1 = MakeClock(2,30,4);
    c2 = MakeClock(6,0,0);
    c3 = AddClock(c1, c2);

    PrintClock(c1);
    PrintClock(c2);
    PrintClock(c3);
    return 0;
}
