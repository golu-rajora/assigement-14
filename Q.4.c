//4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10];
    printf(" find the greatest number stored in an array of size 10. Take array values from the user:-\n");
    printf("enter the 10 number:-");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    int max=a[0];
    for(int i=0;i<=9;i++)
    {
        if(max<a[i])
            max=a[i];
    }
     printf("the greatest number is=%d",max);
     getch();
     return 0;
}
