#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    int num_1 , num_2 ;
    char c ;
    cin >> num_1 >> c >> num_2 ;
    if (c == '/')
    {
        cout << num_1 / num_2 << endl ;
    }
    if (c == '*')
    {
        cout << num_1 * num_2 << endl ;
    }
    if (c == '+')
    {
        cout << num_1 + num_2 << endl ;
    }
    if (c == '-')
    {
        cout << num_1 - num_2 << endl ;
    }
    return 0 ;
}