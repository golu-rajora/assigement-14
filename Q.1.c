//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user
int main()
{
    int a[10],s=0;
    printf(" calculate the sum of numbers stored in an array of size 10. Take array values from the user:-\n");
    printf("enter 10 number:-");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
        for(int i=0;i<=9;i++){
            s=s+a[i];}
        printf("sum is=%d",s);
        getch();
        return 0;


}
