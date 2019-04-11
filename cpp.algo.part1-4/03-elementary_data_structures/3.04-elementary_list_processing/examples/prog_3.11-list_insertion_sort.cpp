#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct node                                                                       
{ 
	int item; 
	node* next; 

	node(int x, node* t) 
	{ item = x; next = t; } 
};

typedef node *link;

void print_list(link);

static const int N = 10;

int main(void) 
{
	node heada(0, 0); link a = &heada, t = a; 
	for (int i = 0; i < N; i++)
		t = (t->next = new node(rand() % 1000, 0)); 
	print_list(heada.next);
	node headb(0, 0); link u, x, b = &headb;
	for (t = a->next; t != 0; t = u)
	{
		u = t->next;
		for (x = b; x->next != 0; x = x->next)
			if (x->next->item > t->item) break;
		t->next = x->next; x->next = t; 
	}
	print_list(headb.next);

	return 0;
}

void print_list(link t)
{
	while (t != NULL)
	{
		cout << t->item << " ";
		t = t->next;
	}
	cout << "\n";
}

