#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int width;
    cin >> width;
    int height;
    cin >> height;
    for (int i = (height - 1) ; i >= 0; i--)
    {
        if ( i == 0 || i == (height - 1) )
        {
            for (int j = 0; j < width; j++)
            {
                cout << "*" ;
            }
            cout << endl ;
        }
        if( i < (height - 1) || i > 0)
        {
            for (int j = 0; j < width; j++)
            {
                if ( j == 0)
                {
                    cout << "*" ;
                }
                else if  ( j == (width - 1) )
                {
                    cout << "*" << endl ;
                }
                else 
                {
                    cout << " " ;
                }
            }
        }
    }
    return 0;
}