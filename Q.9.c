//9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user
#include<stdio.h>
int main()
{
    int a[50],n;
    printf("to read n number of values in an array and display it in reverse order:-\n");
    printf("enter the size:-");
    scanf("%d",&n);
    printf("enter %d element:-",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nreverse element is:-");
    for(n=n-1;n>=0;n--)
        printf(" %d",a[n]);
    getch();
    return 0;

}
