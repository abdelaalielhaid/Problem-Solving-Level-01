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

struct StaTaskDuration
{
    int Days, Hours, Minutes, Secendes;
};

StaTaskDuration ReadTaskDuaration()
{
    StaTaskDuration Duaration;

    Duaration.Days = ReadPositivNumber("Enter Days: ");
    Duaration.Hours = ReadPositivNumber("Enter Hours: ");
    Duaration.Minutes = ReadPositivNumber("Enter Minutes: ");
    Duaration.Secendes = ReadPositivNumber("Enter Secendes: ");

    return  Duaration;
}

float TaskDuarationToSecendes(StaTaskDuration Duaration)
{
    int TotalTaskDuaration = 0;

    TotalTaskDuaration = Duaration.Days * 24 * 60 * 60;
    TotalTaskDuaration += Duaration.Hours * 60 * 60;
    TotalTaskDuaration += Duaration.Minutes * 60;
    TotalTaskDuaration += Duaration.Secendes;

    return TotalTaskDuaration;
}



int main()
{
    
    cout << endl << "Total Secendes is: " << TaskDuarationToSecendes(ReadTaskDuaration());



    return 0;  
}