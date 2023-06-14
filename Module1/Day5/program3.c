//compute total no.of seconds
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char str[100];
    printf("\nEnter time in hh:mm:ss format:");
    gets(str);
    printf("Entered Time is ");
    puts(str);
    char *token;
    int t1,total=0,n=3600;
    token=strtok(str,":");
    while(token!=NULL){
        t1=atoi(token);
        total=total+(t1*n);
        token=strtok(NULL,":");
        n=n/60;
    }
    printf("\nTotal no.of seconds:%d",total);
    return 0;
}