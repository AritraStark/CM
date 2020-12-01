#include <stdio.h>
#include <conio.h>

typedef unsigned long long int uss;

int fibiter(int n){
   int x = 0, y = 1, z = 0;
   for (int i = 0; i < n-1; i++) {
      //cout << x << " ";
      z = x + y;
      x = y;
      y = z;
   }
   return z;
}

int fibrec(int n) 
{ 
   if (n <= 1) 
      return n; 
   return fibrec(n-1) + fibrec(n-2); 
} 

void main(){
    int n;
    int res=0;
    //uss res=0;
    printf("Enter number of terms: \n");
    scanf("%d",&n);
    res = fibiter(n);
    //res = fibrec(n);
    printf("The result is : %d",res);
    //printf("The result is : %llu",res);
}