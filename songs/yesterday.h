/*
 * yesterday.h
 *
 *  Created on: 11 дек. 2013 г.
 *      Author: ramzay
 */

#ifndef YESTERDAY_H_
#define YESTERDAY_H_
#include <vector>

void my::songs() {
	std::vector<double> song = {G4, G4, F4, A4, B4, Cdis5, D5, E5,F5,E5,D5,D5,D5,D5,C5,Adis4,A4,G4,Adis4,A4,A4,G4,E4,A5,G4,D4 };

	for(auto i : song)
	v.push_back(i);
	//delete [] lol;
}
#endif /* YESTERDAY_H_ */
