//data of n students using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    char name[30];
    int roll;
    float cgpa;
}stu;
int main(){
    stu *ptr;
    int n,i;
    printf("\nEnter no.of students:");
    scanf("%d",&n);
    ptr=(stu *)calloc(n,sizeof(stu));
    for(i=0;i<n;i++){
        printf("\n Enter student %d Information ",i+1);
        printf("\nEnter name of the  student:");
        scanf("%s",(ptr+i)->name);
        printf("\nEnter roll number of the student:");
        scanf("%d",&(ptr+i)->roll);
        printf("\nEnter cgpa of the student:");
        scanf("%f",&(ptr+i)->cgpa);
    }
    for(i=0;i<n;i++){
        printf("\n student %d Information ",i+1);
        printf("\nname of  student %d:%s",i+1,(ptr+i)->name);
        printf("\nroll number of  student %d:%d",i+1,(ptr+i)->roll);
        printf("\ncgpa of  student %d:%.2f",i+1,(ptr+i)->cgpa);
    }
    return 0;
}