#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x ;
    cin >> x ;
    for (int i = 0; i < x ; i++)
    {
        string input ;
        getline(cin, input) ;
        for (int j = input.length() - 2 ; j > input.length() ; j--)
        {
            if ( input[j] % 4 == 0 )
            {
                cout << "true" ;
            }
            else if ( input[j] % 4 != 0 )
            {
                cout << "false" ;
            }
            if ( input[j] == 'x' || input[j] == 'X')
            {
                cout << "idk" ;
            }
        }
    }
    return 0 ;
}