#include <iostream>
#include <string>
using namespace std;
int main()
{
    char a , b , c , d , e , f , g , h , i ;
    cout << "play ur game and inset it to the program" << endl ;
    cin >> a >> b >> c ;
    cin >> d >> e >> f ;
    cin >> g >> h >> i ;
    if (a == b && c == b )
        {
            if (c == 'x')
                cout << "The X wins" ;
            else if(c == 'o')
                cout << "The O wins" ;    
        }
    else if (d == e && e == f )
    {
        if(f == 'x' )
            cout << "the X wins" ;
        else if (f == 'o')
            cout << "the O wins" ;
    }
    else if(g==h && h == i)
    {
        if(i == 'x')
            cout << "the X wins" ;
        else if (i == 'o')
            cout << "the O wins";
    }
    else if ( a == d && d == g )
    {
        if (g=='x')
            cout << "the X wins" ;
        else if (g == 'o')
            cout << "the O wins" ;
    }
    else if(b == e && e == h)
    {
        if (h=='x')
            cout << "the X wins" ;
        else if (h == 'o')
            cout << "the O wins" ;
    }
    else if(c == f && f == i)
    {
                if (i =='x')
            cout << "the X wins" ;
        else if (i == 'o')
            cout << "the O wins" ;
    }
    else if(a==e && e == i)
    {
        if (i == 'x')
            cout << "the X wins" ;
        else if (i == 'o')
            cout << "the O wins" ;
    }
    else if(c == g && g == e)
    {
        if (e =='x')
            cout << "the X wins" ;
        else if (e == 'o')
            cout << "the O wins" ;
    }
    else 
    {
        cout << "no body wins \n good luck";
    }
    return 0;
}