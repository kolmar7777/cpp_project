#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    string hair;
    string cheek;
    string eye;
    string nose;
    string mouth;
    string chin;
    cin >> hair >> cheek >> eye >> nose >> mouth >> chin; cin.ignore();
    cout << hair << hair << hair << hair << hair << endl ;
    cout << cheek << eye << " " << eye << cheek << endl ;
    cout << cheek << " " << nose << " " << cheek << endl ;
    cout << cheek << " " << mouth << " " << cheek << endl ;
    cout << " " << chin << " " << endl ;
    return 0;
}