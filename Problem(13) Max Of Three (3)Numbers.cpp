

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code




void RaedNumbers(int& A, int& B, int& C)
{
    cout << "Enter The Number 'A': \n";
    cin >> A; 
    cout << "Enter The Number 'B': \n";
    cin >> B;
    cout << "Enter The Number 'C': \n";
    cin >> C;
}

int chekNumbers(int A, int B, int C )
{
    if(A > B)
        if(A > C)
            return A;
        else
            return C;
    else 
        if(B > C)
            return B;
        else
            return C;
    
}

void printNumbers(int BigOneNumber)
{
    cout <<"The Big Number is: " << BigOneNumber << endl;

}
int main()
{
    int A, B, C;
    
    RaedNumbers(A, B, C);
    printNumbers(chekNumbers(A, B, C));

    return 0;
}


