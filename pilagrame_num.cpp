// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count
// of N-digit palindrome numbers
int nDigitPalindromes(int n)
{
	return (9 * pow(10, (n - 1) / 2));
}

// Driver code
int main()
{
	int n = 2;

	cout << nDigitPalindromes(n);

	return 0;
}
