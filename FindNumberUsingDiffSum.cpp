#include <iostream>
#include <string>
using namespace std;
int main()
{
    int sum;
    cin >> sum; cin.ignore();
    int difference;
    cin >> difference; cin.ignore();
    int x , y ;
    x = (sum + difference) / 2;
    y = sum - x ;
    if ( x > y )
    {
    cout << y << endl << x ;
    }
    else 
    {
        cout << x << endl << y ;
    }
    return 0;
}