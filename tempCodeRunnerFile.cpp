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
    string text;
    char ch ;
    getline(cin, text);
    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]) )
        {
            ch = tolower(text[i]) ;
            cout << ch ;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << "result" << endl;
}