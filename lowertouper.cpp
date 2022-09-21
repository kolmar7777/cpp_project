#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int x[3][3][3];
	for (int i = 0; i < 3; i++)
	{
        cout << "*";
		for (int j = 0; j < 3; j++)
		{
            cout<< "*";
			for (int z = 0; z < 3; z++)
			{
				cout<<"*";
			}
            cout<< endl;
		}
        cout<< endl;
	}
}