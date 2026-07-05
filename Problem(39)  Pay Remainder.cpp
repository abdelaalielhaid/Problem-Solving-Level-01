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

float CalculatRemainder(float TotalBill, float TotalCashPaid )
{
    return  TotalCashPaid - TotalBill ;
}




int main()
{
    float Total = ReadPositivNumber("Enter The Total: ") ;
    float CashPaid = ReadPositivNumber("Enter Cash Paid: ");

    cout << "The Total is: " << Total << " $" <<endl;
    cout << "Enter The Cash Paid: " <<  CashPaid << " $" <<endl;

    cout <<"The Remainder is: " << CalculatRemainder(Total, CashPaid) <<" $";


    return 0;  
}