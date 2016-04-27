/*
 * yesterday.h
 *
 *  Created on: 11 дек. 2013 г.
 *      Author: ramzay
 */

#ifndef YESTERDAY_H_
#define YESTERDAY_H_

using namespace std;

void my::songs() {
	//int *lol = new int[26];
	int lol[26] = {G4, G4, F4, A4, B4, Cdis5, D5, E5,F5,E5,D5,D5,D5,D5,C5,Adis4,A4,G4,Adis4,A4,A4,G4,E4,A5,G4,D4 };
	x=sizeof lol/sizeof(int);
	/*char m[10];
		ifstream file("1.txt");
    x=sizeof file/sizeof(char);
		for (int b ;b<=x;b++) {
		  file >> m[b];
		}
	cout << x;*/
	for(int i=0;i<=x;i++)
	freq[i]=lol[i];
	//delete [] lol;
}
#endif /* YESTERDAY_H_ */
