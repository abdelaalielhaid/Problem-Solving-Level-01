#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


int ReadNumberInRange(int From, int To)
{
    int Grade;
    do
    {
        cout << "Plese Enter You'r Grade: \n";
        cin >> Grade;
    } while (Grade < From || Grade > To);
    
    return Grade;
}

char PrintGrade(int Grade)
{
    if(Grade >= 90)
        return 'A';
    else if(Grade >= 80)
        return 'B';
    else if(Grade >= 70)
        return 'C';
    else if(Grade >= 60)
        return 'D';
    else if(Grade >= 50)
        return 'E';
    else 
    return 'F';
}


int main()
{
    
    cout << PrintGrade(ReadNumberInRange(0, 100));
    

    return 0;  
}