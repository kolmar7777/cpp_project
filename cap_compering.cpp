#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int repeat ;
    cin >> repeat;
    for (int i = 0; i < repeat ; i++)
    {
        int first_cab_service_charges , second_cab_service_charges ;
        cin >> first_cab_service_charges >> second_cab_service_charges ;
        if (first_cab_service_charges > second_cab_service_charges )
        {
            cout << "second" << endl ;
        }
        else if (first_cab_service_charges < second_cab_service_charges )
        {
            cout << "first" << endl ;
        }
        else if (first_cab_service_charges == second_cab_service_charges )
        {
            cout << "any" << endl ;
        }
    }
    return 0 ;
}