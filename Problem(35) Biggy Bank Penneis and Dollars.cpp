#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


struct BiggyBankContent
{
    int Pennies, Nickels, Dimes, Quarters, Dollers;
};

BiggyBankContent ReadBiggyBankContent()
{
    BiggyBankContent BGC;

    cout << "Enter You'r Panneis: \n";
    cin >> BGC.Pennies;
    cout << "Enter You'r Nickels: \n";
    cin >> BGC.Nickels;
    cout << "Enter You'r Dimes: \n";
    cin >> BGC.Dimes;
    cout << "Enter You'r Quarters: \n";
    cin >> BGC.Quarters;
    cout << "Enter You'r Dollers: \n";
    cin >> BGC.Dollers;

    return BGC;
}

float CalculatPenneis(BiggyBankContent BGC)
{
    int TotalPenneis = BGC.Pennies *1 + BGC.Nickels * 5 + BGC.Dimes * 10 + BGC.Quarters * 25 + BGC.Dollers * 100;

    return TotalPenneis;
}


int main()
{
    int TotalPenneis = CalculatPenneis(ReadBiggyBankContent());
    cout << endl <<"Total Penneis: " << TotalPenneis;
    cout << endl <<"Total Doller: " << (float) TotalPenneis / 100;
    

    return 0;  
}