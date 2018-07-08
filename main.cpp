#include <iostream>
#include <string>
#include "romanian.h"

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
    R.enterRomanianNumber(romanianNumber);
    int result2 = R.showRomanianToArabic();
    std::cout<<"Liczba po konwersji to :"<< result2<<std::endl;



    return 0;
}
