#include <iostream>
using namespace std;
int main()
{
    int length , largest_num ;
    cin >> length ;
    int array [length][length] ;
    for (int i = 0 ; i < length ; i ++ )
    {
        for (int j = 0 ; j < length ; j ++ )
        {
            cin >> array[i][j] ;
        }
    }
    for (int i = 0 ; i < length ; i ++ )
    {
        for (int j = 0 ; j < length ; j ++ )
        {
            if ( array[i][j] > largest_num)
            {
                largest_num = array[i][j] ;
            }
        }
    }
    for (int i = 0 ; i < length ; i ++ )
    {
        for (int j = 0 ; j < length ; j ++ )
        {
            if (array[(length/2)][(length/2)] == largest_num)
            {
                cout << "true"; 
            }
            else 
            {
                cout << "false" ;
            }
        }
    }
}