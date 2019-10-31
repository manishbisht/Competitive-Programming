#include <bits/stdc++.h>
using namespace std;

struct disjointSetNode	{
	int data;
	int rank;
	struct disjointSetNode* parent;
	int frequency;
};

map <int, disjointSetNode*> disjointSet;

void makeSet(int element)	{
	struct disjointSetNode* root = new disjointSetNode;
	root->data = element;
	root->rank = 0;
	root->parent = root;
	root->frequency = 1;
	disjointSet[element] = root;
}

struct disjointSetNode* findSet(struct disjointSetNode* root)	{
	struct disjointSetNode* parent = root->parent;
	if(parent == root)	{
		return parent;
	}
	root->parent = findSet(root->parent);
	return root->parent;
}

void Union(int element1, int element2)	{
	struct disjointSetNode* parent1 = findSet(disjointSet[element1]);
	struct disjointSetNode* parent2 = findSet(disjointSet[element2]);

	if(parent1->data == parent2->data)	{
		return;
	}

	if(parent1->rank >= parent2->rank)	{
		parent1->rank = (parent1->rank = parent2->rank) ? parent1->rank + 1 : parent1->rank;
        parent2->parent = parent1;
        parent1->frequency += parent2->frequency;
    }
    else {
        parent1->parent = parent2;
        parent2->frequency += parent1->frequency;
    }
    return;
}

int elementsInSet(int element)	{
	struct disjointSetNode* root = disjointSet[element]->parent;
    while(root->parent != root) {
        root = root->parent;
    }
	return root->frequency;
}

int main()	{
	makeSet(1);
	makeSet(2);
	makeSet(3);
	makeSet(4);
	makeSet(5);
	makeSet(6);
	makeSet(7);

	Union(1,2);
	Union(2,3);
	Union(4,5);
	Union(5,6);
	Union(3,4);

	findSet(disjointSet[1]);

	cout << elementsInSet(1);
}
