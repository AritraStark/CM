#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void random(int n){
    char str[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    if(n==0)
    n=100000;
    FILE* fp;
	fp = fopen("test.txt", "w");
    if (fp == NULL)
	{
		printf("NO FILE\n");
		exit(1);
	}
    while (n != 0)
	{
		for (int i = 0; i < 10; i++)
		fprintf(fp,"%c", str[rand() % 10]);
		fprintf(fp,"\n",str);
		n--;
	}
}

int main()
{
	int n=0;
	printf("enter size for input or 0 for default\n");
	scanf("%d", &n);
	random(n);
	return 0;
}