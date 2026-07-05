

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

int ReadNumber()
{
    int num;
    cout << "Enter a Number: \n";
    cin >> num;

    return num; 
}

float calcNumber(float num)
{
    return (float) num / 2; // Data Type Casting Because 'return' Always Give Integer Number.
}

void PrintResult(int num)
{
    string Result = "Half of " + to_string(num) + " is: " + to_string(calcNumber(num));
    cout << Result << endl;
}

int main()
{
    PrintResult(ReadNumber());
    
    return 0;
}



