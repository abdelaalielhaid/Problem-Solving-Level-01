#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


float ReadNumvers(string Masseg)
{
    int Number;
    cout << Masseg << endl;
    cin >> Number;
    return Number;
}

int SumNumbers()
{
    int Number = 0, Sum = 0, Counter = 1;
    do
    {
        Number = ReadNumvers("Plese enter Number: " + to_string(Counter));
        if(Number == -99)
        {
            break;
        }
        
        Sum += Number; 
        Counter++;

    } while (Number != -99);
    
    return Sum;
}


int main()
{
    int Exqution = SumNumbers();
    cout << endl << "Result is: " << Exqution;
    

    return 0;  
}