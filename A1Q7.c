#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef long double ld;
typedef unsigned long long int uss;

void generate(uss li[],int n){
    //generates large numbers
    for(int i=0;i<n;i++){
        li[i]= (rand() % (100000-10000)) + 10000; 
        //printf("%llu  ",li[i]);
    }
    
}

void rem(uss ri[],uss li[],int n,uss prime){
    //calculate remainders for a prime 
    for(int i=0;i<n;i++){
        ri[i]=li[i] % prime;
        //printf("%llu ",prime);
        //printf(" %Lf ",ri[i]);
        //printf("%llu ",li[i]);
        //printf("%llu   \n",li[i]%prime);
    }
}

void show(uss li[],uss ri[],int n){
    //showing the data in tabular form
    printf("__________________________\n");
    printf("    Li             Ri\n");
    printf("__________________________\n");
    for(int i=0;i<n;i++){
        printf("%llu             %llu\n",li[i],ri[i]);
    }
}

void full(uss li[],uss ri[],int n,uss prime){
    //full function
    rem(ri,li,n,prime);
    show(li,ri,n);
}

void main(){
    int n;
    uss prime[8]={1009,1013,1291,1151,1451,1597,1613,2003};
    printf("Enter Number of large numbers to tabulate(< 100)");
    scanf("%d",&n);
    uss li[100], ri[100];

    generate(li,n);
    //running full function for different primes
    for(int i=0;i<8;i++)
    full(li,ri,n,prime[i]);
}