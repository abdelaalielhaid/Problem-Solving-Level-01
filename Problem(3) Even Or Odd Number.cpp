

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

enum enNumbersTeyp {Odd = 1, Even = 2};

int ReadNumbers()
{
    int number;
    cout <<"Enter Number To check It 'Even' Or 'Odd'\n";
    cin >> number;

    return number;
}

enNumbersTeyp checkNumbers(int number)
{
    int Result = number % 2;
    if (Result == 0)
    
        return enNumbersTeyp::Even;
    else
        return enNumbersTeyp::Odd;
}

void PrintNumbers(enNumbersTeyp numberTeyp)
{
    if (numberTeyp == enNumbersTeyp::Even)
    
        cout << "The Number is Even.\n";
    else
        cout << "The Number is Odd.\n";
}


int main()
{
    PrintNumbers(checkNumbers(ReadNumbers()));
    
    return 0;
}



