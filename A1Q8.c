#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>

typedef unsigned long long int ull;

int digit(ull n){
    //calculating number of digits
    int digit=0;
    while(n!=0){
        digit++;
        n/=10;
    }
    return digit;
}

ull convert(char str[51]){
    //converting string to number by juxtaposing 
    ull res=0;
    for(int i=0;i<strlen(str);i++){
        // if(i==0)
        // res+=(int)str[i];
        // else{
            res = pow(10,digit((int)str[i]))*res + (int)str[i];
        //}
    }
    return res;
}

ull convert2(ull n){
    //second convertion of halving and adding
    ull n1=0,n2=0;
    n1= n/pow(10,(digit(n)/2));
    n2 = n-(n1*pow(10,(digit(n)/2)));
    //printf("Second covertion result %llu + %llu = %llu\n",n1,n2,(n1+n2));
    return (n1+n2);
}

void final(ull n1,ull n2){
    int prime[8] = {1009,1013,1291,1151,1451,1597,1613,2003};
    for(int i=0;i<8;i++){
        printf("\nFor %d'th prime: %d \n",(i+1),(prime[i]));
        printf("The remainder(name) for %llu divided by prime %d is %llu\n",convert2(n1),prime[i],(convert2(n1)%prime[i]));
        printf("The remainder(surname) for %llu divided by prime %d is %llu\n\n",convert2(n2),prime[i],(convert2(n2)%prime[i]));
    }
} 

void main(){
    char name[51],surname[51];
    //taking inputs
    printf("Enter you name\n");
    scanf("%s",&name);
    printf("Enter you surname\n");
    scanf("%s",&surname);
    //printing the converted numbers
    printf("The converted name is %llu\n",convert(name));
    printf("The converted surname is %llu\n",convert(surname));
    //printing second conversion
    printf("\nSum for name is %llu\n\n",convert2(convert(name)));
    printf("\nSum for surname is %llu\n\n",convert2(convert(surname)));
    //final remainder show
    final(convert(name),convert(surname));
}