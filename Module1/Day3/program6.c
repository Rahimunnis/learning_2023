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
//Decimal to bcd conversion
#include<stdio.h>
int main(){
    int n;int a[100],i=0,j;
    int k;int b[4]={0,0,0,0};
    printf("enter:");
    scanf("%d",&n);
    while(n!=0){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    printf("\nDecimal number  ");
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    printf(" is:");
    for(j=i-1;j>=0;j--){
        k=0;
        while(a[j]!=0){
            b[k]=a[j]%2;
            a[j]=a[j]/2;
            k++;
        }
        for(k=3;k>=0;k--){
            printf("%d",b[k]);
        }
        printf("\t");
    }
    
    return 0;
}
