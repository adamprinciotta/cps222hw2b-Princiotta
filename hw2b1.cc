// HW 2b.1
// Author (starting point): Adam Princiotta
#include <iostream>
#include <string>
using std::cout;
using std::endl;

struct Node {    
	std::string value;           
	Node * next; 
};


int main() {
	Node * head1 = NULL;
	Node * head2 = NULL;
	Node * p;
	Node * q;

	p = new Node();
	p->value = "0";
	head1 = p;

	p = new Node();
	p->value = "1";
	head1->next = p;
	
	p = new Node();
	p->next = NULL;
	head1->next->next = p;

	q = new Node();
	q->value = "2";
	head2 = q;

	q = new Node();
	q->value = "3";
	head2->next = q;

	q = new Node();
	q->next= NULL;
	head2->next->next = q;

	Node * temp = head2;	
	
	Node * temp2 = head1;

	Node * combined = temp2;
	
	while(combined->next != NULL){
		cout << combined->value << endl;
		combined = combined->next;
	}

	combined->next = temp;
	
	while(combined->next != NULL){
		cout << combined->value << endl;
		combined = combined->next;
	}

}
