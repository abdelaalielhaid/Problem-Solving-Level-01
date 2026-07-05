

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

void ReadCircleAroundAArbitrangTriangel(float& A, float& B,float C)
{
    cout << "Enter The [A] and [B] and [C] To calculat The Circel Area\n";
    cout << " Around a Arbitrang Triangel:\n";
    cout << "Enter [A]: ";
    cin >> A;
    cout << "Enter [B]: ";
    cin >> B;
    cout << "Enter [C]: ";
    cin >> C;
}

float CalculatCircleAroundAArbitrangTriangel(float& A, float& B, float C)
{
    const float PI = 3.141592653589793238;
    float P;
    P = (A + B + C) / 2;
    
    float T;
    T = (A* B* C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))); 

    float Area = PI * pow(T, 2);
    return Area ;
}

void PrintCircleAroundAArbitrangTriangel(float Result)
{
    cout << "The Area Described Around a Arbitrang Triangel : " << Result << endl;
}


int main()
{
    float A, B, C;
    ReadCircleAroundAArbitrangTriangel(A, B, C);
    PrintCircleAroundAArbitrangTriangel(CalculatCircleAroundAArbitrangTriangel(A, B, C));

    return 0;
}



