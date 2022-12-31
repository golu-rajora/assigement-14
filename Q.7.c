//7. Write a program to find second largest in an array.Take array values from the user
#include<stdio.h>
int main()
{
    int a[10],t;
    printf("find second largest in an array :-\n");
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
       printf("second largest element is=%d",a[8]);
    getch();
    return 0;
}
