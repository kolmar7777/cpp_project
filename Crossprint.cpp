#include <iostream>
#include <string>
using namespace std;
int main()
{
    string words;
    int index ;
    getline(cin, words);
    string dit = " " ;
    index = words.find(dit) ;
    string f_1 = words.substr(0 , index);
    string f_2 = words.erase(0, index + 1 );
    
    for (int i = 0 ; i < f_1.length(); i++)
    {
        int id = f_1.find(f_2[0]) ;
        char c = f_1[i] ;
        c = toupper(c) ;
        cout << c ;
    }
    for (int j = 1 ; j < f_2.length() ; j ++ )
    {
        char ch = f_2[j] ;
        ch = toupper(ch) ;
        int temp = f_1.find(f_2[0]) ;
        cout << endl ;
        while (temp != 0 )
        {
            temp -- ;
            cout << " " ;
        }
        cout << ch ;        
    }
}

// input 
// cinnamon apple
// output 
// cinnamon
//     p
//     p
//     l
//     e