#pragma once
#include <iostream>
#include <string>
class card
{
public:
	card(int nCards, char suits, char cardValue);
	~card();
protected:
	int nCards; 
	//const char *suits[4];
	//const char *cardValue[13];
};


