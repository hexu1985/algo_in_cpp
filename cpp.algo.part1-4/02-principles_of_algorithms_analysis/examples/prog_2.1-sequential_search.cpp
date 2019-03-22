#include <iostream>

#include "skip_to_next_word.h"

using namespace std;

int search(int[], int, int, int);

int main() 
{
	int i=1, n, v;
	int a[100];

	cout << "Enter the array: ";
	while (i < 100 && cin >> a[i])
		++i;
	n = i-1;
	cin.clear();
	skip_to_next_word();
	cout << "\nEnter the number to search: ";
	cin >> v;
	cout << search(a, v, 1, n) << endl;
	return 0;
}

int search(int a[], int v, int l, int r)
{
	int i;
	for (i = 1; i <= r; i++)
		if (v == a[i])
			return i;
	return -1;
}
