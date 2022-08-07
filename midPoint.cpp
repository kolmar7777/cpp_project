#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    float x_1;
    float y_1;
    cin >> x_1 >> y_1; cin.ignore();
    float x_2;
    float y_2;
    cin >> x_2 >> y_2; cin.ignore();
    float x_mid =( x_2 + x_1 ) / 2 ;
    float y_mid =( y_2 + y_1 ) / 2 ;
    
    cout << x_mid << " " << y_mid<< endl;
}