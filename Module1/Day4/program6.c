//bubble sort of an array  level 2 solution
#include<stdio.h>
int main(){
    int n,i,t,j;
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
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nSorted array is:");
    for(i=0;i<6;i++){
        printf("%d\t",a[i]);
    }
}