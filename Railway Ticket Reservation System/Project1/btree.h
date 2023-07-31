#pragma once
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<queue>
using namespace std;

class node
{
public:
	int a[4];
	node* next[4];
	node* parent;
	int size;
	node();
};
node::node()
{
	for (int i = 0; i < 4; i++)
		next[i] = NULL;
	parent = NULL;
	size = 0;
}

class btree
{


public:
	node* root;
	int dg=0, fg1=0;
	node* findLeaf(int key, int& level);
	void updateKey(node* p, node* c, int newkey);
	int search(int key);
	void insert(int key);
	void insertIntoNode(node* n, int key, node* addresss);
	void promote(node* n, int key, node* addresss);
	node* split(node* n);
	void traverse(node* ptr);
	void remove(int key);
	btree();
};
void btree::traverse(node* ptr)
{
	fstream file;
	if (ptr == NULL)
		return;
	//cout << "\nLevel: " << pos<<"->";
	queue<pair<node*, int> > queue;
	queue.push(make_pair(ptr, 1));
	int currentLevel = 0;
		file.open("Btree.txt", ios::out);
	while (!queue.empty())
	{
		pair<node*, int> item = queue.front();
		queue.pop();
		node* temp = item.first;
		int level = item.second;
		// If the level has increased, start a new line
		if (level != currentLevel)
		{
			file << "\nLevel " << level << ": ";
			currentLevel = level;
		}

		// Print node data
		for (int i = 0; i < temp->size; i++)
			file << temp->a[i] << " ";
		file << "  |  ";
		// Add children to queue
		for (int i = 0; i < temp->size; i++)
			if (temp->next[i])
				queue.push(make_pair(temp->next[i], level + 1));
	}
	file << "\n";
	file.close();
}
btree::btree()
{
	root = NULL;
}
node* btree::findLeaf(int key, int& level)
{
	node* ptr = root;
	node* prevptr = NULL;
	level = 0;
	int i;
	while (ptr)
	{
		i = 0;
		level++;
		while (i<ptr->size - 1 && key>ptr->a[i])
			i++;
		prevptr = ptr;
		ptr = ptr->next[i];
	}

	return prevptr;
}
node* btree::split(node* n)
{
	int midpoint = (n->size + 1) / 2;
	int newsize = n->size - midpoint;
	node* newptr = new node;
	node* child;
	newptr->parent = n->parent;
	int i;
	for (i = 0; i < midpoint; i++)
	{
		newptr->a[i] = n->a[i];
		newptr->next[i] = n->next[i];
		n->a[i] = n->a[i + midpoint];
		n->next[i] = n->next[i + midpoint];
	}
	n->size = midpoint;
	newptr->size = newsize;
	for (i = 0; i < n->size; i++)
	{
		child = n->next[i];
		if (child != NULL)
			child->parent = n;
	}
	for (i = 0; i < newptr->size; i++)
	{
		child = newptr->next[i];
		if (child != NULL)
			child->parent = newptr;
	}
	return newptr;
}
void btree::updateKey(node* parent, node* child, int newkey)
{
	if (parent == NULL)
		return;
	if (parent->size == 0)
		return;
	int oldkey = child->a[child->size - 2];
	for (int i = 0; i < parent->size; i++)
		if (parent->a[i] == oldkey)
		{
			parent->a[i] = newkey;
			parent->next[i] = child;
		}
}
void btree::insertIntoNode(node* n, int key, node* address)
{
	int i;
	if (n == NULL)
		return;
	for (i = 0; i < n->size; i++)
		if (n->a[i] == key)
			return;
	i = n->size - 1;
	while (i >= 0 && n->a[i] > key)
	{
		n->a[i + 1] = n->a[i];
		n->next[i + 1] = n->next[i];
		i--;
	}
	i++;
	n->a[i] = key;
	n->next[i] = address;
	n->size++;
	if (i == n->size - 1)
		updateKey(n->parent, n, key);
}
void btree::promote(node* n, int key, node* address)
{
	if (n == NULL)
		return;
	if (n->size < 4)
	{
		insertIntoNode(n, key, address);
		return;
	}
	if (n == root)
	{
		root = new node;
		n->parent = root;
	}
	node* newptr = split(n);
	node* t;
	if (key < n->a[0])
		t = newptr;
	else
		t = n;
	insertIntoNode(t, key, address);
	promote(n->parent, n->a[n->size - 1], n);
	promote(newptr->parent, newptr->a[newptr->size - 1], newptr);
}
void btree::insert(int key)
{
	fstream file;
	if (root == NULL)
	{
		root = new node;
		root->a[root->size] = key;
		root->size++;
		return;
	}
	int level;
	node* leaf = findLeaf(key, level);
	int i;
	for (i = 0; i < leaf->size; i++) {
		if (leaf->a[i] == key)
		{
			fg1 = 1;
			cout << "The key to be inserted already exists" << endl;
			return;
		}
	}
	promote(leaf, key, NULL);
	file.open("Btree.txt",ios::app);
	file << "------------------\n";
	traverse(root);
	file << "------------------\n";
	file.close();

}
int btree::search(int key)
{
	dg = 0;
	if (root == NULL)
	{
		cout << "The tree does not exist" << endl;
		return 0;
	}
	int level;
	node* leaf = findLeaf(key, level);
	int flag = 0;
	for (int i = 0; i < leaf->size; i++) {
		if (leaf->a[i] == key)
		{
			
			flag = 1;
			dg = 1;
			cout << "The key " << key << " exists in the B-tree at the level" << level << endl;
			return 1;
		}
	}
	if (!flag) {
		
		cout << "The key searched for was not found" << endl;
		return 0;
	}


}



