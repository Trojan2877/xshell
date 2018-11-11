#include <stdio.h>
#include <stdlib.h>
#include <termcap.h>

void clear_screen()
{
char buf[1024];
char *str;

tgetent(buf, getenv("TERM"));
str = tgetstr("cl", NULL);
fputs(str, stdout);
} 

int main(){

clear_screen();
return 0;
	
}
