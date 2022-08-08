#include <iostream>
using namespace std;
int main()
{
    int cout_up ;
    cin >> cout_up ;
    for (int i = cout_up - 1 ; i >= 0 ; i --)
    {
        for (int j = 1 ; j <= cout_up ; j++)
        {
            cout << j ;
        }
    }
    return 0 ;
}