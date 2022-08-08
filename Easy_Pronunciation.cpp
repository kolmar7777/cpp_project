#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int y ;
    int c ;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        c = 0 ;
        int x ;
        string word ;
        cin >> x ;
        cin >> word ;
        if (x <= 4)
        {
            cout << "yes" << endl;
        }
        else if ( x > 4 )
        {
            for (int i = ( word.length() - 1 ) ; i >= 0 ; i -- )
            {
                
                if (word[i] == 'a' || word[i] == 'e' || word[i] == 'u' || word[i] == 'i' || word[i] == 'o')
                {
                    c ++ ;
                }
            }
            c = x - c ;
            if ( c >= 4 )
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