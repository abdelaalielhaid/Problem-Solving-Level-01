#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


string ReadPinCode()
{
    string Code;
    cout << "Enter the Code: ";
    cin >> Code;

    return CodePin;
}

bool Login()
{
    string Code;
    int counter = 3;

    do
    {
        Code = ReadPinCode();
        if(Code == "1234")
        {
            return 1;
        }else 
        {
            counter--;
            system ("color 4F");
            cout << "Be cerful Bayby. You Have just " << counter << " More try Left.\n";
        }

    } while (counter >= 1 && Code != "1234");
    
    return 0;

}

int main()
{
    if(Login())// == true
    {
        system("color 2F");
        cout << "You'r Balance is: 75000$.\n";
    }else 
    {
        cout << "You'r account is Blocked.";
        cout << "Call You'r Bank.";
    }

    return 0;  
}