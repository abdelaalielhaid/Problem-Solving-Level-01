#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.



int ReadNumbers()
{
    int Number;
    
        cout << "Enter The Number.\n";
        cin >> Number;
        return Number;
}
int ReadPowers()
{
    int Power;
    
        cout << "Enter The Power.\n";
        cin >> Power;
        return Power;
}

int NumberOfM(int Power, int Number)
{
    if(Power == 0)
        return 1; // Ant thing Powerd to 0 giver Zero = 1 .

    int P = 1;
    for (int i = 1; i <= Power ; i++)
    {
        P = P * Number;
    }
    return P;

}


int main()
{
    
    // The excution Of Fanction Inside Fanction Star From Right To Left. 
    cout << NumberOfM(ReadPowers(), ReadNumbers()); 
    

    return 0;  
}