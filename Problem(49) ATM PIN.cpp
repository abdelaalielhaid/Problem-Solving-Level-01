#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


string ReadPinCode()
{
    string CodePin;
    cout << "Enter The Code: ";
    cin >> CodePin;

    return CodePin;
}

bool Login()
{
    string PinCode = "";
    do
    {
        PinCode = ReadPinCode();
        if(PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "Wrong Code.\n";
            system("color 4F");
        }
    } while (PinCode != "1234");
    
    return 0;
}



int main()
{
    if(Login())
    {
        system("color 2f");
        cout << "You'r Balance is: 750000$.";
    }

    return 0;  
}