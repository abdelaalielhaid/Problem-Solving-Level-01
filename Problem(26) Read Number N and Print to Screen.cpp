

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

int ReadNumber()
{
    int Number;
    cout << "Enter a Number: \n";
    cin >> Number;

    return Number;
}

void PrintNumberFomN_Using_WhileLoop(int N)
{
    cout << "Using While Loop " << endl;
    int counter = 0;

    while (counter < N)
    {
        counter++;
        cout << counter << endl;
    }
}

void PrinNumberFromN_Using_ForLoop(int N)
{
    cout << "Using For Loop " << endl;
    for (int counter = 1; counter <= N; counter++)
    {
        cout << counter << endl;
    }
}

void PrinNumberFromN_Using_DoWhileLoop(int N)
{
    int counter = 0;

    cout << "Using Do_While Loop " << endl;
    do
    {
        counter++;
        cout << counter << endl;

    } while (counter < N);
    
}


int main()
{
    int N = ReadNumber();
    PrintNumberFomN_Using_WhileLoop(N);
    PrinNumberFromN_Using_ForLoop(N);
    PrinNumberFromN_Using_DoWhileLoop(N);


    return 0;
}


