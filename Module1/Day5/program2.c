//coverting string to integer level 1 solution.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    int res=0;
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            res=res*10+(str[i]-48);
        }
        
    }
    printf("Number:%d",res);
    return 0;
}
//coverting string to integer  using array concept level 1 solution.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int str1[100];
    int i,j=0;
    int res=0;
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            str1[j]=str[i]-48;
            j++;
        }
        
    }
    printf("\n Integer Number is :");
    for(i=0;i<j;i++){
        printf("%d",str1[i]);
    }
    
    return 0;
}
//coverting string to integer  by using atoi function level 1 solution.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    printf("Number is : %d",atoi(str));
    return 0;
}