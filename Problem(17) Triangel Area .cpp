

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code


void ReadRTriangelArea(float& A, float& H)
{
    cout << "Enter The 'A' and 'H' to Calc.\n";
    cout << "Enter[A] ";
    cin >> A;
    cout << "Enter[H] ";
    cin >> H;
}

float ClaculattriangelArea(float A, float H)
{
    float Area = (A / 2) * H ;
    return Area;
}

void PrintRectTriangelArea(float Result)
{
    cout << "The Result of Triangel Area is: " << Result;
}

int main()
{
    
    float A, H;
    
    ReadRTriangelArea(A, H);
    PrintRectTriangelArea(ClaculattriangelArea(A, H));

    return 0;
}


