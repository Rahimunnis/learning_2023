// program 5 solution size of int is 4 bytes and we know that 1 byte = 8 bit.
#include <stdio.h>
int main() {
    int num;
    int oper_type;
    printf("Enter number:");
    scanf("%d", &num);
    printf("Enter operation type :");
    printf("1 for set ,2 for clear,3 for toggle :");
    scanf("%d",&oper_type);
    printf("%d",bit_operations(num,oper_type));
    return 0;
}
int bit_operations(int num,int oper_type){
    if(oper_type==1){
        int k=1;
        return (num | (1 << (k-1))); // setting kth bit
    }
    else if(oper_type==2){
        int k=31;
        return (num & (~(1 << (k-1))));// clear kth bit
    }
    else if(oper_type==3){
        int k=16;
        return (num ^ (1 << (k-1)));// toggle kth bit
    }
     else{
        printf("invalid");
    }
}
