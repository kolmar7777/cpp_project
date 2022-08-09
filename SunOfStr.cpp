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
    string a;
    int sum = 0 ;
    cin >> a; cin.ignore();
    string num = "0123456789" ;
    string lower = "0abcdefghijklmnopqrstuvwxyz" ;
    string upper = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
    for (int i = 0; i < a.length(); i++)
    {
        if (isupper(a[i]))
        {
            int index = upper.find(a[i]) ;
            sum += ( index * 3 ) ;
        }
        if (islower(a[i]))
        {
            int index = lower.find(a[i]) ;
            sum += ( index * 2 ) ;
        }
        if (isdigit(a[i]))
        {
            int index = num.find(a[i]) ;
            sum += index ;
        }
    }
    cout << sum ;
}


// it reseave a str contaned of upeer lower and num if its uper its palace * 3 in alfbat in lower place * 2 and finuly for num its value 
// after processing it will show to sum of the whole str 