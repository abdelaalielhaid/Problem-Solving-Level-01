

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

float ReadCircelArea()
{
    float R;
    cout << "Enter The 'R' To calculat The Circel Area:\n";
    cin >> R;
    return R;
}

float CalculatCircelArea(float R)
{
    const float PI = 3.141592653589793238;
    float Area = PI * pow(R,2) ; 
    return Area;
}

void PrintCircelArea(float Result)
{
    cout << "The Circle Area is : " << Result << endl;
}


int main()
{
    float R;
    PrintCircelArea(CalculatCircelArea(ReadCircelArea()));
    
    
    

    return 0;
}


