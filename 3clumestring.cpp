##include <iostream>
#include <string>
void add(int x, int y);
void multypy(int x, int y);
void mines(int x, int y);
void divide(int x, int y);
using namespace std;
int main()
{
    char ch;
    cout << "inter the oper";
    cin >> ch;
    cout << "inter two num in a row sep by entar";
    int a, b;
    cin >> a >> b;
    switch (ch)
    {
    case '+':
        add(a, b);
    case '-':
        mines(a, b);
    case '*':
        multypy(a, b);
    case '/':
        divide(a, b);
    }
    return 0;
}

void add(int x, int y)
{
    cout << x + y;
}

void multypy(int x, int y)
{
    x = x * y;
    cout << x;
}

void divide(int x, int y)
{
    if (y > 0)
        cout << x / y;
    else
        cout << "invalid";
}
void mines(int x, int y)
{
    cout << x - y;
}