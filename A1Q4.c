#include <stdio.h>
#include <stdlib.h>
#include<time.h>

typedef long int li;

void randomtrick(li arr[])
{

li i;
//Assigning sequential numbers to array.
for(i =0;i<100000;i++)
{
arr[i] = i + 1;
}
//Randomizing the array contents.
for(i=0;i<100000;i++)
{
li temp = arr[i];
li randomindex = rand()%100000;
arr[i] = arr[randomindex];
arr[randomindex] = temp;
}
}
/*
for(li i = 0;i<100000;i++)
{
printf("%li",arr[i]);
}
}
*/

void writefile(FILE *fpw,li arr[])
{
fpw = fopen("data.txt","a");
//Writing array content to file.
for(li i=0;i<100000;i++)
{
fprintf(fpw,"%ld\n",arr[i]);
}

fclose(fpw);
}

/*
void appendfile(FILE *fpw,li arr[])
{
fpw = fopen("data.txt","a");
for(int i=0;i<100000;i++)
{
char s=arr[i] + '0';
printf("%c",s);
fputs(&s,fpw);
fputs("\n",fpw);
}
fclose(fpw);
}
*/

void main()
{

//Variables declared
FILE *fpw;
li i;
li arr[100000];

//Executing functions
randomtrick(arr);

writefile(fpw,arr);

//Close-up
fclose(fpw);
}
