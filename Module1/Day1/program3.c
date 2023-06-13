//program 3 level 1 solution
#include <stdio.h>
int main() {
    int roll;
    char name[20];
    int marks[3];
    int total;
    float percentage;
    printf("Enter roll number:");
    scanf("%d",&roll);
    printf("Enter name:");
    scanf("%s",name);
    printf("Enter physics marks:");
    scanf("%d",&marks[0]);
    printf("Enter maths marks:");
    scanf("%d",&marks[1]);
    printf("Enter chemistry marks:");
    scanf("%d",&marks[2]);
    total=marks[0]+marks[1]+marks[2];
    printf("\nroll number:%d",roll);
    printf("\nname:%s",name);
    printf("\nTotal marks=%d",total);
    percentage=(float)total/3;
    printf("\npercentage =%f %%",percentage);
    

    return 0;
}
