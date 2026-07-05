#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


float ReadTotalSales()
{
    int TotaSales;
    cout << "Plese Enter Total Seles: \n";
    cin >> TotaSales;

    return TotaSales;
}

float GetComisionPercentage(float TotalSales)
{
    if(TotalSales >= 1000000)
        return 0.01;
    else if(TotalSales >= 500000)
        return 0.02;
    else if(TotalSales >= 100000)
        return 0.03;
    else if(TotalSales >= 50000)
        return 0.05;
    else 
        return 0.00;
}

float CalculatTheComision(float TotaSales)
{
    return GetComisionPercentage(TotaSales) * TotaSales;
}

int main()
{
    int TotaSales = ReadTotalSales();
    cout << endl <<"Comision Percentage: " << GetComisionPercentage(TotaSales);
    cout << endl <<"Comision of Sales: " << CalculatTheComision(TotaSales);
    

    return 0;  
}