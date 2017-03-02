#include "Ball.h"
#include <iostream>



void Ball::setRadie(double radie)
{
	this->radie = radie;
}

void Ball::setColour(string colour)
{
	this->colour = colour;
}

void Ball::setMass(double mass)
{
	this->mass = mass;
}

double Ball::getRadie()
{
	return this-> radie;
}

string Ball::getColour()
{
	return this-> colour;
}

double Ball::getMass()
{
	return this-> mass;
}

double Ball::getVolume()
{
	//(4*pi*r^3)/3 
	double sum = 4 * pi() * getRadie() * 3;
	sum = sum / 3;
	return sum;
}

double Ball::getMantleArea()
{
	//4*pi*r^2
	double sum = 4 * pi() * getRadie() * 2;
	return sum;
}

string Ball::getBall()
{
	return string("Radie: " + to_string(getRadie()) + " Colour: " + getColour() + " Mass: " + to_string(getMass()));
}

double Ball::getSpeed(double force)
{
	//p=m*v
	//v=p/m
	return force/Ball::getMass();
}

bool Ball::operator==(const Ball & sec)
{
	bool anser = false;
	if (radie == sec.radie && colour == sec.colour && mass == sec.mass)
	{
		anser = true;
	}
	return anser;
}

Ball& Ball::operator=(const Ball & sec)
{
	radie = sec.radie;
	colour = sec.colour;
	mass = sec.mass;
	return *this;
}

bool Ball::operator>(const Ball & sec)
{
	bool anser = false;
	double sum = 4 * pi() * radie * 3;
	sum = sum / 3;
	double sum2 = 4 * pi() * sec.radie * 3;
	sum2 = sum2 / 3;

		if (sum > sum2)
		{
			anser = true;
		}
	return anser;
}

bool Ball::operator<(const Ball & sec)
{
	bool anser = false;
	double sum = 4 * pi() * radie * 3;
	sum = sum / 3;
	double sum2 = 4 * pi() * sec.radie * 3;
	sum2 = sum2 / 3;

	if (sum < sum2)
	{
		anser = true;
	}
	return anser;
}

Ball::Ball(double radie, string colour, double mass)
{
	this->radie = radie;
	this->colour = colour;
	this->mass = mass;
}

double Ball::pi()
{
	return 3.1415926535897;
}

Ball::Ball()
{
	this->radie = 0;
	this->colour = "Transparent";
	this->mass = 0;
}
