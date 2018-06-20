#include <iostream>
#include "Tree.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Tree t;

	t.root=t.add(20,t.root);
	t.add(25,t.root);
	t.add(10,t.root);
	t.add(50,t.root);
	t.add(20,t.root);

	t.display(t.root);
	t.remove(3);

	return 0;
}