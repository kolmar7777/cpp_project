#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s [ i ] ;
        if (ch == 'O' || ch == 'o')
        {
            s[i] = '0' ;
        }
        if (ch == 'L' || ch == 'l')
        {
            s[i] = '1' ;
        }
        if (ch == 'Z' || ch == 'z')
        {
            s[i] = '2' ;
        }
        if (ch == 'E' || ch == 'e')
        {
            s[i] = '3' ;
        }
        if (ch == 'A' || ch == 'a')
        {
            s[i] = '4' ;
        }
        if (ch == 'S' || ch == 's')
        {
            s[i] = '5' ;
        }
        if (ch == 'G' || ch == 'g')
        {
            s[i] = '6' ;
        }
        if (ch == 'T' || ch == 't')
        {
            s[i] =  '7' ;
        }
        if (ch == 'B' || ch == 'b')
        {
            s[i] = '8' ;
        }
        if (ch == 'Q' || ch == 'q')
        {
            s[i] = '9' ;
        }
    }
cout << s ;
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


}
// Your program must read the string given on the standard input and print to the standard output the same string converted into 1337 speak.

// To convert text into 1337 speak, one must replace (whether upper or lower case):
// 'O' with '0'.
// 'L' with '1'.
// 'Z' with '2'.
// 'E' with '3'.
// 'A' with '4'.
// 'S' with '5'.
// 'G' with '6'.
// 'T' with '7'.
// 'B' with '8'.
// 'Q' with '9'.
