/*********************************************************************************************************************************/
/*  David Dresdow                                                                                                                */
/*                                                                                                                               */
/*  CIS 1202 501                                                                                                                 */
/*                                                                                                                               */
/*  December , 2021                                                                                                              */
/*                                                                                                                               */
/*  Program Name - Programming Assignment 15b  - Template Functions                                                              */
/*                                                                                                                               */
/* This program will calculate what half of a number is using a function called half                                             */
/*   1) one generic template function will handle both double and float number values                                            */
/*   2) one explicit template function will handle integer values                                                                */
/*                                                                                                                               */
/********************************************************************************************************************************/

#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

template <class T>
T half(T number)
{
    return number / 2.0;
}


int half(int number)
{
    return round((static_cast<float>(number)) / 2.0);
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << "\n" << half(a);
    cout << "\n" << half(b);
    cout << "\n" << half(c);


    cout << "\n" << "\n";
    system("pause");
    return 0;
}
