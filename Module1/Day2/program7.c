// Program 2 solution of level 2
#include <stdio.h>
int check_similarity();
int main(){
    int result;
    result=check_similarity();
    printf("\nchecking given arrays are same or not!");
    printf("\nif true it will print 1 else it will print 0");
    printf("\nresult is %d",result);
    return 0;
}
int check_similarity() {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter elements of array1:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements of array2:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    printf("\nElements of array1:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nElements of array2:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i]==b[j]){
                count++;
            }
        }
    }
    if(count==3){
        return 1;
    }
    else{
        return 0;
    }

    
}
