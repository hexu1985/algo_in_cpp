#include <stdio.h>

#include "skip_to_next_word.h"

int search(int[], int, int, int);

using namespace std;

int main() 
{
	int i=1, n, v;
	int a[100];

	printf("Enter the array: ");
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

int search (int a[], int v, int l, int r)
{
	while (r >= l)
	{
		int m = (l+r)/2;
		if (v == a[m])
			return m;
		if (v < a[m])
			r = m - 1;
		else
			l = m + 1;
	}
	return -1;
}
