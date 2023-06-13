//program 4 level 1 solution
#include <stdio.h>
int main() {
    int a,t,cnt;
    printf("\nEnter a number:");
    scanf("%d",&a);
    t=a;cnt=0;
    int s=0,b=0,r;
    while(t>0){
        t=t/10;
        cnt++;
    }
    printf("\ngiven number is %d",a);
    printf("\ncount of digits in a number is %d",cnt);
    if(cnt>1){
        while(a>0){
            r=a%10;
            if(r>b){
                b=r;
            }
            else{
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
