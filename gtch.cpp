/*
 * gtch.cpp
 *
 *  Created on: 19 февр. 2014 г.
 *      Author: ramzay
 */






#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>

struct TerminalOpt {
    TerminalOpt() {
        termios new_settings;
        tcgetattr(0,&stored_settings);
        new_settings = stored_settings;
        new_settings.c_lflag &= (~ICANON);
        new_settings.c_cc[VTIME] = 0;
        new_settings.c_cc[VMIN] = 1;
        tcsetattr(0,TCSANOW,&new_settings);
    }
    ~TerminalOpt() {
        tcsetattr(0,TCSANOW,&stored_settings);
    }
    termios stored_settings;
};
