

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Enter You'r First Name: \n";
    cin >> Info.FirstName;
    cout << "Enter You'r Last Name: \n";
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info, bool Reverse)
{
    string FullName;
    if (Reverse == true)
    FullName = Info.LastName + " " + Info.FirstName;
    
    else
    FullName = Info.FirstName + " " + Info.LastName;

    return FullName;
}
void PrintFullName(string FullName)
{
    cout << "You'r Name is: \n" << FullName << endl;
}
int main()
{
    
    PrintFullName(GetFullName(ReadInfo() , true));
    cout << "***************\n";
    PrintFullName(GetFullName(ReadInfo() ,false));
    return 0;
}



