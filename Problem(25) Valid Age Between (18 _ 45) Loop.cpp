

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

int ReadRange()
{
    int Age;
    cout << "Enter Age Between 18 and 45 : \n";
    cin >> Age;

    return Age;
}

bool ValidteNumberInRange(int Age, int From, int To)
{
    return (Age >= From && Age <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;
    do
    {
        Age = ReadRange();
    } while (!ValidteNumberInRange(Age, From, To));
    
    return Age;
}

void PrintResult(int Age)
{
    cout << "Valid Age " << endl;
    cout << "You'r Age is " << Age << endl;
    
}


int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));

    return 0;
}


