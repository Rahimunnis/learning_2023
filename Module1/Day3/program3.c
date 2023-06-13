//program 3 level 1 solution
# include <stdio.h>
int main() {
    int a[100];
    int n,d;
    int r,i=0,t=0,cnt=0;
    printf ("\nEnter a number of any digits:");
    scanf("%d",&n);
    int num=n;
    printf("\nEnter a digit that you want to delete in a number %d:",n);
    scanf("%d",&d);
    while(n>0){
        r=n%10;
        n=n/10;
        if(r==d){
            continue;
        }
        a[i]=r;
        i++;
        cnt++;
    }
    printf("\nAfter deleting one digit number is :");
    for(i=cnt-1;i>=0;i--){
        printf("%d",a[i]);
        if(a[i]>t){
            t=a[i];
        }
    }
    printf("\nBigdigit after deleting %d from number %d is %d",d,num,t);

    return 0;
}
