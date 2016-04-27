/*
 * my.cpp
 *
 *  Created on: 18 сент. 2013 г.
 *      Author: ramzay
 */

#include "my.h"
#include <iostream>

#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <linux/kd.h>
#include <linux/input.h>
#include "songs/yesterday.h"
#include "gtch.cpp"

using namespace std;

my::my()
{
	// TODO Auto-generated constructor stub
x=y=z=w=n=0;
flag = false;
for(int i=0;i<=n;i++) {
freq[n]=0;
}
fd = open("/dev/tty0", O_WRONLY);
C0=16.35;Cdis0=17.32;D0=18.35;Ddis0=19.45;E0=20.60;F0=21.83;Fdis0=23.12;G0=24.50;Gdis0=25.96;A0=27.50;Adis0=29.14;//B0=30.87;
C1=32.70;Cdis1=34.65;D1=36.71;Ddis1=38.89;E1=41.20;F1=43.65;Fdis1=46.25;G1=49.00;Gdis1=51.91;A1=55.00;Adis1=58.27;B1=61.74;
C2=65.41;Cdis2=69.30;D2=73.42;Ddis2=77.78;E2=82.41;F2=87.31;Fdis2=92.50;G2=98.00;Gdis2=103.83;A2=110.00;Adis2=116.54;B2=123.47;
C3=130.81;Cdis3=138.59;D3=146.83;Ddis3=155.56;E3=164.81;F3=174.61;Fdis3=185.00;G3=196.00;Gdis3=207.65;A3=220.00;Adis3=233.08;B3=246.94;
C4=261.63;Cdis4=277.18;D4=293.66;Ddis4=311.13;E4=329.63;F4=349.23;Fdis4=369.99;G4=392.00;Gdis4=415.30;A4=440.00;Adis4=466.16;B4=493.88;
C5=523.25;Cdis5=554.37;D5=587.33;Ddis5=622.25;E5=659.26;F5=698.46;Fdis5=739.99;G5=783.99;Gdis5=830.61;A5=880.00;Adis5=932.33;B5=987.77;
C6=1046.50;Cdis6=1108.73;D6=1174.66;Ddis6=1244.51;E6=1318.51;F6=1396.91;Fdis6=1396.91;G6=1567.98;Gdis6=1661.22;A6=1760.00;Adis6=1864.66;B6=1975.53;
C7=2093.00;Cdis7=2217.46;D7=2349.32;Ddis7=2489.02;E7=2637.02;F7=2793.83;Fdis7=2959.96;G7=3135.96;Gdis7=3322.44;A7=3520.00;Adis7=3729.31;B7=3951.07;
C8=4186.01;Cdis8=4434.92;D8=4698.64;Ddis8=4978.03;E8=F8=Fdis8=G8=Gdis8=A8=Adis8=B8=0;
}

my::~my()
{
//cout << "Destruction the class my. This message is for testers, on time for development" <<endl;
}

void my::music() {
    /*int freq[] = {G4, F4, F4, A4, B4, Cdis5, D5, E5,F5,E5,D5,D5,D5,D5,C5,Adis4,A4,G4,Adis4,A4,A4,G4,E4,A5,G4,D4 };
    cout << "Сколько нот сыграть ? " ;
    int n;
    cin >> n;*/
    for (int i=0; i<n; i++)
    {
            ioctl(fd, KIOCSOUND, 1193180/freq[i]);
            usleep(500000);

    }
    ioctl(fd, KIOCSOUND, 0); /*Stop silly sound*/
}

void my::check(bool t){

	if(flag !=true) {n++;}

}


