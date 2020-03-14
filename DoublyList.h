#pragma once

class Node {
public:
	int data;
	Node* next, * prev;
};

class Doubly
{

public:
	Node* head;
	Doubly();
	~Doubly();
	void insertNode();
	void displayNode();

private:

};


