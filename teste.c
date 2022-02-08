#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
 char pasword[10],usrname[10], ch;
 int i;
 int res;

 printf("Enter User name: ");
 gets(usrname);
 printf("Enter the password <any 8 characters>: ");

 for(i=0;i<1000;i++)
 {
  ch = getch();
  pasword[i] = ch;
  ch = '*' ;
  printf("%c",ch);

  ch = pasword[i];

  res = strcmp(ch, '1');

  if(res == 0)
  {
    printf("\nsão iguais\ns");

  }

 }


}
