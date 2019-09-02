#include <ncurses/ncurses.h>
#include <unistd.h>


int main()
{
	int x,y;
	x=0;
	initscr();
	while(true)
	{
		x = x + 1;
		move(10,x);
		addch('A');
		move(40,x);
		addch('B');
		refresh();
		usleep(9000);
	}

	getch();
	endwin();
	return 0;
}

