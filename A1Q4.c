
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

typedef long int li;

void randomtrick(li arr[]){

    for(li i=0;i<100000;i++)
    arr[i]=i+1;
    for (li i = 0; i < 100000; i++) {    
    li temp = arr[i];
    li randomIndex = rand() % 100000;
    arr[i] = arr[randomIndex];
    arr[randomIndex] = temp;
    }
    for(li i=0;i<100000;i++)
    printf(" %li",arr[i]);
}

void writefile(FILE *fpw,li arr[]){
    fpw=fopen("data.txt","w");
    char s = arr[0]+'0';
    printf("%c",s);
    fputs(&s,fpw);
    fputs("\n",fpw);
    fclose(fpw);
}

void appendfile(FILE *fpw,li arr[]){
    fpw = fopen("data.txt","a");
    for(int i=1;i<100000;i++){
        char s = arr[i]+'0';
        printf("%c",s);
        fputs(&s,fpw);
        fputs("\n",fpw);
    }
    fclose(fpw);
}

void main()
{
	// srand(time(0));

	// for(li i = 0; i<10; i++)
	// 	prlif(" %d ", (rand()%10));
    li arr[100];
    randomtrick(arr);
    char s[50];
    FILE *fpr,*fpw; 
    fpr = fopen("data.txt","r");
    fgets(s,50,fpr);
    if(s!=NULL)
    writefile(fpw,arr);
    else
    appendfile(fpw,arr);
    fclose(fpr);

    
}
