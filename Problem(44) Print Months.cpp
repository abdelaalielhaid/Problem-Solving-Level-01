#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


enum enOfMonths {January =1, February = 2, March = 3,
                April = 4, May = 5, June = 6,
                July = 7, August = 8, September = 9,
                October = 10,November = 11,December = 12};

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

enOfMonths CheckMonths()
{
    return (enOfMonths) ReadNumberInRange("Enter a Month 1 - 12: ",1, 12); // Data Typ Casting
}

string PrintMonths(enOfMonths Month)
{
    switch(Month)
    { /*We Don't Use 'Break' Statment Her Because of 
        The 'return' if It't true it Break The Case*/
    case enOfMonths::January:
        return "January.";
    case enOfMonths::February:
        return "February.";
    case enOfMonths::March:
        return "March.";
    case enOfMonths::April:
        return "April.";
    case enOfMonths::May:
        return "May.";
    case enOfMonths::June:
        return "June.";
    case enOfMonths::July:
        return "July.";
    case enOfMonths::August:
        return "August.";
    case enOfMonths::September:
        return "September.";
    case enOfMonths::October:
        return "October.";
    case enOfMonths::November:
        return "November.";
    case enOfMonths::December:
        return "December.";
    default:
        return "No a Valid Month."; 

    }
}
int main()
{
    cout << PrintMonths(CheckMonths());



    return 0;  
}