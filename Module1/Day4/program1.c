//Reversing of elements of an array solution
#include<stdio.h>
int main(){
    int n,i,t;
    printf("\nEnter array size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter index %d :",i);
        scanf("%d",&a[i]);
    }
    printf("\n Before reversing an array:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    printf("\n After reversing an array:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

}