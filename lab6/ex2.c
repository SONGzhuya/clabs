#include <stdio.h>
static char daytab[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int day_of_year(int year,int month,int day)
{
    int i,leap;
    leap=(year%4 == 0 && year%100 !=0) || (year%400 == 0);

    for(i=1;i<month;i++)
    day += daytab[leap][i];
    return day;

}
int main()
{
    int a=0,b=0,c=0,A=0,B=0,C=0;
    int d=0,D=0,S=0;
    printf("Please enter two dates: ");
    scanf("%d/%d/%d %d/%d/%d",&a,&b,&c, &A,&B,&C);
    d=day_of_year(a,b,c);
    D=day_of_year(A,B,C);  /*The default d is less than D and a is less than or equal to A*/
    if(a<A&&d<D)
        S=(A-a)*365+(D-d);
    if(a==A&&d<D)
        S=D-d;
    printf("%d days between the two dates",S);

    if( b<1 || b>12 || c<1 || c>31 || B<1 || B>12 || C<1 || C>31 )
    printf("EEEOR");

    return 0;
}
