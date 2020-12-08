#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct Student{
    char name[51];
    long int roll;
};

void arrange(int n,struct Student arr[]){
    //sorting the names according to roll number
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j].roll > arr[j+1].roll){
                struct Student temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }  
    }       
}

void lexico(int n,struct Student arr[]){
    // storing strings in the lexicographical order
   for (int i = 0; i < n; ++i) {
      for (int j = i+1 ; j < n; ++j) {
         // swapping strings if they are not in the lexicographical order
         char temp[51];
         if (strcmp(arr[i].name, arr[j].name) > 0) {
            strcpy(temp, arr[i].name);
            strcpy(arr[i].name, arr[j].name);
            strcpy(arr[j].name, temp);
         }
      }
   }
   //writing to new file
    FILE *fpw;
    fpw=fopen("student1.txt","a");
    for(int i=0;i<n;i++)
    fprintf(fpw,"%s\n",arr[i].name);
    fclose(fpw);
}

void find(int n,struct Student arr[]){
    int len1,len2,mx,mn,max,min;
	mx=strlen(arr[0].name);
	for(int i=0;i<n;i++){
        len1=strlen(arr[i].name);
        len2=strlen(arr[i].name);
        //finding index of longest name
        if(len1>mx)
        {
            max=i;
            mx=len1;
        }
        if(len2<mn)
        {
            min=i;
            mn=len2;
        }
        
    }
            
    printf("\nThe largest name is %s of length %d",arr[max].name,strlen(arr[max].name));
    printf("\nThe smallest name is %s of length %d",arr[min].name,strlen(arr[min].name));
}

void writefile(int n,struct Student arr[]){
    FILE *fpw;
    fpw=fopen("student.txt","a");
    for(int i=0;i<n;i++)
    fprintf(fpw,"%s\n",arr[i].name);
    fclose(fpw);
}

void main(){
    int n;
    printf("Enter number of students\n");
    scanf("%d",&n);
    struct Student arr[1000];
    for(int i=0;i<n;i++){
        printf("Enter details for student %d\n",i+1);
        printf("Roll Number: \n");
        scanf("%li",&arr[i].roll);
        printf("Name: \n");
        scanf("%s",&arr[i].name);
    }
    arrange(n,arr);
    writefile(n,arr);
    lexico(n,arr);
    find(n,arr);

}