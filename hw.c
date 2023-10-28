#include <stdlib.h>
#include <stdio.h>
int word (char *s1, char *s2)
{
while (*s1 || *s2)
if ((*s1-*s2)&&(*s1!=' ')&&(*s2!=' '))
return *s1-*s2;
else  
{
if (*s1==' ' && *s2!=' ')
++s1;
else if (*s2==' ' && *s1!=' ')
++s2;
else 
{
++s1;
++s2;
}
}
return 0;
}
int main()
{
printf("\t home work 7\n");
char s1[]="he o wo rld ";
char s2[]="hello wo  rld  ";
printf("%d\n", word(s1,s2));
return 0;
}
