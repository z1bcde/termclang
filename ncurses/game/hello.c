#include <ncurses/ncurses.h>

int main()
{
	int col,row;
	initscr();
	getmaxyx(stdscr, row, col);
	mvaddch(row/2, col/2, 'A');
	mvprintw(row/3, col/3, "%d,%d", row,col);
	getch();
	refresh();
	endwin();
	return 0;
}


