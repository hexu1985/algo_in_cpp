/* QUICK UNION ALGORITHM */

#include <iostream>

using namespace std;

static const int N = 10000;

int main()
{
	int p, q, i, j, id[N];

	for (i = 0; i < N; i++)
		id[i] = i;
	while (cin >> p >> q)
	{
		for (i = p; i != id[i]; i = id[i]);
		for (j = q; j != id[j]; j = id[j]);
		if (i == j)
			continue;
		id[i] = j;
		cout << " " << p << " " << q << endl;
	}
	return 0;
}
