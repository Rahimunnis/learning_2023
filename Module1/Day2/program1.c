// program 1 level 1 solution 
#include <stdio.h>
int main() {
    double var;
    printf("\nEnter variable:");
    scanf("%lf",&var);
    int z=(int)var;
    printf("\nExponent part of given double variable is %d",z);
    int n1=z,n2=z;
    //decimal to binary
    int i=0;
    int binnum[32];int j;
    while(n1>0){
        binnum[i]=n1 % 2;
        n1=n1/2;
        i++;
    }
    printf("\nbinary format\n");
    for(j=i-1;j>=0;j--){
        printf("%d",binnum[j]);
    }
    //decimal to hexadecimal
    char hexnum[100];
    i=0;
    while(n2>0){
        hexnum[i]=n2%16;
        if(hexnum[i]<10){
            hexnum[i]=hexnum[i]+48;
        }
        else{
            hexnum[i]=hexnum[i]+55;
        }
        n2=n2/16;
        i++;
    }
    printf("\nhexadecimal format\n");
    for(j=i-1;j>=0;j--){
        printf("%c",hexnum[j]);
    }
    

    return 0;
}

