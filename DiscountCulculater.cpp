#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    for (int i = 0; i < t ; i++)
    {
        int buy = 100 ;
        int discount ;
        cin >> discount ;
        discount = buy - (buy / 100 ) * discount ;
        cout << discount << endl ;
    }
    return 0;
}