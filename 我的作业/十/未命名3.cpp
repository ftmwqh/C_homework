#include<stdio.h>
#include<stdlib.h>
int main()
{FILE*f;
int i=0;
char c;
if((f=fopen("message.txt","r+"))==NULL)
 {printf("´ò²»¿ª\n");
  exit(0);
 }
 c=fgetc(f);
 while(!feof(f))
 {fseek(f,sizeof(c)*i,0);
  if((c>='A'&&c<='S')||(c>='a'&&c<='s'))
  fputc(c+7,f);
  else if((c>'S'&&c<='Z')||(c>'s'&&c<='z'))
  fputc(c-19,f);
  else fputc(c,f);
  i++;
  fseek(f,sizeof(c)*i,0);
  c=fgetc(f);
 }
}
