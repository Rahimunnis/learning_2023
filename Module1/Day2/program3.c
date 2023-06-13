// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[100];
    int n;
    int i,sum=0;
    printf("enter element numbers:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        if(i%2==0){
            sum=sum+a[i];
        }
    }
    printf("\nsum is%d",sum);
    

    return 0;
}
