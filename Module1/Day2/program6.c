//Program 1 solution of level 2
#include<stdio.h>
int main(){
    int i,temp,n;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elemets:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nBefore swapping:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<=n-3;i=i+3){
        temp=a[i];
        a[i]=a[i+2]; //swapping of array elements
        a[i+2]=temp;
    }
    printf("\nAfter swapping:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}