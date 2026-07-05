

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code


void ReadRectangelAreaSide(float& A, float& D)
{
    cout << "Enter The 'A' and 'B' to Calc.\n";
    cout << "Enter[A] ";
    cin >> A;
    cout << "Enter[D] ";
    cin >> D;
}

float ClaculatRectangelAreaSide(float& A, float& D)
{
    float Area = A * sqrt(pow(D, 2) - pow (A, 2)) ;
    return Area;
}

void PrintRectangelAreaSide(float Result)
{
    cout << "The Result of Rclangel Area is: " << Result;
}

int main()
{
    
    float A, B;
    
    ReadRectangelAreaSide(A, B);
    PrintRectangelAreaSide(ClaculatRectangelAreaSide(A, B));

    return 0;
}


