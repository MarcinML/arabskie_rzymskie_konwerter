#ifndef ROMANIAN_H
#define ROMANIAN_H
#include <string>
#include <iostream>


class Romanian
{
    int enteredNumber;

    std::string result;

    void convert();
    void convertToArabic();

    std::string tabJednosci[9]{"I","II","III","IV","V","VI","VII","VIII","IX"};
    std::string tabDziesiatek[9]{"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    std::string tabSetek[9]{"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    std::string tabTysiecy[9]{"M","MM","MMM","|XL|","|L|","|LX|","|LXX|","|LXXX|","|XC|"};


public:
    Romanian();
    void enterArabicNumber(int);
    std::string showArabicToRomanian();
    void enterRomanianNumber(std::string);
    int showRomanianToArabic();

};

#endif // ROMANIAN_H


