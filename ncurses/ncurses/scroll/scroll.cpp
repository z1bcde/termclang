#include <ncurses/ncurses.h>

int main()
{
	initscr();

	scrollok(stdscr, TRUE);
	int y,x;
	getmaxyx(stdscr,y,x);

	for(int i=0; i<y; i++)
	{
		mvprintw(i, i*2, "%d", i);
	}
	scroll(stdscr);
	refresh();
	getch();
	
	endwin();
	return 0;
}

