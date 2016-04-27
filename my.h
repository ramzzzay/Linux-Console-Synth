/*
 * my.h
 *
 *  Created on: 18 сент. 2013 г.
 *      Author: ramzay
 */

#ifndef MY_H_
#define MY_H_

using namespace std;

class my
{
public:
	my();
	~my();
	void sqrt();
	int r(int);
	void hanoi_towers(int quantity, int from , int buf_peg,int to);
	void music();
	void choose();
	void songs();
	void play();
	void check(bool t);
private:
	int x,y,z,w,n;
	int C0,Cdis0,D0,Ddis0,E0,F0,Fdis0,G0,Gdis0,A0,Adis0,B0;
	int C1,Cdis1,D1,Ddis1,E1,F1,Fdis1,G1,Gdis1,A1,Adis1,B1;
	int C2,Cdis2,D2,Ddis2,E2,F2,Fdis2,G2,Gdis2,A2,Adis2,B2;
	int C3,Cdis3,D3,Ddis3,E3,F3,Fdis3,G3,Gdis3,A3,Adis3,B3;
	int C4,Cdis4,D4,Ddis4,E4,F4,Fdis4,G4,Gdis4,A4,Adis4,B4;
	int C5,Cdis5,D5,Ddis5,E5,F5,Fdis5,G5,Gdis5,A5,Adis5,B5;
	int C6,Cdis6,D6,Ddis6,E6,F6,Fdis6,G6,Gdis6,A6,Adis6,B6;
	int C7,Cdis7,D7,Ddis7,E7,F7,Fdis7,G7,Gdis7,A7,Adis7,B7;
	int C8,Cdis8,D8,Ddis8,E8,F8,Fdis8,G8,Gdis8,A8,Adis8,B8;
	int fd;
	bool flag;
	//int  freq[1];
	int *freq = new int[n];
};

#endif /* MY_H_ */
