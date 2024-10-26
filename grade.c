#include<stdio.h>
int main()
{
int a;
printf("Enter ur overall percentage");
scanf("%d",&a);
if(a>=75)
    printf("Grade A");
else if (a<75 && a>=60)
    printf("Grade B");
else if (a<60 && a>=40)
    printf("Grade C");
else
    printf("Fail");
}
