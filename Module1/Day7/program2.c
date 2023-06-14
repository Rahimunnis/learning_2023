//program 2 solution level 1 array of structures..
#include<stdio.h>
typedef struct student{
    int rollno;
    char name[20];
    float marks;
}stu;
void initialize_array(int n);
int main(){
    int n,i;
    printf("\nenter size of an array:");
    scanf("%d",&n);
    initialize_array(n);
    return 0;
}
void initialize_array(int n){
    stu arr[n];
    printf("\nEnter details in format rollno,name,marks");
    for(int i=0;i<n;i++){
        printf("\nEnter student %d details:",i+1);
        scanf("%d %s %f",&arr[i].rollno,arr[i].name,&arr[i].marks);
    }
    return;
}