#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct cust{
char name[50];
char street[30];
char city[20];
char con[10];
char accn[20];
char acct[20];
int oldbal,currbal,newbal,id;
};

struct date{
int dd;
int m;
int y;
};
int main(){

int i,j;

struct cust c;
struct date d;

  scanf("%d",&c.id);
  
  scanf("%s", c.name);
 
  scanf("%s", c.street);
  
  scanf("%s", c.city);
  
  scanf("%s", c.con);
  
  scanf("%s", c.accn);
  
  scanf("%s",c.acct);
 
  scanf("%d", &c.oldbal);
  
  scanf("%d", &c.currbal);
  
  scanf("%d %d %d", &d.dd, &d.m, &d.y);



  
  if(c.oldbal>c.currbal)
   c.newbal=c.oldbal-c.currbal;

  else if(c.currbal>c.oldbal)
    c.newbal=c.currbal-c.oldbal;

  printf("\nName-%s\n",c[j].name);
  printf("Street-%s\n",c[j].street);
  printf("City-%s\n",c[j].city);
  printf("Contact-%s\n",c[j].con);
  printf("Acc Num-%s\n",c[j].accn);
  printf("Acc Type-%s\n",c[j].acct);
  printf("Old Bal-%d\n",c[j].oldbal);
  printf("Curr bal-%d\n",c[j].currbal);
  printf("New bal-%d\n", c[j].newbal);
  printf("Payment Date %d %d %d\n", d[j].dd, d[j].m, d[j].y);
  printf("\nAccount Status\n");
  if(c[j].currbal>0 && c[j].currbal<((10/100)*c[j].oldbal))
  {
      printf("The Account is overdue");
  }

  else if(c[j].currbal==0 && c[j].oldbal>0)
  {
      printf("The Account is Delinquent\n");
  }

  else
  {

      printf("Current Account\n");
  }




return 0;
}
