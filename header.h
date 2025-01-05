#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
typedef struct contact
{
char name[30];
long prize;
int rate;
struct contact *next;
}SLL;
