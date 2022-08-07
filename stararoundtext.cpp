#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input ;
    int size ;
    cout << " input the text :" ;
    getline( cin , input );
    size = input.length() + 4;
    for ( int i = 0; i < 3 ; i++ )
    {
        if (i == 0 )
        {
            for ( int j = 0; j < size ; j++ )
            {
                cout << "*" ;
            }
            cout << endl ;
        }
        if ( i == 1 )
        {
            cout << "* " << input << " *" << endl ;
        }

        if ( i == 2 )
        {
            for ( int j = 0; j < size ; j++ )
            {
                cout << "*" ;
            }
        }
    }
    return 0 ; 
}