#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string dna;
    getline(cin, dna);
    for (int i = 0; i < dna.size(); i++)
    {
        if (dna[i] == 'A')
        {
            for (int j = 0; j < 2 ; j++)
            {
                cout << dna[i] ;
            }
        }
        if (dna[i] == 'T')
        {
            for (int j = 0; j < 3 ; j++)
            {
                cout << dna[i] ;
            }
        }
        if (dna[i] == 'G')
        {
            dna.erase(remove(dna.begin(), dna.end(), 'G'), dna.end());
        }
        if (dna[i] == 'C')
        {
            cout << dna[i] ;
        }
    }
    return 0;
}