#pragma once
#ifndef KLASA_H
#define KLASA_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;
class metoda
{
private:
	vector<string>wzorzec;
	vector<string>dane;
	vector<string>wyj;
	char alfabet[27] = { 'A', 'B', 'C','D' ,'E' ,'F' ,'G' ,'H' ,'I' ,'J' ,'K' ,'L' ,'M' ,'N' ,'O' ,'P' ,'Q' ,'R' ,'S' ,'T' ,'U' ,'V' ,'W' ,'X' ,'Y' ,'Z', ' ' };
	string M[2][27];
	int H = 0;
	double IC = 0.0;
	double IC1 = 0.0;
public:
	void wczytaj();
	void out();
	void licz();
};



#endif // !KLASA_H

