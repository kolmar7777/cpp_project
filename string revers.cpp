#include <iostream>
#include <string.h>
using namespace std;
void string_reverse ( string input ) ;
int main()
{
    string input ;
    cout << "inter ur string :" ;
    getline ( cin , input ) ;
    string_reverse ( input ) ;
    return 0 ;
}
void string_reverse ( string input )
{
    for ( int i = input.length () - 1 ; i >= 0  ; i -- )
    {
        cout << input[i] ;
    }
}