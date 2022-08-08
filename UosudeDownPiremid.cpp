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
    int size ;
    cin >> size; cin.ignore();
    for (int i = 0 ; i < size ; i ++)
    {
        
        for (int j = i ; j < size ; j ++)
        {
            cout << "*" ;
        }
        cout << endl ;
        
    }
}