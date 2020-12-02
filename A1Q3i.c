#include <stdio.h>
#include <conio.h>

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
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
    result = search(arr, n, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
}