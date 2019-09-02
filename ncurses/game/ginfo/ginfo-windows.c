#include <ncurses/ncurses.h>


int main()
{
	int x,y;
	x = 0; y = 0;
	initscr();
	getmaxyx(stdscr, y,x);
	move(y/2,x/2);
	printw("%d,%d", y,x); //37,125
	getch();
	endwin();
	return 0;
}

