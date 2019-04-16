#include "list.h"

#define N 1000

int main(void) 
{
	link t, u;

	construct(N);
	t = newNode(1);
	u = newNode(2);
	insert(t, u);
	return 0;
}
