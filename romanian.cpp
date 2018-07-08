#include "romanian.h"

Romanian::Romanian()
{

}

void Romanian::enterArabicNumber(int a)
{
    enteredNumber = a;
}


std::string Romanian::showArabicToRomanian()
{
    Romanian::convert();
    return result;
}


void Romanian::convert()
{
    int jednosci = enteredNumber%10;
    int dziesiatki = (enteredNumber%100)/10;
    int setki = (enteredNumber / 100) % 10;
    int tysiace = (enteredNumber / 1000);

    if(tysiace!=0) result+=tabTysiecy[tysiace-1];
    if(setki!=0) result+=tabSetek[setki-1];
    if(dziesiatki!=0) result+=tabDziesiatek[dziesiatki-1];
    if(jednosci!=0) result+=tabJednosci[jednosci-1];
}


