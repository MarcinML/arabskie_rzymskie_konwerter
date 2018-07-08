#include "romaniantoarabic.h"
#include "romanian.h"
#include <string>

romanianToArabic::romanianToArabic()
{

}

int romanianToArabic::convertoArabic(std::string input)
{
    int i=0;
    std::string compare;

       while(true)
       {
        Romanian R;
        R.enterArabicNumber(i);
        compare=R.showArabicToRomanian();
        i++;
        if(compare==input) break;
       }



    return i-1;
}
