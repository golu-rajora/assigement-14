//10. Write a program in C to copy the elements of one array into another array.Take array values from the user
#include<stdio.h>
int main()
{
    int a[50],b[50],n;
    printf("to copy the elements of one array into another array.Take array values from the user:-");
    printf("\n enter a size of the array:-");
    scanf("%d",&n);
    printf("enter %d element:-",n);
    for(int i=0;i<n;i++)
       {
       scanf("%d",&a[i]);
       b[i]=a[i];
       }
       for(int i=0;i<n;i++)
        printf(" %d",b[i]);
       getch();
       return 0;

}
