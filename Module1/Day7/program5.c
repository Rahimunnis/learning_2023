//searching operation on array of structure based on name of the student program 5 level 1 solution.
#include<stdio.h>
#include<string.h>
typedef struct student{
    int rollno;
    char name[20];
    float marks;
}stu;
void initialize_array(int n);
void display_array(int n,stu arr[]);
void searching(int n,stu arr[]);
int main(){
    int n;
    printf("\nEnter size of an array:");
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
    display_array(n,arr);
    return;
}
void display_array(int n,stu arr[]){
    for(int i=0;i<n;i++){
        printf("\nstudent %d details:",i+1);
        printf("\nRollno:%d \nName:%s \nMarks:%f",arr[i].rollno,arr[i].name,arr[i].marks);
    }
    searching(n,arr);
    return;
}
void searching(int n,stu arr[]){
    char s[20];
    printf("\nEnter the name that you want to search :");
    scanf("%s",s);
    for(int i=0;i<n;i++){
        if(strcmp(arr[i].name,s)==0){
            printf("\nA student with name %s is found",arr[i].name);
            printf("\nThat student corresponding details are listed below:");
            printf("\nrollno:%d \nname:%s \ncgpa:%f",arr[i].rollno,arr[i].name,arr[i].marks);
            return;
        }
        
    }
    printf("\nA student with name %s is not found",s);
    return;

}