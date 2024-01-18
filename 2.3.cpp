#include <bits/stdc++.h>
using namespace std;

// Function to print first n Catalan numbers
void catalan(int n)
{
	int res = 1;
	cout << res << " ";
	// Iterate till n
	for (int i = 1; i < n; i++) {
		// Calculate the ith Catalan number
		res = (res * (4 * i - 2)) / (i + 1);
		cout << res << " ";
	}
}

// Driver code
int main()
{
	int n = 10;

	// Function call
	catalan(n);
	return 0;
}
