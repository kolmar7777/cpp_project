#include <iostream>
#include <string>
using namespace std;
int main()
{
    int b[5] , c[5] , sum = 0 ;
    for (int i = 0; i < 5; i++)
    {
        int a ;
        cin >> a ;
        b[i] = a ;
        c[i] = a ;
    }
    for (int i = 0 ; i < 4 ; i++)
    {
        for(int j = i + 1 ; j < 5 ; j++)
        {
            if (b[i] < b[j])
            {
                int temp = b[i] ;
                b[i] = b[j] ;
                b[j] = temp ;
            }
        }
    }
    for (int i = 0 ; i < 3 ; i++)
        sum += b[i] ;

    cout << "the sum is : " <<sum/3 ;
    return 0;
}