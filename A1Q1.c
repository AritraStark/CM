#include <stdio.h>

typedef unsigned long long int uss;

uss facrec(int n) {
    //Recursive function
    if (n>=1)
        return n*facrec(n-1);
    else
        return 1;
}

uss faciter(int n){
    //Iterative function
    uss res=1;
    for(int i=1;i<n;i++)
    res*=i;
    return res;
}

void main(){
    //Integer starts giving wrong answer at 15
    int n;
    printf("Enter number to calculate: ");
    scanf("%d",&n);

    if(n>1){
        //The result showing for different functions
        printf("The recursive result is : %llu", facrec(n));
        printf("The iterative result is : %llu", faciter(n));
    }
    else if(n<0)
    printf("Invalid input");
    else
    printf("The result is : 1");
}

