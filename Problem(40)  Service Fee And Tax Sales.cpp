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

float TotalBillAftherTaxAndSalesService(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}




int main()
{
    float TotalBill = ReadPositivNumber("Enter The Total Bill: ") ;
    

    cout << "The Total is: " << TotalBill << " $" <<endl;

    cout << "The Total is Afther Tax and Sales Service: " 
    <<  TotalBillAftherTaxAndSalesService(TotalBill) 
    << "$" <<endl;



    return 0;  
}