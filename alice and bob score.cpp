#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int repeat ;
    cin >> repeat;
    for (int i = 0; i < repeat ; i++)
    {
        int question_number , alice_score , bob_score ;
        cin >> question_number >> alice_score ;
        bob_score = question_number - alice_score ;
        cout << bob_score << endl ; 
    }
    return 0 ;
}