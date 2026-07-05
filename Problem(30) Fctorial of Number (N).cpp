#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.




int ReadAPositivNumber(string Masseg)
{
    int Number;
    do
    {
        cout << "Plese Enter a Positiv Number.\n";
        cin >> Number;
    } while (Number < 0);
    
    return Number;
}

int SumOfFactorialNumber(int Number)
{
    int Factorial = 1;
    for (int i = Number; i > 0; i--)
    {
        Factorial = Factorial * i;
        // Factorial *= i;
    }
    return Factorial;
}

void PrintSumOfFactorialNumber(int Result)
{
    cout << "The Final Number is : "<< Result << endl;  
}


int main()
{
    
    PrintSumOfFactorialNumber(SumOfFactorialNumber(ReadAPositivNumber("Print The masseg Her")));
    

    return 0;  
}