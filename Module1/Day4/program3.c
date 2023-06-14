//difference of odd and even indexing of an array solution
#include<stdio.h>
int main(){
    int n;
    int diff,i,sumeven=0,sumodd=0;
    printf("\nEnter size of an array:\n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter elements in an array:\n");
    for(i=0;i<n;i++){
        printf("index %d :",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray is :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            sumeven=sumeven+a[i];//sum of even indexing numbers in an array
        }
        else{
            sumodd=sumodd+a[i];//sum of odd indexing elements of an array
        }
    }
    if(sumeven>sumodd){
        diff=sumeven-sumodd;
    }
    else{
        diff=sumodd-sumeven;
    }
    printf("\nsum of even indexing elements in an array is :%d",sumeven);
    printf("\nsum of odd indexing elements in an array is :%d",sumodd);
    printf("\nDifference of even and odd indexing elements of an array is :%d",diff);


}