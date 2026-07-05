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

float TotalMnth(float  LounAmount, float MonthlyInstalment)
{
    return (float)LounAmount / MonthlyInstalment;
}


int main()
{
    int LounAmount = ReadPositivNumber("enter loun a Month: ");
    int MonthlyInstalment = ReadPositivNumber("enter Monthly Instalment: ");

    cout << endl << "Total Month To Pay is: " << TotalMnth(LounAmount, MonthlyInstalment);

    return 0;  
}