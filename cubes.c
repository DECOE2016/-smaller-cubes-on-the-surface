#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int n,k,ans;
printf(" enter the size \n");
scanf("%d",&n);
printf(" enter the dimension");
scanf("%d",&k);
ans=pow(n,k)-pow((n-2),k);// no. of cubes excluding the hidden cubes
printf(" \n The number of cubes on the surface are%d",ans);
getch();
}
