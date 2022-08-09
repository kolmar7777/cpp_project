#include <iostream>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	
	for (int i = 0 ; i < t ; i ++ )
	{
	    int move , state ;
	    cin >> move >> state ;
	    if (move == 3 || move == 2 )
	    {
	    	cout << "Ambiguous" ;
	    }
	    else if (move == 0 || move == 4 && state == 0 )
	    {
	        cout << "On" ;
	    }
	    else if (move == 0 || move == 4 || move == 1&& state == 4 )
	    {
	        cout << "Off" ;
	    }
	}
	return 0;
}
