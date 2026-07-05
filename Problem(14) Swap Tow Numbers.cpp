

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code



void RaedNumbers(int& Num1, int& Num2)
{
    cout << "Enter The Numbers To sawp Them.\n";
    cout << "Enter The Number One: \n";
    cin >> Num1; 
    cout << "Enter The Number Two: \n";
    cin >> Num2;
}

void swap2Number(int& Num1, int& Num2)
{
    int temp;
    temp = Num1;
    Num1 = Num2;
    Num2 =temp;
}

void printNumbers(int Num1, int Num2)
{
    cout << "Afther Swaping.\n";
    cout <<"Number One is: " << Num1 << endl;
    cout <<"Number Two is: " << Num2 << endl;
    swap2Number(Num1, Num2);
    cout << "Befor Swaping.\n";
    cout << "*****************\n";
    cout <<"Number One is: " << Num1 << endl;
    cout <<"Number Two is: " << Num2 << endl;
}
int main()
{
    int Num1, Num2;
    RaedNumbers(Num1, Num2);
    printNumbers(Num1, Num2);
    return 0;
}



