/*
Array :data structures which storing multiple elements of similar nature together at one place.
**********************************************************************************************
Access approach
***************
we can access elements by their index
easy to access 
Arrays provide O(1) random access lookup time.
accessing the 1st index of the array and the 1000th index of the array will both take the same 
**********************************************************************************************
*/
#include<stdio.h>

int main()

{

int a[5] = {2, 3, 5, 7, 11};

printf("%d\n",a[0]); 

printf("%d\n",a[4]);

return 0;

}

/*
Time complexity is time taken by an algorithm to execute
********************************************************
Time complexity in deletion, insertion and search
*************************************************

1-Searching operation in arrays takes O(N) time without any specific algorithm as we need to iterate and check every element in the array.
*Searching operation can be performed by linear traversal from the first element to the last element
*/
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    // If it is not found
    return -1;
}
/*
2-Inserting a new element at a particular index in arrays is when we skip all the elements before that index
or shifting elements to the right, which are on the right side of the required position
 *which takes O(N) time.
*/
void insert_Element(int arr[], int n, int x, int pos)
{

    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];
 
    arr[pos] = x;
}

/*
3-deletion, :the element to be deleted is searched using the linear search, and then the delete operation is performed followed by shifting the elements. 
 *deletion operation also takes O(N) time.
*/
int deleteElement(int arr[], int n, int key)
{
    // Find position of element
    int pos = findElement(arr, n, key);
 
    if (pos == -1) {
        printf("Element not found");
        return n;
    }
 
    // deleting element
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1;
}

/*
Space Complexity is the amount of memory space occupied by algorithm.
********************************************************************
*we do not need any extra space to perform most of array operations 
the space complexity of fetching, inserting, or deleting is constant O(1)
*only the space taken to create the array is the auxiliary space
*/

