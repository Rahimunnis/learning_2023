//Toggle case in string level 1 solution.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100],i,j;
    char str1[100];
    gets(str);
    puts(str);
    for(i=0,j=0;str[i] != '\0';i++,j++){
        if(isupper(str[i])){
            str1[j]=tolower(str[i]);
        }
        else{
            str1[j]=toupper(str[i]);
        }
    }
    str1[j]='\0';
    puts(str1);
    return 0;
}