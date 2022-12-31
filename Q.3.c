//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],e=0,o=0;
    printf(" to calculate the sum of all even numbers and sum of all odd numbers:-\n");
    printf("enter the 10 number:-");
    for(int i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        e=e+a[i];
        else
            o=o+a[i];
    }
    printf("sum of even number is=%d",e);
    printf("\n sum of odd number is =%d",o);
    getch();
    return 0;
}
