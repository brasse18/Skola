#pragma once
#include <iostream>
#include <string>

using namespace std;

class GymCard
{
private:
	string name;
	int memberNr;

public:
	GymCard();
	~GymCard();
	string getName();
	int getMemberNr();
};

