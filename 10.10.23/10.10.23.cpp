#include "Node.h"
#include <iostream>
using namespace std;



void append(Node* head, int value) {
	Node* newNode = new Node;
	newNode->value = value;
	newNode->next = nullptr;


	if (head == nullptr) {
		head = newNode;
	}
	else {
		Node* current = head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = newNode;
	}
}


void printList(Node* head) {
	Node* current = head;
	while (current != nullptr) {
		cout << current->value << " ";
		current = current->next;
	}
	cout << endl;
}

void printNode(Node* head, int value) {
	if (head == nullptr) {
		return;

}
	if (head->value == value) {
		Node* temp = head;
		head = head->next;
		delete temp;
		return;
	}

	Node* current = head;
	while (current->next != nullptr && current->next->value != value) {
		current = current->next;
	}

	if (current->next != nullptr) {
		Node* temp = current->next;
		current->next = current->next->next;
		delete temp;
	}
}


int main()
{
	int main(); {

		Node* myList = nullptr; // Початковий пустий список

		// Додавання елементів до списку
		append(myList, 1);
		append(myList, 2);
		append(myList, 3);

		// Виведення списку
		std::cout << "list ";
		printList(myList);

		// Видалення елемента зі значенням 2
		printNode(myList, 2);

		// Виведення списку після видалення
	cout << "Список після видалення: ";
		printList(myList);

		return 0;
}

