#include <stdio.h>

int search(int arr[], int l, int r, int x)
{
    if (r >= l) { 
        int m = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[m] == x) 
            return m; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[m] > x) 
            return search(arr, l, m - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return search(arr, m + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
}

void main(){
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int arr[n],x,result;
    //float arr[n],x,result;
    //char arr[n],x,result;
    printf("Enter elements of the array \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    //scanf("%f",&arr[i]);
    //scanf("%c",&arr[i]);
    
    printf("Enter number to search\n");
    scanf("%d",&x);
    result = search(arr,0, n-1, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
}