#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[20];
    int marks;
};

int main(){
int num,i;
FILE *f1,*f2,*ft;
char ch,file1[20],file2[20],file3[20];
printf("Enter number of students: ");
scanf("%d",&num);
struct student s[num];
for(i=0;i<num;i++){
    printf("\n\nName: ");
    scanf("%s",s[i].name);
    getchar();
    printf("Marks: ");
    scanf("%d",&s[i].marks);}
f1=fopen("C:\\Users\\Aditya\\Desktop\\DataFile.TXT","a");
if(f1==NULL){
    perror("Error");
    printf("\nFile doesn't exist");
    return 0;}
for(i=0;i<num;i++){
    fprintf(f1,"Name: %s\n",(s[i].name));
    fprintf(f1,"Marks: %d\n\n",(s[i].marks));}
printf("Stored Successfully");}
