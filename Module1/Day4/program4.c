//maximum and minimum element in a 1D Array solution
#include<stdio.h>
int main(){
    int n,i,min,max;
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
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        else{
            min=a[i];
        }
        
    }
    printf("\nMaximum element in an array: %d",max);
    printf("\nMinimum element in an array: %d",min);
}