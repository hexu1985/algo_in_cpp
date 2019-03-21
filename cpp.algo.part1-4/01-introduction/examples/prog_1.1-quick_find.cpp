/* QUICK FIND ALGORITHM */

#include <iostream>

using namespace std;

static const int N = 10000;

int main()
{
	int p, q, i, t, id[N];

	for (i = 0; i < N; i++)
		id[i] = i;
	while (cin >> p >> q)
	{
		if (id[p] == id[q])
			continue;
		for (t = id[p], i = 0; i < N; i++)
			if (id[i] == t)
				id[i] = id[q];
		cout << " " << p << " " << q << endl;
	}
	return 0;
}
