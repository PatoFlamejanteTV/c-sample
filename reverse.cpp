// A Simple C++ program to reverse a string
// from https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
string reverseStr(string str)
{
	int n = str.length();

	// Swap character starting from two
	// corners
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);

    return str;
}

// Driver program
int main(int argc, char **argv)
{
	string str = argc > 1 ? argv[1] : "geeksforgeeks";
	string rString = reverseStr(str);
	cout << rString;
	return 0;
}
