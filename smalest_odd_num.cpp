#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int list_of_numbers[5] , counter = 0 , temp , odd[5];
    for (int i = 0; i < 5 ; i++)
    {
        cin >> list_of_numbers[i] ;
    }
    for (int i = 0 ; i < 5; i++)
    {
        if (list_of_numbers[i] % 1 == 0 && list_of_numbers[i] % list_of_numbers[i] == 0)
        {
            odd[i] = list_of_numbers[1] ;
            counter ++ ;
        }
    }
    for (int i = 0; i < (counter - 1 ) ; i++)
    {
        for (int j = 0; (counter - 1 ) ; j++)
        {
            if (odd [ j ] > odd [ j + 1 ] )
            {
                temp = odd [ j ] ;
                odd [ j ] = odd [ j + 1 ] ;
                odd [ j + 1 ] = temp ;
            }
        }
    }
    return 0 ;
}
