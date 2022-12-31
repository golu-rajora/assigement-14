//2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
int main()
{
    int a[10],s=0;
    printf("to calculate the average of numbers stored in an array of size 10. Take array values from the user. :-\n");
    printf("enter 10 number:-");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
        for(int i=0;i<=9;i++){
            s=s+a[i];}
            int b;
            b=s/10;
        printf("average is=%d",b);
        getch();
        return 0;


}
