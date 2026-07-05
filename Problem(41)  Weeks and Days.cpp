#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


float ReadPositivNumber(string Masseg)
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

float HoursToDays(float Hours)
{
    return (float) Hours / 24;
}

float HoursToWeeks(float Hours)
{
    return (float) Hours / 24 / 7;
}

float DaysToWeeks(float Days)
{
    return (float) Days / 7;
}


int main()
{
    
    float Hours = ReadPositivNumber("Enter Total Hours: ");
    float Days = HoursToDays(Hours);
    float Weeks = DaysToWeeks(Days);


    cout << "Total Hours is: " << Hours << endl;
    cout << "Hours to Days is: " << Days << endl; 
    cout << "Days to Weeks is: " << Weeks<< endl; 



    return 0;  
}