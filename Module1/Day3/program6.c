//program 2 level 2 solution
#include<stdio.h>
int main(){
    long long int n;
    int a[100],i=0,j;
    int k,num=0;
    printf("enter:");
    scanf("%lld",&n);
    while(n!=0){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    printf("\nDecimal number of bcd ");
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    printf(" is:");
    for(j=i-1;j>=0;j=j-4){
        for(k=j;k>=j-3;k--){
            num=num*2+a[k];
        }
        printf("%d",num);
        num=0;
    }
    
    return 0;
}
