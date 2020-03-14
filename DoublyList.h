#pragma once

class Node {
public:
	Node* prev;
	int data;
	Node* next;
};

class Doubly
{

public:
	Node* head;
	Doubly();
	~Doubly();
	void insertNode();
	void displayNode();



};


