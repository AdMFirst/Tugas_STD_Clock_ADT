#include "Clock.hpp"

//validator
bool IsValid(int hour, int minute, int second) {
    return ((hour >= 0 && hour <= 23) && (minute >= 0 && minute <= 59) && (second >= 0 && second <= 59));
}


//Construcktor
clock MakeClock(int hour, int minute, int second) {
    clock jam;
    if( IsValid(hour, minute, second)){
        jam.HH = hour;
        jam.MM = minute;
        jam.SS = second;
    }
    return jam;
}


//Selector
int GetHour(clock c) {
    return c.HH;
}

int GetMinute(clock c) {
    return c.MM;
}

int GetSecond(clock c) {
    return c.SS;
}


//Value Changer
void SetHour(clock * c, int newHH){
    (*c).HH = newHH;
}

void SetMinute(clock * c, int newMM){
    (*c).MM = newMM;
}

void SetSecond(clock * c, int newSS){
    (*c).SS = newSS;
}

//Relational Operation
bool IsEqual(clock c1, clock c2) {
    return (c1.HH == c2.HH && c2.MM == c1.MM && c1.SS == c2.SS);
}


//Arithmetic Operation
clock AddClock(clock c1, clock c2) {
    int jam, menit, detik;
    jam = c1.HH + c2.HH;
    menit = c1.MM + c2.MM;
    detik = c1.SS + c2.SS;
    if( IsValid(jam, menit, detik)){
        return MakeClock(jam, menit, detik);
    } else {
        return MakeClock(0,0,0);
    }
}

//Output Process
void PrintClock(clock c) {
    cout<<"Jam "<<c.HH<<":"<<c.MM<<":"<<c.SS<<endl;
}
