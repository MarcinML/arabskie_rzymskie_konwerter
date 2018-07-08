#include "romanian.h"

Romanian::Romanian()
{
    intResult = 0;
}

void Romanian::enterArabicNumber(int a)
{
    enteredNumber = a;
}
void Romanian::enterRomanianNumber(std::string a)
{
    enteredRomanianNumber=a;
}

std::string Romanian::showArabicToRomanian()
{
    Romanian::convert();
    return result;
}
int Romanian::showRomanianToArabic()
{
    Romanian::convertToArabic();
    return intResult;
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

void Romanian::convertToArabic()
{
    bool foundT=false;
    bool foundS=false;
    bool foundD=false;
    bool foundJ=false;
    int a=0;
    int b=0;
    int c=0;
    for(int i=0; i<9;i++){
        size_t foundTT = enteredRomanianNumber.find(tabTysiecy[i]);
       while(foundTT!=std::string::npos)
        {
            a=i;
            std::cout<<"jestem w tysiacach"<<i<<std::endl;
            foundT=true;
            break;
        }
    }
    if(foundT) intResult+=((a+1)*1000);

    for(int i=0; i<9;i++){
        size_t foundTTT = enteredRomanianNumber.find(tabSetek[i]);
       while(foundTTT!=std::string::npos)
        {
            b=i;
            std::cout<<"jestem w setkach"<<i<<std::endl;
            foundS=true;
            break;
        }
    }
    if(foundS) intResult+=((b+1)*100);

    for(int i=0; i<9;i++){
        size_t foundTTTT = enteredRomanianNumber.find(tabDziesiatek[i]);
       while(foundTTTT!=std::string::npos)
        {
            c=i;
            std::cout<<"jestem w setkach"<<i<<std::endl;
            foundD=true;
            break;
        }
    }
    if(foundD) intResult+=((c+1)*10);

    for(int i=0; i<9;i++){
        size_t foundTTTTT = enteredRomanianNumber.find(tabJednosci[i]);
       while(foundTTTTT!=std::string::npos)
        {
            c=i;
            std::cout<<"jestem w jednosciach"<<i<<std::endl;
            foundJ=true;
            break;
        }
    }
    if(foundJ) intResult+=c+1;


}
