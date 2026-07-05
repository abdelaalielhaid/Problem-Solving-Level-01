

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

enum enPassFail {Pass = 1, Fail = 2};

enPassFail checkPassFail(float Degre)
{
    if(Degre >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void RaedDegres(float& Degre1, float& Degre2, float& Degre3)
{
    cout << "Enter Deger Number One:\n";
    cin >> Degre1;
    cout << "Enter Deger Number Two:\n";
    cin >> Degre2;
    cout << "Enter Deger Number Three:\n";
    cin >> Degre3;
}

float CalcDegreAvereg(int Degre1, int Degre2, int Degre3)
{
    return  (float)(Degre1 +  Degre2 + Degre3) / 3;
}

void PrintTheAverg(float Averge)
{
    cout << "The Averg is " << Averge << endl;

    if(checkPassFail(Averge) == enPassFail::Pass)
        cout << "You Passed.\n";
    else 
        cout << "You Failed.\n";
}

int main()
{
    float Degre1, Degre2, Degre3;

    RaedDegres(Degre1, Degre2, Degre3);
    PrintTheAverg(CalcDegreAvereg(Degre1, Degre2, Degre3));

    
    return 0;
}



