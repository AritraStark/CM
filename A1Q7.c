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

void rem(uss ri[],uss li[],int n,uss prime){
    for(int i=0;i<n;i++){
        ri[i]=li[i] % prime;
        //printf("%llu ",prime);
        //printf(" %Lf ",ri[i]);
        //printf("%llu ",li[i]);
        //printf("%llu   \n",li[i]%prime);
    }
}

void show(uss li[],uss ri[],int n){
    printf("    Li             Ri\n");
    printf("__________________________\n");
    for(int i=0;i<n;i++){
        printf("%llu             %llu\n",li[i],ri[i]);
    }
}

void main(){
    int n;
    uss prime=1009;
    printf("Enter Number of large numbers to tabulate(< 100)");
    scanf("%d",&n);
    // printf("Enter Prime number to divide ");
    // scanf("%d",&prime);
    uss li[100], ri[100];
    generate(li,n);
    rem(ri,li,n,prime);
    //printf("%llu",li[0]);
    show(li,ri,n);

}