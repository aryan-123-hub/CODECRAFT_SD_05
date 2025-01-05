#include"header.h"
#include<stdlib.h>
void add(SLL **);
void display(SLL *);
void save(SLL *);

int main()
{
SLL *ptr=0;
int op,c=0;
while(1){
printf("\033[31m 1]Add product info.. \n 2]save data in file\n 3]List the product info... \n 4]exit \033[0m\n");
scanf("%d",&op);
switch(op)
{
case 1:
add(&ptr);
break;
case 2: save(ptr);
break;
case 3:
display(ptr);
break;
case 4:
exit(0);
break;
default :
printf("Invalid choice \n");
break;
}
}
}
/****************************************************************/

void add(SLL **ptr)
{

SLL *new,*temp;
new=malloc(sizeof(SLL));
printf("enter name,prize and ratings\n");
scanf("%s %ld %d",new->name,&new->prize,&new->rate);
new->next=0;



if(*ptr==0)
*ptr=new;
else
{
 temp=*ptr;
while(temp->next)
temp=temp->next;

temp->next=new;
}
printf("\033[32m Information Stored ..\033[0m\n");
}
/***********************************************************************/
void display(SLL *temp)
{
if(temp==0)
{
printf("\033[32m No Product Informations are there\033[0m \n");
return;
}

while(temp)
{
printf("%s %ld %d\n",temp->name,temp->prize,temp->rate);
temp=temp->next;
}

}
/***************************************************************************/

void save(SLL *ptr)
{
FILE *fp=fopen("phonebook","w+");
while(ptr)
{
fprintf(fp,"%s %ld %d\n",ptr->name,ptr->prize,ptr->rate);
ptr=ptr->next;
}
printf("\033[32m Product Information saved in file \033[0m\n");
fclose(fp);
}
/*****************************************************************************/
