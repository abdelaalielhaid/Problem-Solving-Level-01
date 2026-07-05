

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

float ReadCircelAreaALongTheCirumference()
{
    float L;
    cout << "Enter The '' To calculat The Circel Area\n";
    cout << " Circel Area A Long The Cirumference:\n";
    cin >> L;
    return L;
}

float CalculatCircelAreaALongTheCirumference(float L)
{
    const float PI = 3.141592653589793238;
    float Area = pow(L, 2) / (4 * PI); 
    return (float) Area;
}

void PrintCircelAreaALongTheCirumference(float Result)
{
    cout << "Circel Area A Long The Cirumference is : " << Result << endl;
}


int main()
{
    PrintCircelAreaALongTheCirumference(CalculatCircelAreaALongTheCirumference(ReadCircelAreaALongTheCirumference()));
    
    
    

    return 0;
}



