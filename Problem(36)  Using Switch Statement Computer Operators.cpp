#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


float ReadNumvers()
{
    int Number;
    cout << "Enter The Number: \n";
    cin >> Number;

    return Number;
}
enum enOperationType {Add = '+', Sab = '-', Multi = '*', Divi = '/'};
enOperationType ReadOperationType()
{
    char OP = '+';
    cout << "Please Enter The Operation: \n";
    cin >> OP;

    return (enOperationType) OP;
}

int Calculation(int Number1, int Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Sab:
        return Number1 + Number2;
    case enOperationType::Multi:
        return Number1 * Number2;
    case enOperationType::Divi:
        return Number1 / Number2;
    
    default:
        return Number1 + Number2;
    }
}

int main()
{
    int Number1 = ReadNumvers();
    int Number2 = ReadNumvers();
    enOperationType OP = ReadOperationType();

    cout << "Result is: " << Calculation(Number1, Number2, OP);


    return 0;  
}