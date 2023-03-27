#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
struct music
{unsigned int a;
 unsigned int b;
}m[25];
int main()
{int i;
 FILE*f;
 if((f=fopen("music.txt","r"))==NULL)
 {printf("cannot open file\n");
  exit(0);
 }
 for(i=0;i<25;i++)
 {fscanf(f,"%d %d",&m[i].a,&m[i].b);
 Beep(m[i].a,m[i].b);
 }
 fclose(f);
}
