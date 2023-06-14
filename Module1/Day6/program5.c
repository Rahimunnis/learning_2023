//swapping fields of two structures...
#include<stdio.h>
typedef struct student{
    char name[30];
    int roll;
    float cgpa;
}stu;
void swap_of_two_structures(stu *p1,stu *p2,stu *temp);
int main(){
    stu s1,s2,temp;
    printf("\n Enter information in format name,roll,cgpa");
    printf("\n Enter student1 details:");
    scanf("%s %d %f",&s1.name,&s1.roll,&s1.cgpa);
    printf("\n Enter student2 details:");
    scanf("%s %d %f",&s2.name,&s2.roll,&s2.cgpa);
    //Before swapping
    printf("\nBefore swapping:");
    printf("\n  student1 details:");
    printf("\nname : %s \nroll number : %d \ncgpa : %f",s1.name,s1.roll,s1.cgpa);
    printf("\n  student2 details:");
    printf("\nname : %s \nroll number : %d \ncgpa : %f",s2.name,s2.roll,s2.cgpa);
    swap_of_two_structures(&s1,&s2,&temp);
    //After swapping
    printf("\nAfter swapping:");
    printf("\n  student1 details:");
    printf("\nname : %s \nroll number :  %d \ncgpa : %f",s1.name,s1.roll,s1.cgpa);
    printf("\n  student2 details:");
    printf("\nname : %s \nroll number :  %d \ncgpa : %f",s2.name,s2.roll,s2.cgpa);
    return 0;
}
void swap_of_two_structures(stu *p1,stu *p2,stu *temp){
    *temp=*p1;
    *p1=*p2;
    *p2=*temp;
    return;
}