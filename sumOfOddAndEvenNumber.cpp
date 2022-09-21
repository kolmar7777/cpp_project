#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    int sum_odd , sum_even ;
    cin >> n; cin.ignore();
    for (int i = 1; i <= n; i+=2)
    {
        sum_odd += i ;
    }
    for (int i = 0 ; i <= n; i+=2)
    {
        sum_even += i ;
    }
    cout << sum_odd << endl;
    cout << sum_even << endl;
}