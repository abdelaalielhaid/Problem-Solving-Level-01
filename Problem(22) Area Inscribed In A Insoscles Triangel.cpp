

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

void ReadAreaInscribedInAInsosclesTriangel(float& A, float& B)
{
    cout << "Enter The [A] anf [B] To calculat The Circel Area\n";
    cout << " Circel Area Inscribed In A Insoscles Triangel:\n";
    cout << "Enter [A]: ";
    cin >> A;
    cout << "Enter [B]: ";
    cin >> B;
}

float CalculatAreaInscribedInAInsosclesTriangel(float& A, float& B)
{
    const float PI = 3.141592653589793238; 
    float Area = (PI * pow(B,2) / 4) * (((A * 2 - B) / (A * 2 + B))); 
    return (float) Area;
}

void PrintAreaInscribedInAInsosclesTriangel(float Result)
{
    cout << "The Area Inscribed In a Insoscles Triangel is : " << Result << endl;
}


int main()
{
    float A, B;
    ReadAreaInscribedInAInsosclesTriangel(A, B);
    PrintAreaInscribedInAInsosclesTriangel(CalculatAreaInscribedInAInsosclesTriangel(A, B));
    
    
    

    return 0;
}



