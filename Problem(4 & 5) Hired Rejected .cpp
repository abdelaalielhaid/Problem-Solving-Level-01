

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
    int age;
    bool HasDirivingLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo info;
    cout << "Enter You'r Age: \n";
    cin >> info.age;
    cout << "Dou you Have Driving License ? (1 for Yes, 0 for No): \n";
    cin >> info.HasDirivingLicense;
    cout << "Dou you Have Recommendation ? (1 for Yes, 0 for No): \n";
    cin >> info.HasRecommendation;

    return info;
}

bool IsAcsepted(stInfo info)
{
    if (info.HasRecommendation)
    {
        return true;
    }else
        return (info.age > 21 && info.HasDirivingLicense);
}

void PrintResult(stInfo Info)
{
    if (IsAcsepted(Info) == true)
    
        cout << "\n Hired.";
    else 
        cout << "\n Rejected.";
}


int main()
{
    PrintResult(ReadInfo());
    
    return 0;
}



