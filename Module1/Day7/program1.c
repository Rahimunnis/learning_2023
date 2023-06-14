//array of structures level 1 problem 1 solution
#include<stdio.h>
typedef struct student{
    int rollno;
    char name[20];
    float marks;
}stu;
void initialize(int n);
int main(){
    int n;
    printf("\nenter size of an array:");
    scanf("%d",&n);
    initialize(n);
    return 0;
}
void initialize(int n){
    stu arr[n];
    int p;
    printf("\nYou have %d students,enter a student number(b/w 1 t0 %d) in which you want to initailize the details:",n,n);
    scanf("%d",&p);
    printf("\nEnter student %d details in format (rollno,name,marks) :",p);
    scanf("%d %s %f",&arr[p-1].rollno,&arr[p-1].name,&arr[p-1].marks);
    printf("\nstudent %d details:",p);
    printf("\nRollno : %d \nname : %s \nmarks : %f",arr[p-1].rollno,arr[p-1].name,arr[p-1].marks);
    return;
}