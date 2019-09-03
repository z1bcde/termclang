/*
 * index.c
 *
 *  Created on: 2019/09/03
 *      Author: user
 */
#include <ncurses/ncurses.h>

int main()
{
	initscr();
	addch('A');
	getch();
	endwin();
	return 0;
}

