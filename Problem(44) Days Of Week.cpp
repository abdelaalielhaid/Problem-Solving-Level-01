#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


enum enOfDays {Monday = 1, Tuesday = 2, 
    Wednesday = 3, Thursday = 4, Friday = 5, 
    Saturday = 6, Sunday = 7, De = 8};

int ReadNumberInRange(string Masseg, int From, int To)
{
    int Number = 0;

    do
    {
        cout << Masseg ;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

enOfDays Check()
{
    return (enOfDays) ReadNumberInRange("Enter a Number: ",1, 7);
}

string PrintDays(enOfDays Days)
{
    switch(Days)
    { 
    case enOfDays::Monday:
        return "Monday.";
    case enOfDays::Tuesday:
        return "Tuesday.";
    case enOfDays::Wednesday:
        return "Wednesday.";
    case enOfDays::Thursday:
        return "Thursday.";
    case enOfDays::Friday:
        return "Friday.";
    case enOfDays::Saturday:
        return "Saturday.";
    case enOfDays::Sunday:
        return "Sunday.";
    default:
        return "No a Valid Day."; 

    }
}
int main()
{
    cout << PrintDays(Check());



    return 0;  
}