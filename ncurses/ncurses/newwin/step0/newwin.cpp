#include <ncurses/ncurses.h>

int main()
{
	initscr();
	WINDOW *win;
	win = newwin(0,0,0,0);

	wprintw(win, "Hello");
	wrefresh(win);
	wgetch(win);

	delwin(win);
	endwin();
	
	return 0;
}

