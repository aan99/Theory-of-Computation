//Including require header files

#include <stdio.h>
#include <string.h>
#include<conio.h>

int main()
{
char s[20];
int l, State, c;
char Temp;
clrscr();
//Taking string input
printf("\n enter string to check: \n");
gets(s);

l=strlen(s);
//length of the string
printf("String length is %d \n", l);


c=0;


State=1;
// initial state
printf("Initial state: %d \n", State);


while(c<l)
{
Temp=s[c];

switch(State)
{
case 1:
if(Temp=='0')
State=2;

if(Temp=='1')
State=1;
break;

case 2:
if(Temp=='0')
State=2;
if(Temp=='1')
State=3;
break;

case 3:
if(Temp=='0')
State=2;
if(Temp=='1')
State=1;
break;
}
c++;
}
printf("Last State: %d\n",State);

if(State==3)
printf("Valid string \n");
else
printf("InValid string \n");

getch();
return 0;
}
