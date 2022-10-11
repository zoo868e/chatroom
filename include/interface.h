#ifndef INTERFACE_H
#define INTERFACE_H

#include<curses.h>
#include<sys/ioctl.h>
#include<unistd.h>

static int MAX_ROW = 0, MAX_COL = 0;

void start_window();
void key_bind(int c);

#endif
