#include <iostream>
#include "DoublyList.h"

using namespace std;

Doubly::Doubly()
{
	head = nullptr;
}

Doubly::~Doubly()
{
}

void Doubly::insertNode() {
	int value, length;
	cout << "Enter Doubly Link Length: "<<endl;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		cout << "Enter Value #" << i << ": "<<endl;
		cin >> value;
		Node* temp;
		temp = new Node;
		temp->data = value;
		temp->prev = nullptr;

		if (head != nullptr)
		{
			 
		}

	}
	

};


void Doubly::displayNode() {


};