//i have made really simple and easy code to understand
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s = "12345";
    stringstream sup(s);
    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    sup >> x;
    // Now the variable x holds the value 12345 in casted form
    cout << "Value of x : " << x;
    return 0;
}
