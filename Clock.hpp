#include <iostream>

using namespace std;


struct clock {
    int HH;
    int MM;
    int SS;
};

bool IsValid(int hour, int minute, int second);
clock MakeClock(int hour, int minute, int second);
int GetHour(clock c);
int GetMinute(clock c);
int GetSecond(clock c);
void SetHour(clock * c, int newHH);
void SetMinute(clock * c, int newMM);
void SetSecond(clock * c, int newSS);
bool IsEqual(clock c1, clock c2);
clock AddClock(clock c1, clock c2);
void PrintClock(clock c);

