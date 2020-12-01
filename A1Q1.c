#include <stdio.h>
#include <conio.h>

typedef unsigned long long int uss;

void fac(int *n,uss *res){
//void fac(int *n,int *res){
    for(int i=1;i<=*n;i++)
    (*res)*=i;
}

void main(){
    //int n,res=1;
    //Integer starts giving wrong answer at 15
    int n;
    uss res=1;
    printf("Enter number to calculate: ");
    scanf("%d",&n);
    if(n>1){
        fac(&n,&res);
        //printf("The result is : %d", res);
        printf("The result is : %llu", res);
    }
    else if(n<0)
    printf("Invalid input");
    else
    printf("The result is : 1");
}

