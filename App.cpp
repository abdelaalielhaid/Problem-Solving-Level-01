

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

string redName ()
{
    string name;
    cout << "Enter You'r Name: \n";
    getline(cin, name); // we are using Geli liine To avoid problem of Skip Whtite space

    return name;
}

void printName(string &name)
{
    cout << "You'r Name is: " << name <<"." << endl;
}



int main()
{
    
    redName();
    
    return 0;
}