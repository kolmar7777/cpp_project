#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int y ;
    int c , d ;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        c = 0 ;
        int x ;
        string word ;
        int id ;
        cin >> x ;
        cin >> word ;
        if (x <= 4)
        {
            cout << "yes" << endl;
        }
        else if ( x > 4 )
        {
            for (int i = 0 ; i < word.length() ; i++)
            {
                
                if (word[i] == 'a' || word[i] == 'e' || word[i] == 'u' || word[i] == 'i' || word[i] == 'o' )
                {
                    c = 0 ;
                }
                else 
                {
                    c ++ ;
                }
                d = max(d , c ) ;
            }
            if ( d == 4 )
            {
                cout << "No" << endl ;
            }
            else 
            {
                cout << "Yes" << endl ;
            }
            
        }
    }
    return 0;
}