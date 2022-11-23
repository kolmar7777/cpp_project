#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sudent[5] = { "ali","amin","saleh" ,"sahar" ,"reza" };
    string Admin = "nima";
    string selected[2];
    string subject[5];
    int vahed[5];
    cout << "inter ur name to do the task assige : ";
    string name;
    cin >> name;
    if (name == "nima")
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "inter the sub name ";
            cin >> subject[i];
            
            cout << "inter the vahed of " << subject[i] << " : " ;
            cin >> vahed[i] ;
            cout << endl ;
        }
        cout << "the subject were added\n\n\n\n\n" << endl;
    }
    else if (name != "nima")
        cout << "the admin must identify the sub first";
    int j = 0;
    while (j < 2)
    {
        if (subject[4].empty())
        {
            cout << "no subject";
            break;
        }
        cout << "sudent intre ur name : ";
        cin >> name ;
        cout << "inter ur score : (max = 20 manfi ham nabashe)" ;
        int Score ;
        cin >> Score ;
        bool a;
        int limit = 0 ;
        for (int i = 0; i < 5; i++)
        {
            if (sudent[i] == name)
            {
                if(Score >= 12 )
                    limit = 20 ;
                else 
                    limit = 14 ;
                a = 1;
                break;
            }
            else if (i==4)
            {
                cout << "student not found ";
                a = 0;
            }
        }
        if (a)
        {
            string selected[10];
            int VahedHa = 0 ;
                
            for (int m = 0; VahedHa <= limit ; m++)
            {
                for (int i = 0; i < 5; i++)
                    cout << "code darse => " << subject[i] << " is => " << i + 1 << endl ;
                int b;
                char c;
                cin >> b;
                switch (b)
                {
                case 1:
                    cout << "selected sun is => " << subject[0] << " do u confirme ?(y/n) : ";
                    cin >> c;
                    if (c == 'y')
                    {
                        selected[m] = subject[0];
                        VahedHa += vahed[m];
                        cout << "tedad vahed entchabi shoma ta alan is => " << VahedHa << endl ;
                        break;
                    }
                    else
                    {
                        m--;
                        break;
                    }
                        
                case 2:
                    cout << "selected sun is => " << subject[1] << " do u confirme ? : (y/n)";
                    cin >> c;
                    if (c == 'y')
                    {
                        selected[m] = subject[1];
                        VahedHa += vahed[m];
                        cout << "tedad vahed entchabi shoma ta alan is => " << VahedHa << endl ;
                        break;
                    }
                    else
                    {
                        m--;
                        break;
                    }
                case 3:
                    cout << "selected sun is => " << subject[2] << " do u confirme ? :(y/n) ";
                    cin >> c;
                    if (c == 'y')
                    {
                        selected[m] = subject[2];
                        VahedHa += vahed[m];
                        cout << "yedad vahed entchabi shoma ta alan is => " << VahedHa << endl ;                        
                        break;
                    }
                    else
                    {
                        m--;
                        break;
                    }
                case 4:
                    cout << "selected sun is => " << subject[3] << " do u confirme ? : (y/n)";
                    cin >> c;
                    if (c == 'y')
                    {
                        selected[m] = subject[3];
                        VahedHa += vahed[m];
                        cout << "yedad vahed entchabi shoma ta alan is => " << VahedHa << endl ;
                        break;
                    }
                    else
                    {
                        m--;
                        break;
                    }
                case 5:
                    cout << "selected sun is : " << subject[4] << " do u confirme ? :(y/n) ";
                    cin >> c;
                    if (c == 'y')
                    {
                        selected[m] = subject[4];
                        VahedHa += vahed[m];
                        cout << "yedad vahed entchabi shoma ta alan is => " << VahedHa << endl ;
                        break;
                    }
                    else
                    {
                        m--;
                        break;
                    }
                default:
                    cout << "dose not esist";
                    m--;
                    break;

                }
            }
            j++;
            for (int i = 0; i < 10; i++)
                cout << i + 1 << " selected sub is " << selected[i] << "\n";
        }
    }
    return 0;
}

