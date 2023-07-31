#include<stdio.h>
int main()
{
    int x , y , temp;
    printf("Enter the first number : ");
    scanf("%d", &x);
    printf("Enter the second number : ");
    scanf("%d", &y);

    temp = x ;
    x = y ;
    y = temp ;

    printf("Now the value of first number is : %d\n", x);
    printf("Now the value of second number is : %d\n", y);


}
