//6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],t;
    printf(" sort elements of an array of size 10:-\n");
    printf("enter the 10 number:-");
    for(int i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<=8;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
               {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
               }
        }

    }
    for(int i=0;i<=9;i++)
        printf(" %d",a[i]);
    getch();
    return 0;
}
