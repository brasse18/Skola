#ifndef BALL_H
#include <string>

using namespace std;

class Ball
{
private:
	double radie;
	double mass;
	string colour;
public:
	Ball();
	Ball(double radie, string colour, double mass);
	double pi();
	void setRadie(double radie);
	void setColour(string colour);
	void setMass(double mass);
	double getRadie();
	string getColour();
	double getMass();
	double getVolume();
	double getMantleArea();
	string getBall();
	double getSpeed(double force);
	bool operator == (const Ball&);
	Ball& operator = (const Ball&sec);
	bool operator > (const Ball&);
	bool operator < (const Ball&);
};

#endif