

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

float ReadSpuareSide()
{
    float A;
    cout << "Enter The 'A' To calculat The Circel Area\n";
    cout << "Inscribed In a Spuare :\n";
    cin >> A;
    return A;
}

float CalculatCircelAreaInscribedInASpuare(float A)
{
    const float PI = 3.141592653589793238;
    float Area = (PI * (pow(A, 2))) / 4; 
    return Area;
}

void PrintCircelAreaInscribedInASpuare(float Result)
{
    cout << "The Circle Area is : " << Result << endl;
}


int main()
{
    PrintCircelAreaInscribedInASpuare(CalculatCircelAreaInscribedInASpuare(ReadSpuareSide()));

    return 0;
}


