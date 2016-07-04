#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b,n,i;
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&b);
for(i=b;i<n;i++)
{
printf("%d ",a[i]);
}
for(i=0;i<b;i++)
{
printf("%d ",a[i]);
}
getch();
}
