#include <cmath>
#include <iostream>
using namespace std;
 
// Driver function
int main()
{
    // taking input 1
    int a = 4;
    int b = 3;
    int val = (a / b) + ((a % b) != 0);
    cout << "The ceiling value of 4/3 is "
         << val << endl;
 
    // example of perfect division
    // taking input 2
    a = 6;
    b = 3;
    val = (a / b) + ((a % b) != 0);
    cout << "The ceiling value of 6/3 is "
         << val << endl;
 
    return 0;
}
