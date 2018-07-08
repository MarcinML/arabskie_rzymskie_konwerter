#include <iostream>
#include <string>
#include "romanian.h"
#include "romaniantoarabic.h"

int main()
{
    Romanian R;
    int num;
    std::cout<<"Enter the Arabic number and I will change it to Romanian: "<<std::endl;
    std::cin>>num;
    R.enterArabicNumber(num);
    std::string result1 = R.showArabicToRomanian();
    std::cout<<"Liczba po konwersji to: "<<result1<<std::endl;

    std::cout<<"Enter the Romanian number and I will change it to Arabic: "<<std::endl;
    std::string romanianNumber;
    std::cin>>romanianNumber;
    romanianToArabic RR;
    std::string test{"test"};
    std::string test2{"test"};
    if(test!=test2) std::cout<<"nieprawda";



    std::cout<<"Liczba po konwersji to :"<<RR.convertoArabic(romanianNumber)<<std::endl;



    return 0;
}
