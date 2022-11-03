#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ch ;
    double a , b ;
    cin >> a >> ch >> b;
    double out = 0;
    switch(ch)
     {
        case '+':
        out = a + b ;
        break ;
        case '-':
        out = a - b ;
        break ;
        case '*':
        out = a * b ;
        break ;
        case '/' :
        if (b > 0)
        {
            out = a / b ;
            break;
        }
        else 
        {
            cout << "b cannot be 0 in devition pls try agane" ;
            break;
        }
        default :
        cout << "invalid operator " ;
        break;
    }
    cout << out ;
    return 0;
}