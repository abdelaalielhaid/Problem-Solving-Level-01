

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

void Read3Number(int& Num1, int& Num2, int& Num3)
{
    cout << "Enter Number One: \n";
    cin >> Num1;
    cout << "Enter Number Two: \n";
    cin >> Num2;
    cout << "Enter Number Three: \n";
    cin >> Num3;
}

int Sum3Number(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}
float calculatAvrege(int Num1, int Num2, int Num3)
{
    return (float)Sum3Number(Num1, Num2, Num3) / 3;
}

void PrintTotal(int total)
{
    cout << "The Total Result is: " << total << endl;
}



int main()
{
    int Num1, Num2, Num3;

    Read3Number(Num1, Num2, Num3);
    PrintTotal(Sum3Number(Num1, Num2, Num3));
    
    return 0;
}



