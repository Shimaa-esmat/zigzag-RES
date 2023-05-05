#include <stdio.h> 

int linear_search(int arr[], int size, int n) 
{ 
    int l ;
  	for (int i = 0; i < size; i++) 
		if (arr[i] == n)
			return i;
	return -1 ;

} 

int binary_search(int arr[], int size, int n){
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == n){
            return mid;
        }
        if(arr[mid]<n){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}

int main(void) 
{ 
    int arr[100] ;
	int n ;
	int size;
	printf("enter size of list ");
	scanf("%d", &size);
	printf("enter element of list ");
	for(int i =0; i < size ; i++){
	    scanf("%d",&arr[i]);
	}
	printf("enter the value you want to search ");
	scanf("%d" , &n);
    // arr[100] , size , n  = get_data();
    int x = linear_search (arr, size, n);   
    int z = binary_search (arr , size ,n);
    
    if (x == -1){
        printf("number not founded");
    }
    else{
        printf("result from linear search = %d " , x);
    }
    if (z == -1){
        printf("number not founded");
    }
    else{
        printf("\nresult from binary search = %d " , z);
    }

    return 0;

}