void my::choose() {
cout << "Выберите октаву" <<endl
		<< "1)Субконтроктава" <<endl
		<< "2)Контроктава" <<endl
		<< "3)Большая октава" <<endl
		<< "4)Маля октава" <<endl
		<< "5)Первая октава" <<endl
		<< "6)Вторая октава" <<endl
		<< "7)Третья октава" <<endl
		<< "8)Четвёртая октава" <<endl
		<< "9) beatles - yesterday" <<endl
		<<"так же любая клавиша для выхода( или для игры,если вы выбирали ноты)" <<endl
				<< "Так же ноты можно выбирать через проблел"
					" (например <<5 2>> это будет означать,"
					" что вы выбрали ноту C# первой октавы" <<endl;
while(true) {
	int s=0;
	cin >> s;
switch(s ) { //Глабальный switch
case 1:		 //Субконтроктава октава
	cout << "Вы в меню Субконтроктавы" <<endl
			 <<"выберите ноты(1-12)" << endl;
cin >> s;
switch(s) { //переключатель в первой октаве
case 1: //Пошли ноты в первой октаве
	cout << "C0" <<endl;
	freq[n]=C0;
	break;
case 2:
	cout << "Cdis0" <<endl;
	freq[n]=Cdis0;
	break;
case 3:
	cout << "D0" <<endl;
	freq[n]=D0;
	break;
case 4:
	cout << "Ddis0" <<endl;
	freq[n]=Ddis0;
	break;
case 5:
	cout << "E0" <<endl;
	freq[n]=E0;
	break;
case 6:
	cout << "F0" <<endl;
	freq[n]=F0;
	break;
case 7:
	cout << "Fdis0" <<endl;
	freq[n]=Fdis0;
	break;
case 8:
	cout << "G0" << endl;
	freq[n]=G0;
	break;
case 9:
	cout << "Gdis0" <<endl;
	freq[n]=Gdis0;
	break;
case 10:
	cout << "A0" <<endl;
	freq[n]=A0;
	break;
case 11:
	cout << "Adis0" <<endl;
	freq[n]=Adis0;
	break;
case 12:
	cout << "B(H)0" <<endl;
	freq[n]=B0;
	break;
default:
	flag = true;
	//i=EOF;
	cout << "Вы опять в общем меню " <<endl;
	break;
}
check(flag);
	break;
case 2:
	cout << "Вы в меню Контроктавы" <<endl
			 <<"выберите ноты(1-12)" << endl;
	cin >> s;
	switch(s) { //переключатель в второй октаве
	case 1: //Пошли ноты в второй октаве
		cout << "C1" <<endl;
		freq[n]=C1;
		break;
	case 2:
		cout << "Cdis1" <<endl;
		freq[n]=Cdis1;
		break;
	case 3:
		cout << "D1" <<endl;
		freq[n]=D1;
		break;
	case 4:
		cout << "Ddis1" <<endl;
		freq[n]=Ddis1;
		break;
	case 5:
		cout << "E1" <<endl;
		freq[n]=E1;
		break;
	case 6:
		cout << "F1" <<endl;
		freq[n]=F1;
		break;
	case 7:
		cout << "Fdis1" <<endl;
		freq[n]=Fdis1;
		break;
	case 8:
		cout << "G1" << endl;
		freq[n]=G1;
		break;
	case 9:
		cout << "Gdis1" <<endl;
		freq[n]=Gdis1;
		break;
	case 10:
		cout << "A1" <<endl;
		freq[n]=A1;
		break;
	case 11:
		cout << "Adis1" <<endl;
		freq[n]=Adis1;
		break;
	case 12:
		cout << "B(H)1" <<endl;
		freq[n]=B1;
		break;
	default:
		flag = true;
		cout << "Итого у нас " << n << " нот(ы)" <<endl;
		break;
	}
check(flag);
	break;
case 3:
	cout << "Вы в меню Большой октавы" <<endl
			 <<"выберите ноты(1-12)" << endl;
	cin >> s;
	switch(s) { //переключатель в третьей октаве
	case 1: //Пошли ноты в третьей октаве
		cout << "C2" <<endl;
		freq[n]=C2;
		break;
	case 2:
		cout << "Cdis2" <<endl;
		freq[n]=Cdis2;
		break;
	case 3:
		cout << "D2" <<endl;
		freq[n]=D2;
		break;
	case 4:
		cout << "Ddis2" <<endl;
		freq[n]=Ddis2;
		break;
	case 5:
		cout << "E2" <<endl;
		freq[n]=E2;
		break;
	case 6:
		cout << "F2" <<endl;
		freq[n]=F2;
		break;
	case 7:
		cout << "Fdis2" <<endl;
		freq[n]=Fdis2;
		break;
	case 8:
		cout << "G2" << endl;
		freq[n]=G2;
		break;
	case 9:
		cout << "Gdis2" <<endl;
		freq[n]=Gdis2;
		break;
	case 10:
		cout << "A2" <<endl;
		freq[n]=A2;
		break;
	case 11:
		cout << "Adis2" <<endl;
		freq[n]=Adis2;
		break;
	case 12:
		cout << "B(H)2" <<endl;
		freq[n]=B2;
		break;
	default:
		flag = true;
		cout << "Итого у нас " << n << " нот(ы)" <<endl;
		break;
	}
	check(flag);
	break;
case 4:
	cout << "Вы в меню Малой октавы" <<endl
			 <<"выберите ноты(1-12)" << endl;
cin >> s;
switch(s) { //переключатель в четвёртой октавы
case 1: //Пошли ноты в первой октаве
	cout << "C3" <<endl;
	freq[n]=C3;
	break;
case 2:
	cout << "Cdis3" <<endl;
	freq[n]=Cdis3;
	break;
case 3:
	cout << "D3" <<endl;
	freq[n]=D3;
	break;
case 4:
	cout << "Ddis3" <<endl;
	freq[n]=Ddis3;
	break;
case 5:
	cout << "E3" <<endl;
	freq[n]=E3;
	break;
case 6:
	cout << "F3" <<endl;
	freq[n]=F3;
	break;
case 7:
	cout << "Fdis3" <<endl;
	freq[n]=Fdis3;
	break;
case 8:
	cout << "G3" << endl;
	freq[n]=G3;
	break;
case 9:
	cout << "Gdis3" <<endl;
	freq[n]=Gdis3;
	break;
case 10:
	cout << "A3" <<endl;
	freq[n]=A3;
	break;
case 11:
	cout << "Adis3" <<endl;
	freq[n]=Adis3;
	break;
case 12:
	cout << "B(H)3" <<endl;
	freq[n]=B3;
	break;
default:
	flag = true;
	cout << "Вы опять в общем меню " <<endl;
	break;
}
check(flag);
	break;
case 5:
	cout << "Вы в меню Первой Октавы" <<endl
			 <<"выберите ноты(1-12)" << endl;
cin >> s;
switch(s) { //переключатель в первой октаве
case 1: //Пошли ноты в первой октаве
	cout << "C4" <<endl;
	freq[n]=C4;
	break;
case 2:
	cout << "Cdis4" <<endl;
	freq[n]=Cdis4;
	break;
case 3:
	cout << "D4" <<endl;
	freq[n]=D4;
	break;
case 4:
	cout << "Ddis4" <<endl;
	freq[n]=Ddis4;
	break;
case 5:
	cout << "E4" <<endl;
	freq[n]=E4;
	break;
case 6:
	cout << "F4" <<endl;
	freq[n]=F4;
	break;
case 7:
	cout << "Fdis4" <<endl;
	freq[n]=Fdis4;
	break;
case 8:
	cout << "G4" << endl;
	freq[n]=G4;
	break;
case 9:
	cout << "Gdis4" <<endl;
	freq[n]=Gdis4;
	break;
case 10:
	cout << "A4" <<endl;
	freq[n]=A4;
	break;
case 11:
	cout << "Adis4" <<endl;
	freq[n]=Adis4;
	break;
case 12:
	cout << "B(H)4" <<endl;
	freq[n]=B4;
	break;
default:
	flag = true;
	cout << "Вы опять в общем меню " <<endl;
	break;
}
check(flag);
	break;
case 6:
	cout << "Вы в меню Второй Октавы" <<endl
			 <<"выберите ноты(1-12)" << endl;
cin >> s;
switch(s) { //переключатель в первой октаве
case 1: //Пошли ноты в первой октаве
	cout << "C5" <<endl;
	freq[n]=C5;
	break;
case 2:
	cout << "Cdis5" <<endl;
	freq[n]=Cdis5;
	break;
case 3:
	cout << "D5" <<endl;
	freq[n]=D5;
	break;
case 4:
	cout << "Ddis5" <<endl;
	freq[n]=Ddis5;
	break;
case 5:
	cout << "E5" <<endl;
	freq[n]=E5;
	break;
case 6:
	cout << "F5" <<endl;
	freq[n]=F5;
	break;
case 7:
	cout << "Fdis5" <<endl;
	freq[n]=Fdis5;
	break;
case 8:
	cout << "G5" << endl;
	freq[n]=G5;
	break;
case 9:
	cout << "Gdis5" <<endl;
	freq[n]=Gdis5;
	break;
case 10:
	cout << "A5" <<endl;
	freq[n]=A5;
	break;
case 11:
	cout << "Adis5" <<endl;
	freq[n]=Adis5;
	break;
case 12:
	cout << "B(H)5" <<endl;
	freq[n]=B5;
	break;
default:
	flag = true;
	cout << "Вы опять в общем меню " <<endl;
	break;
}
check(flag);
	break;
case 7:
	cout << "Вы в меню Третьей Октавы" <<endl
			 <<"выберите ноты(1-12)" << endl;
cin >> s;
switch(s) { //переключатель в первой октаве
case 1: //Пошли ноты в первой октаве
	cout << "C6" <<endl;
	freq[n]=C6;
	break;
case 2:
	cout << "Cdis6" <<endl;
	freq[n]=Cdis6;
	break;
case 3:
	cout << "D6" <<endl;
	freq[n]=D6;
	break;
case 4:
	cout << "Ddis6" <<endl;
	freq[n]=Ddis6;
	break;
case 5:
	cout << "E6" <<endl;
	freq[n]=E6;
	break;
case 6:
	cout << "F6" <<endl;
	freq[n]=F6;
	break;
case 7:
	cout << "Fdis6" <<endl;
	freq[n]=Fdis6;
	break;
case 8:
	cout << "G6" << endl;
	freq[n]=G6;
	break;
case 9:
	cout << "Gdis6" <<endl;
	freq[n]=Gdis6;
	break;
case 10:
	cout << "A6" <<endl;
	freq[n]=A6;
	break;
case 11:
	cout << "Adis6" <<endl;
	freq[n]=Adis6;
	break;
case 12:
	cout << "B(H)6" <<endl;
	freq[n]=B6;
	break;
default:
	flag = true;
	cout << "Вы опять в общем меню " <<endl;
	break;
}
check(flag);
	break;
case 8:
	cout << "Вы в меню Четвёртой Октавы" <<endl
			 <<"выберите ноты(1-12)" << endl;
cin >> s;
switch(s) { //переключатель в первой октаве
case 1: //Пошли ноты в первой октаве
	cout << "C7" <<endl;
	freq[n]=C7;
	break;
case 2:
	cout << "Cdis7" <<endl;
	freq[n]=Cdis7;
	break;
case 3:
	cout << "D7" <<endl;
	freq[n]=D7;
	break;
case 4:
	cout << "Ddis7" <<endl;
	freq[n]=Ddis7;
	break;
case 5:
	cout << "E7" <<endl;
	freq[n]=E7;
	break;
case 6:
	cout << "F7" <<endl;
	freq[n]=F7;
	break;
case 7:
	cout << "Fdis7" <<endl;
	freq[n]=Fdis7;
	break;
case 8:
	cout << "G7" << endl;
	freq[n]=G7;
	break;
case 9:
	cout << "Gdis7" <<endl;
	freq[n]=Gdis7;
	break;
case 10:
	cout << "A7" <<endl;
	freq[n]=A7;
	break;
case 11:
	cout << "Adis7" <<endl;
	freq[n]=Adis7;
	break;
case 12:
	cout << "B(H)7" <<endl;
	freq[n]=B7;
	break;
default:
	flag = true;
	cout << "Вы опять в общем меню " <<endl;
	break;
}
check(flag);
	break;
case 9:
my::songs();
n=x;
break;
default:
	cout << "We have " << n << "notes" <<endl;
	return;
	break;
}
}
}

