//program 4 level 1 solution using array
#include <stdio.h>
int main() {
    int a,t,cnt;
    int arr[100],j;
    int i=0;
    printf("\nEnter a number:");
    scanf("%d",&a);
    t=a;cnt=0;
    int s,b=0,r;
    while(t>0){
        t=t/10;
        cnt++;
    }
    printf("\ngiven number is %d",a);
    printf("\ncount of digits in a number is %d",cnt);
    if(cnt>1){
        while(a>0){
            r=a%10;
            arr[i]=r;
            if(r>b){
                b=r;
            }
            a=a/10;
            i++;
        }
        s=b;
        for(j=i-1;j>=0;j--){
            if(arr[j]<s){
                s=arr[j];
            }
        }
        printf("\nsmallest digit in a number=%d",s);
        printf("\nbiggest digit in a given number=%d",b);
    }
    else{
        printf("\nNot valid number(min 2 digits)!");
    }

    return 0;
}
//program 4 level 1 solution without using array
#include <stdio.h>
int main() {
    int a;
    printf("\nEnter a number:");
    scanf("%d",&a);
    int t=a,cnt=0;
    int s,b=0,r;
    while(a>0){
        a=a/10;
        cnt++;
    }
    a=t;
    printf("\ngiven number is %d",a);
    printf("\ncount of digits in a number is %d",cnt);
    if(cnt>1){
        while(a>0){
            r=a%10;
            if(r>b){
                b=r;
            }
            a=a/10;
        }
        a=t;
        s=b;
        while(a>0){
            r=a%10;
            if(r<s){
                s=r;
            }
            a=a/10;
        }
        printf("\nsmallest digit in a number=%d",s);
        printf("\nbiggest digit in a given number=%d",b);
    }
    else{
        printf("\nNot valid number(min 2 digits)!");
    }

    return 0;
}