int removeKey(node* n, int key)

{
	int idx;
	for (idx = 0; idx < n->size && n->a[idx] < key; ++idx);  // find the key's index in the node
	if (idx < n->size && n->a[idx] == key)  // if the key is in the node
	{
		if (n->next[0] != NULL)  // if the node is not a leaf node
		{
			node* child = n->next[idx];
			while (child->next[child->size]) child = child->next[child->size];  // find the predecessor
			n->a[idx] = child->a[child->size - 1];
			removeKey(child, child->a[child->size - 1]);
		}
		else
		{
			for (int i = idx + 1; i < n->size; ++i)
			{
				n->a[i - 1] = n->a[i];
				n->next[i] = n->next[i + 1];

			}
			n->size--;
			return 1;
		}

	}

	else

	{

		removeKey(n->next[idx], key);

	}

}




void btree::remove(int key)

{
	int flag = 0;
	if (!root) return;
		flag=removeKey(root, key);
		//if (flag == 1) 
		{
			fstream file1;
			fstream file("Passenger_Details.txt", ios::in);
			string ticketid[50], name[50], tno[50], dest[50];
			int i = -1, sflag = 0;
			while (!(file.eof()))
			{
				getline(file, ticketid[++i], '|');
				getline(file, name[i], '|');
				getline(file, tno[i], '|');
				getline(file, dest[i], '\n');
			}
			file.close();
			for (int j = 0;j < i;j++)
			{
				if (key == stoi(ticketid[j]))
				{
					sflag = 1;
				}
				if (sflag == 1)
				{
					ticketid[j] = ticketid[j + 1];
					name[j] = name[j + 1];
					tno[j] = tno[j + 1];
					dest[j] = dest[j + 1];
				}
			}
			i--;
			file.open("Passenger_Details.txt", ios::out);
			file1.open("Confirmation_List.txt", ios::out);
			for (int j = 0;j < i;j++)
			{
				file << ticketid[j] << '|' << name[j] << '|' << tno[j] << '|' << dest[j] << endl;
				file1 << ticketid[j] << "\n";
			}
			file.close();
			file1.close();
		}



	if (root->size == 0)  // if the root is empty
	{
		node* old_root = root;
		if (root->next[0]) root = root->next[0];  // if the root has a child, make it the new root

		else root = NULL;  // if the root is a leaf node, set root as NULL

		delete old_root;  // delete the old root

	}

}


/*
int main()
{
	btree b;
	int choice = 1, key;
	while (choice <= 2)
	{
		cout << "1.Insert a key\n";
		cout << "2.Search a key\n";
		cout << "3.Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "Enter the key to be inserted in a B-tree\n";
			cin >> key;
			b.insert(key);
			break;
		case 2: cout << "Enter the key to be searched\n";
			cin >> key;
			b.search(key);
			break;
		}
	}
	return 0;
}
*/