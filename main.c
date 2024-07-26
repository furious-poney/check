#include <ncurses.h>
#include "check.h"
int main()
{
	
	int last_choice;
	initscr();
	cbreak();
	curs_set(0);
	interface();
	
	
	endwin();
	final();
	return 0;
}
