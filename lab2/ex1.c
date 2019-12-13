#include <stdio.h>
#include <stdlib.h>

main()
{
    unsigned int a=1;
    while(a!=0)
    {
        a++;
    }
printf("%u\n",a-1);

int b=0,c=1,i=0,count=0;
b=a-1;
while (c!=0)
{
    i=b&c;
    c=c<<1;
    if(i!=0)
    {
        count++;
    }
}
printf("%d",count);

return 0;
}