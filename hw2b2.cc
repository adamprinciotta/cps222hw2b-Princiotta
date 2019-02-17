// HW 2b.2
// Author (starting point): Adam Princiotta


#include <iostream>
#include <string>
using std::cout;
using std::endl; 
using namespace std; 
  

struct Node 
{ 
    int value; 
    struct Node * next; 
}; 

Node *newNode(int value) 
{ 
   Node * temp = new Node; 
   temp->next = temp; 
   temp->value = value; 
} 
  
int main() 
{ 
	int n;
	int k;
	cout << "Number of people: ";
	cin >> n;
	
	cout << "\nThe kth person dies: ";
	cin >> k; 

	Node * head = newNode(1); 
	
	Node * prev = head; 

	for (int i = 2; i <= n; i++) { 
		prev->next = newNode(i); 
		prev = prev->next; 
	} 
	
	prev->next = head; 

	Node * ptr = head;
	
	Node * ptr2 = head;
	 
	while (ptr->next != ptr) { 
		int count = 1; 
		
		while (count != k) 
		{ 
			ptr2 = ptr; 
			ptr = ptr->next; 
			count++; 
		} 
	  
		ptr2->next = ptr->next; 
		ptr = ptr2->next; 
	} 
	  
	cout << "The last person remaining is: " << ptr->value << endl;     
	return 0; 
} 

