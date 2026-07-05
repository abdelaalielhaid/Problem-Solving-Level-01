

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

float ReadCircelAreaByDiameter()
{
    float D;
    cout << "Enter The 'D' To calculat The Circel Area\n";
    cout << "Throuth Diameter :\n";
    cin >> D;
    return D;
}

float CalculatCircelAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;
    float Area = (PI * pow(D, 2)) / 4; 
    return Area;
} 

void PrintCircelAreaByDiameter(float Result)
{
    cout << "The Circle Area is : " << Result << endl;
}


int main()
{

    PrintCircelAreaByDiameter(CalculatCircelAreaByDiameter(ReadCircelAreaByDiameter()));
    
    return 0;
}



