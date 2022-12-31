//5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10];
    printf(" find the smallest number stored in an array of size 10. Take array values from the user:-\n");
    printf("enter the 10 number:-");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
    int min=a[0];
    for(int i=0;i<=9;i++)
    {
        if(min>a[i])
            min=a[i];
    }
     printf("the smallest number is=%d",min);
     getch();
     return 0;
}

