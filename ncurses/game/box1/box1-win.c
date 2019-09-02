#include <ncurses/ncurses.h>

int main()
{
	int x,y,w,h,ch;
	x = y = w = h = 0;
	initscr();
	keypad(stdscr, TRUE);
	y = 30;x = 30;
	move(y,x);
	addch('A');
	while((ch =getch()) != KEY_F(1))
	{
		switch(ch)
		{
			case KEY_LEFT:
				clear();
				move(y,--x);
				addch('A');
				break;
			case KEY_RIGHT:
				clear();
				move(y,++x);
				addch('A');
				break;
			case 32:
				clear();
				move(--y,x);
				addch('A');
				break;
		}
	}

	endwin();
	return 0;
}

