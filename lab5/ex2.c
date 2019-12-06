#include<stdio.h>
float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
int main(){
    float a,b,c;
    printf("please enter two numbers:\n");
    scanf("%f %f",&a,&b);
    c=add(a,b);
    printf("the sum of the two numbers is:%1.3f",c);
return 0;
}