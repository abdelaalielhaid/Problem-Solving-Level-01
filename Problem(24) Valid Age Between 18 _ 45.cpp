

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

int RaedAge()
{
    int Age;
    cout << "Enter You'r Age: \n";
    cin >> Age;

    return Age;
}

bool ValidNumberInRange(int Age, int From, int To)
{
    return (Age >= From && Age <= To);
}

void PrintResult(int Age)
{
    if(ValidNumberInRange(Age, 18, 45))
        cout << "Valid Age.\n";
    else
        cout << "InValid Age.\n";
}
int main()
{
    PrintResult(RaedAge());

    return 0;
}


