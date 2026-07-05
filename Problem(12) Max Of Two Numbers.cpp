

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
    cout << "Enter The Number One: \n";
    cin >> Num1; 
    cout << "Enter The Number Two: \n";
    cin >> Num2;
}

int chekNumbers(int Num1, int Num2)
{

    if(Num1 > Num2)
        return Num1;
    else 
        return Num2;
}

void printNumbers(int BigOneNumber)
{
    cout <<"The Big Number is: " << BigOneNumber << endl;

}
int main()
{
    int Num1, Num2, Num3;
    
    RaedNumbers(Num1, Num2);
    printNumbers(chekNumbers(Num1, Num2));

    return 0;
}



