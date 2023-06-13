// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[3]={0x01,0xF4,0x10001};
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
