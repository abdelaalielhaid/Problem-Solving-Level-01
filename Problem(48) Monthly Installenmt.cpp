#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.



int ReadPositivNumber(string Masseg)
{
    int Number = 0;
    do
    {
        cout << Masseg ;
        cin >> Number;
    } while (Number < 0 );
    return Number;
}

float MonthlyInstallement(float  Loan, float Month)
{
    return (float)Loan / Month;
}


int main()
{
    int loan = ReadPositivNumber("enter loun a Month: ");
    int MonthDoYoNeed = ReadPositivNumber("enter Monthly Dou You Need: ");

    cout << endl << "Monthly Installement: " << MonthlyInstallement(loan, MonthDoYoNeed);

    return 0;  
}