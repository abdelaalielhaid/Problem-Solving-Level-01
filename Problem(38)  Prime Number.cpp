#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


int ReadPositivNumber(string Masseg)
{
    float Condition = 0;
    float Number;
    do
    {
        cout << Masseg << endl;
        cin >> Number;
    } while (Number <= Condition);
    
    return Number;
}



enum enPrimeNumber{PrimeNumber = 1, NotPrimeNumber = 2};

enPrimeNumber CheckPrimeNumber(int Number)
{
    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if(Number % Counter == 0)
            return enPrimeNumber::NotPrimeNumber; 
    }
        
        return enPrimeNumber::PrimeNumber;
}

void PrintTheResult(int Number)
{
    
    switch (CheckPrimeNumber(Number))
    {
    case enPrimeNumber::PrimeNumber:
        cout << "Prime Number.\n";
        break;
        
    case enPrimeNumber::NotPrimeNumber :
        cout << "Not Prime Number.\n";
        break;
    }
    
    
}


int main()
{
    
    PrintTheResult(ReadPositivNumber("Enter a Positiv Number: "));

    return 0;  
}