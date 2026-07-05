

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code


int ReadMark()
{
    int Mark;
    cout <<"Enter You'r Mark: ";
    cin >> Mark;
    return Mark;
}

enum enMark{Pass = 1, Fail = 2};
enMark checkMark(int Mark)
{
    if(Mark <= 50)
        return enMark::Fail;
    else
        return enMark::Pass;
}
void PrintResult(int Mark)
{
    if(checkMark(Mark) == enMark::Pass)
        cout << "You Pass Congratolation.\n";
    else
        cout <<"You Fail.\n";
}


int main()
{
    PrintResult(ReadMark());
    
    return 0;
}



