#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a ;
    cout << "lets play inter 1 as no and 0 as yes" << endl;
    cout << "are u ok ? " ;
    cin >> a ;
    switch (a) 
    {
        case 0 :
         cout << "did u have good day ? " ;
            cin >> a ;
            switch (a)
            {
                case 0:
                    cout << "nice my firend ! \n so what do u do for living are u working ??? " ;
                    cin >> a ;
                        switch (a)
                        {
                        case 0:
                            cout << "well done \n do u like ur job ?? " ;
                            cin >> a ;
                            switch (a)
                            {
                                case 0 :
                                cout << "are u a coder or programmer ?? (1 for coder) (0 for programer) " ;
                                cin >> a ;
                                switch (a)
                                {
                                    case 0 :
                                        cout << "so we are the same see u soon" ;
                                        break;
                                    case 1 :
                                        cout << "do u wanna know the diff between thesm ?? ";
                                        cin >> a ;
                                        switch (a)
                                        {
                                            case 0:
                                                cout << "coder just code but programmer do a lot of good tasks /n its time to say goodby";
                                                break ;
                                            case 1 :
                                                cout << " ok goodby" ;
                                                break ;
                                            defualt :
                                             cout << "wrong aswer start agane";
                                             break ;
                                    
                                        }
                                }
                            }
                            break;
                        case 1:
                            cout << "chenge ur job u must do what u like";
                            break;
                        }
                    break;
                case 1 :
                    cout << "go find a job for urself" << endl;
                    break;
            }
            break;
        case 1 :
            cout << " so be good " ;
            break ;
    }
    return 0;
}