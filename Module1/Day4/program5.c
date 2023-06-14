//sum and average of element in a 1D Array solution
#include<stdio.h>
int main(){
    int n,i,sum;
    float avg;
    printf("\nEnter size of an array:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter elements of an array:\n");
    for(i=0;i<n;i++){
        printf("index %d:",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("\nSum of  element in an array: %d",sum);
    printf("\nAverage of element in an array: %f",avg);
}