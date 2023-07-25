/*
A stack is a linear data structure that store data in an order known as the Last In First Out (LIFO) 
Push Operation is used to add (or push) an element to the stack. The element always gets added to the top of the current stack items
Pop Operation is used to remove (or pop) an element from the stack. The element always gets popped off from the top of the stack
The peek operation is used to return the first element of the stack without removing the element
a top pointer is used which keeps track of the last element inserted in the structure.
The underflow condition checks if there exists any item before popping from the stack
The overflow condition checks if the stack is full before pushing any element. 
*/
#define SIZE 10
int stack[SIZE];
int top = -1;

/*
Access
*******
element in a stack is accessed by continuously removing the front element until the required element is found.
the time taken is O(N) as to reach any specific element, all the elements after it has to be removed. 
*/
// Accessing the top element
void peek() { 
   if(top == -1)
   {
      printf("\n The stack is empty");
      break;
   }
   else
      printf("%d", stack[top]);
}
/*
Time complexity in deletion, insertion and search
*************************************************
1-Inserting an element is only possible at the top of the stack 
There is no interaction needed with the rest of the elements 
It is hence an O(1) operation
*/
void push(int value) {
   if(top == SIZE-1)
      printf("\nOverflow. Stack is Full");
   else{
      top++;
      stack[top] = value;
      printf("\nInsertion was successful");
   }
}
/*
2-deleting an element is only possible from the top of the stack. 
There is no interaction needed with the rest of the elements. 
It is hence an O(1)
*/
void pop() {
   if(top == -1)
      printf("\nUnderflow. Stack is empty");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}
/*
searching an element will involve continuously popping an element until the required element is found
The time complexity is hence O(n).
*/

/*
Space complexity 
****************
for each operation in a stack is O(1), as no extra space is required for any operation.
*/