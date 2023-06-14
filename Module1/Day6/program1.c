//using arrow operator(->)
#include<stdio.h>
typedef struct box_measurements{
    int height;
    int length;
    int width;
}box;

int main(){
    box b1;
    int total,volume;
    box *ptr=&b1;
    printf("\nEnter height of the box :");
    scanf("%d",&b1.height);
    printf("\nEnter length of the box :");
    scanf("%d",&b1.length);
    printf("\n width of the box :");
    scanf("%d",&b1.width);
    printf("\n height of the box : %d",ptr->height);
    printf("\n length of the box : %d",ptr->length);
    printf("\n width of the box : %d",ptr->width);
    volume=b1.height*b1.length*b1.width;
    printf("\n volume of the box : %d",volume);
    total=2*(b1.height*b1.width)+2*(b1.height*b1.length)+2*(b1.length*b1.width);
    printf("\n Total surface area of the box : %d",total);
    return 0;
}
//using asterisk operator(*)
#include<stdio.h>
typedef struct box_measurements{
    float height;
    float length;
    float width;
}box;

int main(){
    box b1;
    float total,volume;
    box *ptr=&b1;
    printf("\nEnter height of the box :");
    scanf("%f",&b1.height);
    printf("\nEnter length of the box :");
    scanf("%f",&b1.length);
    printf("\n width of the box :");
    scanf("%f",&b1.width);
    printf("\n height of the box : %f",(*ptr).height);
    printf("\n length of the box : %f",(*ptr).length);
    printf("\n width of the box : %f",(*ptr).width);
    volume=b1.height*b1.length*b1.width;
    printf("\n volume of the box : %f",volume);
    total=2*(b1.height*b1.width)+2*(b1.height*b1.length)+2*(b1.length*b1.width);
    printf("\n Total surface area of the box : %f",total);
    return 0;
}