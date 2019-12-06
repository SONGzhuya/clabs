#include<stdio.h>
void reverse(char *m){
    char a=*m;

    if(a){
        reverse(m=m+1);
    }
printf("%c",a);
}
int main(){
    char*s="ayuhZgnoS";
        reverse(s);
return 0;
}