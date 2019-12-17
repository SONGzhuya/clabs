#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count=0,i=0;
    unsigned int a=1,c=0;
    char b;
    printf("please input the number\n");
    while((b=getchar())!='\n'){
        c=c*10+(b-'0');
    }
    while(a!=0){
        a=a<<1;
        i=a&c;
        if(i!=0){
            count++;
        }
    }
    
    printf("%d\nthe amount is: ",count);
    
return 0;
}