/*
linked list is a linear data structure where each element is a separate object, known as a node
 *Each node contains some data and points to the next node in the structure, forming a sequence
 *The nodes may be at different memory locations, unlike arrays where all the elements are stored continuously
 *****************************************************************************************************************
 *Dynamic Data structure: The size of memory can be allocated or de-allocated at run time based on the operation insertion or deletion.
 *Ease of Insertion/Deletion: The insertion and deletion of elements are simpler than arrays since no elements need to be shifted after insertion and deletion
 *but it is not easy to access element like array
 *
*/

/*
Access approach :As the data is linked together through nodes
any node can only be accessed by the node linking to it hence it is not possible to randomly access any node.
One has to go through the links searching for the element required.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node {
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;
// struct node *p ;

// The data stored in this Node can be accessed by using the arrow character (->) to the data member of the structure.
//p->data
//p->next;


/*
Time complexity in deletion, insertion and search.
**************************************************
1-insertion in the linked list, the time complexity is O(1) if done on the head, O(N)
New data can be added at any position in the list by traversing to that position using a loop, creating a new Node and then manipulating the links to insert it at that position.
*/
void insertafternode(struct node *list, int data){
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   lk->next = list->next;
   list->next = lk;
}
void main(){
   int k=0;

   insertafternode(head->next->next, 33);
   printf("Linked List: ");
}
