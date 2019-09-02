#include <ncurses/ncurses.h>

int main()
{
	int col,row;
	initscr();
	getmaxyx(stdscr, row, col);
	mvprintw(row/3, col/3, "%d,%d", row,col);
	getch();
	refresh();
	endwin();
	return 0;
}


