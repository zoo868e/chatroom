#include"../include/interface.h"
void start_window(){
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	MAX_ROW = w.ws_row, MAX_COL = w.ws_col;
	// initializes the screen
	initscr();

	// whats for user input, returns int value of that key
	int c = INT8_MIN;
	do{
		if(c == 'q')
			break;
		clear();
		refresh();
		switch(c){
			case INT8_MIN;
			case KEY_RESIZE:
				ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
				MAX_ROW = w.ws_ro, MAX_COL = w.ws_col;
				break;
			default:
				mvaddch(0, 0, (char)c);
				break;
		}
		mvaddstr(MAX_ROW - 1, 0, "PRESS q to exit!");
	}while(c = getch());

	// deallocates memory and ends ncurses
	endwin();
}


void key_bind(int c){
	switch(c){
		case KEY_RESIZE:
			ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
			MAX_ROW = w.ws_row, MAX_COL = w.ws_col;
			if(CURSOR_Y >= MAX_COL)
				CURSOR_Y = MAX_COL - 1;
			if(CURSOR_X >= MAX_ROW)
				CURSOR_X = MAX_ROW - 1;
			break;
		case KEY_UP:
			if(CURSOR_X == 0)
				break;
			else
				CURSOR_X--;
			break;
		case KEY_LEFT:
			if(CURSOR_Y == 0)
				break;
			else
				CURSOR_Y--;
			break;
		case KEY_RIGHT:
			if(CURSOR_Y == MAX_COL - 1)
				break;
			else
				CURSOR_Y++;
			break;
		case KEY_DOWN:
			if(CURSOR_X == MAX_ROW - 1)
				break;
			else
				CURSOR_X++;
			break;
		default:
			mvaddch(0, 0, (char)c);
			break;
	}
}

