#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef long double ld;
typedef unsigned long long int uss;

void generate(uss li[],int n){
    for(int i=0;i<n;i++){
        li[i]= (rand() % (100000-10000)) + 10000; 
        //printf("%llu  ",li[i]);
    }
    
}

void rem(ld ri[],uss li[],int n,uss prime){
    for(int i=0;i<n;i++){
        ri[i]=(li[i] % prime);
        printf("%Lf ",ri[i]);
    }
}

void show(uss li[],ld ri[],int n){
    for(int i=0;i<n;i++)
    printf("%llu ",li[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%Lf ",ri[i]);
}

void main(){
    int n;
    uss prime=1009;
    printf("Enter Number of large numbers to tabulate(< 100)");
    scanf("%d",&n);
    // printf("Enter Prime number to divide ");
    // scanf("%d",&prime);
    uss li[100];
    ld ri[100];
    generate(li,n);
    rem(ri,li,n,prime);
    //show(li,ri,n);

}