

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code


void ReadRectangelArea(float& A, float& B)
{
    cout << "Enter The 'A' and 'B' to Calc.\n";
    cout << "Enter[A] ";
    cin >> A;
    cout << "Enter[B] ";
    cin >> B;
}

float ClaculatRectangelArea(float& A, float& B)
{
    return (float) A * B;
}

void PrintRectangelArea(float Result)
{
    cout << "The Result of Rclangel Area is: " << Result;
}

int main()
{
    
    float A, B;
    
    ReadRectangelArea(A, B);
    PrintRectangelArea(ClaculatRectangelArea(A, B));

    return 0;
}


