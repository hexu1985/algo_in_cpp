#include <iostream>
#include <stdlib.h>

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
link reverse(link);

static const int N = 10;

int main(void) 
{
	link t = new node(1, 0);
	link head = t;
	for (int i = 2; i < N+1; i++)
		t = (t->next = new node(i, 0));
	print_list(head);
	head = reverse(head);
	print_list(head);
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

link reverse(link x)
{ 
	link t, y = x, r = 0;
	while (y != 0)
	{ t = y->next; y->next = r; r = y; y = t; }    
	return r;
}

