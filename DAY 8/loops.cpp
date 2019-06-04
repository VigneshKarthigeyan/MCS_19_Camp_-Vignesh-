// detect loop and find its length
#include <bits/stdc++.h> 
using namespace std; 
struct Node { 
	int data; 
	struct Node* next; 
}; 

void push(struct Node** head_ref, int new_data) 
{ 
	struct Node* new_node = new Node; 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 
bool detectLoop(struct Node* h) 
{ 
	unordered_set<Node*> s; 
	while (h != NULL) { 
		if (s.find(h) != s.end()) 
			return true; 
		s.insert(h); 
		h = h->next; 
	} return false; 
} 
int countNodes(struct Node *n) 
{ 
   int res = 1; 
   struct Node *temp = n; 
   while (temp->next != n) 
   { 
      res++; 
      temp = temp->next; 
   } 
   return res; 
} 
int countNodesinLoop(struct Node *list) 
{ 
    struct Node  *slow_p = list, *fast_p = list; 
  
    while (slow_p && fast_p && fast_p->next) 
    { 
        slow_p = slow_p->next; 
        fast_p  = fast_p->next->next; 
        if (slow_p == fast_p) 
            return countNodes(slow_p); 
    } 
    return 0; 
} 
int main() 
{ 
	struct Node* head = NULL; 
	push(&head, 10); 
	push(&head, 20); 
	push(&head, 30); 
	push(&head, 40); 
	head->next->next->next->next = head->next; 
	if (detectLoop(head)) 
		cout << "Loop found"<<endl; 
		cout<<"No. of loops is "<<countNodesinLoop(head);
	return 0; 
} 

