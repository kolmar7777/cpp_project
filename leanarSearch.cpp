#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arraySize ;
    int findMe ;
    int index = -1 ;
    cout << "inter ur array size : ";
    cin >> arraySize ;
    int a[arraySize] ;
    for (int i = 0 ; i < arraySize ; i++)
    {
        cout << "intert the index number => " << i +  1 << " : " ;
        cin >> a[i] ;
    }
    cout << "in ur array you wish to find => " ;
    cin >> findMe ;
    cout << "finding the element ... =>" ;
    for(int i = 0; i < arraySize; i++)
    {
        if (a[i] == findMe)
        {
            index = i ;
            break;
        }

    }
    if (index != -1)
        cout << "found with the index of '(" << index << ")' and the elemet of number '(" << index + 1 << ")' the search was about to find => " << findMe ;
    else 
        cout << "NOT Found " ;
    return 0;
}