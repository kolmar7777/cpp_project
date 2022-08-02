#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
    int num ;
    string input ;
    getline(cin, input) ;
    cin >> num ;
    if ( num == 1 )
    {
        for ( int i = 0; i < input.length() ; i++ )
        {
            if ( input[i] != ' ' ) 
            {
                cout << input[i] << " " ;
            }
        }
    }
    if ( num == 2 )
    {
        for ( int i = 0; i < input.length() ; i++)
        {
            input[i] = toupper( input[i] ) ;
            if ( input[i] != ' ' ) 
            {
                cout << input[i] << " " ;
            }
        }
    }
    if ( num == 3 )
    {
        for ( int i = 0; i < input.length() ; i++ )
        {
            if ( i % 2 == 0 )
            {
                if ( input[i] != ' ' ) 
                {
                    cout << input[i] ;
                }
            }
            else if ( i % 2 != 0 )
            {
                input[i] = toupper( input[i] ) ;
                if ( input[i] != ' ' ) 
                {
                    cout << input[i] ;
                }
            }
        }
    }
    return 0 ;
}