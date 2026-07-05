#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


void PrintLettersAToZCapitalLetters()
{
    cout << "-----------\n";
    for (char i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
    cout << "-----------\n";
}

void PrintLettersAToZSmallLetters()
{
    cout << "-----------\n";
    
    for (char i = 97; i <= 122; i++)
    {
        cout << i << endl;
    }
    cout << "-----------\n";
}

int main()
{

    PrintLettersAToZCapitalLetters();
    PrintLettersAToZSmallLetters();
    return 0;  
}