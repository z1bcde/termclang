#include <ncurses/ncurses.h>
#include <windows.h>


int main()
{
	int x,y;
	x=0; y=0;
	initscr();
	while(true)
	{
		x = x + 1;
		move(10,x);
		addch('A');
		move(30,x);
		addch('B');
		refresh();
		Sleep(100);
	}

	getch();
	endwin();
	return 0;
}

