#include <iostream>
#include <string>

using namespace std;
int main()
{
    string a;
    getline(cin, a);
    string c;
    getline(cin, c);
    string al = ("abcdefghijklmnopqrstuvwxyz") ;
    for (int i = 0; i < c.length(); i++)
    {
        int index = a.find( c[i] ) ;
        char ch = al[index] ;
        ch = toupper(ch) ;
        cout << ch ; // comment
        
    }
}