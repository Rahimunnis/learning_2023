//program 5 level 1 soultion
#include <stdio.h>
int main() {
    int a[3]={1,4,5};
    int cnt=0;
    int i;
    for(i=0;i<3;i++){
        while(a[i]>0){
            a[i]=a[i]&(a[i]-1);
            cnt++;
        }
    }
    printf("\ncnt is %d",cnt);
    return 0;
}
