#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){

int n,i,j,k,max,min,pos,p,m,ch,t;
m=0;
ch=0;
printf("Enter the number of terms of matrice \n");
scanf("%d", &n);

int a[n][n];

printf("Enter the elements of matrice ");

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
     scanf("%d", &a[i][j]);
    }
 printf("\n");
}

printf("\nThe entered matrice is \n");

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d \t", a[i][j]);
    }
  printf("\n");
}

for(i=0;i<n;i++)
{
    min=a[i][0];
    for(j=0;j<n;j++)
     {
         if(a[i][j]<min)
         {
             m=1;
             min=a[i][j];
             pos=j;
         }
    }
  if(m==0)
  {
    pos=0;
  }
max=a[i][pos];
  for(k=0;k<n;k++)
  {
     if(a[k][pos]>max)
     {
         max=a[k][pos];
         p=k;
     }


  }
if(max==min && p==i)
{
    t=i+1;
    ch=1;
    printf("\nThe given matrice has %d as saddle point in row number %d", max, t);
}

}

if(ch==0)
{
    printf("\nThe given matrice has no saddle point");
}

return 0;
}