void my::play() {
	TerminalOpt term;
	n=1;
	for ( char s = 0; (s=getc(stdin)) != '-'; ) {
	switch(s) { //Играем в стиле FL Studio
	case 'z':
		freq[0]=C3;
		my::music();
		break;
	case 's':
		freq[0]=Cdis3;
		my::music();
		break;
	case 'x':
		freq[0]=D3;
		my::music();
		break;
	case 'd':
		freq[0]=Ddis3;
		my::music();
		break;
	case 'c':
		freq[0]=E3;
		my::music();
		break;
	case 'v':
		freq[0]=F3;
		my::music();
		break;
	case 'g':
		freq[0]=Fdis3;
		my::music();
		break;
	case 'b':
		freq[0]=G3;
		my::music();
		break;
	case 'h':
		freq[0]=Gdis3;
		my::music();
		break;
	case 'n':
		freq[0]=A3;
		my::music();
		break;
	case 'j':
		freq[0]=Adis3;
		my::music();
		break;
	case 'm':
		freq[0]=B3;
		my::music();
		break;
	case 'q':
		freq[0]=C4;
		my::music();
		break;
	case '2':
		freq[0]=Cdis4;
		my::music();
		break;
	case 'w':
		freq[0]=D4;
		my::music();
		break;
	case '3':
		freq[0]=Ddis4;
		my::music();
		break;
	case 'e':
		freq[0]=E4;
		my::music();
		break;
	case 'r':
		freq[0]=F4;
		my::music();
		break;
	case '5':
		freq[0]=Fdis4;
		my::music();
		break;
	case 't':
		freq[0]=G4;
		my::music();
		break;
	case '6':
		freq[0]=Gdis4;
		my::music();
		break;
	case 'y':
		freq[0]=A4;
		my::music();
		break;
	case '7':
		freq[0]=Adis4;
		my::music();
		break;
	case 'u':
		freq[0]=B4;
		my::music();
		break;
	default:
		//i=EOF;
		break;
	}
	}
}
