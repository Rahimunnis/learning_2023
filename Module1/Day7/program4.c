//program 4 solution level 1 array of structures...
#include<stdio.h>
typedef struct student{
    int rollno;
    char name[20];
    float marks;
}stu;
void initialize_array(int n);
void display_array(int n,stu arr[]);
void sorting_array(int n,stu arr[]);
int main(){
    int n;
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
    display_array(n,arr);
    sorting_array(n,arr);
    return;
}
void display_array(int n,stu arr[]){
    printf("\nBefore sorting array of structure !");
    for(int i=0;i<n;i++){
        printf("\nstudent %d details:",i+1);
        printf("\nRollno:%d \nName:%s \nMarks:%f",arr[i].rollno,arr[i].name,arr[i].marks);
    }
    return;
}
void sorting_array(int n,stu arr[]){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j].marks < arr[j+1].marks){
                stu temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    printf("\nSorting the array of structures in descending order based on marks !");
    for(i=0;i<n;i++){
        printf("\nstudent %d details:",i+1);
        printf("\nRollno:%d \nName:%s \nMarks:%f",arr[i].rollno,arr[i].name,arr[i].marks);
    }
    return;
}