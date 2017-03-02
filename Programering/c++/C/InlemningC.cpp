#include <iostream>
#include <string>
#include "Ball.h"

void pause()
{
	system("pause");
}

void switchBall(Ball &ball1,Ball &ball2)
{
	Ball tempBall = ball1;
	ball1 = ball2;
	ball2 = tempBall;
}

void sortBuble(int nr, Ball *balls)
{
	Ball temp;
	for (int i = 0;i < nr;i++)
	{
		for (int e = nr-1;e - i>0;e--)
		{
			if (balls[e] > balls[e - 1])
			{
				switchBall(balls[e], balls[e - 1]);
			}
		}
	}
}

void printAll(int nr,Ball balls[])
{
	for (int i = 0;i < nr;i++)
	{
		if (balls[i].getRadie() != 0)
		{
			//cout << balls[i].getVolume() << endl;
			cout << balls[i].getRadie() << endl;
		}
	}
}

void setAll(Ball balls[])
{
	balls[0] = Ball(10, "Black", 20);
	balls[1] = Ball(50, "Red", 10);
	balls[2] = Ball(10, "Blue", 5);
}

void delBall(int nr,int nrToDel,Ball *balls)
{
	balls[nrToDel] = Ball();
	Ball temp;
	for (int i=nrToDel;i<nr-1;i++)
	{
		switchBall(balls[i], balls[i + 1]);
	}
}

void addBall(int nrToAdd,int nr,Ball *balls)
{
	Ball* tempBalls = new Ball[nr * 2];
	for (int i = 0;i < nr-1;i++)
	{
		tempBalls[i] = balls[i];
	}
	delete[] balls;
	nr = nr * 2;
	balls = tempBalls;
}

int main()
{
	int nr = 3;
	Ball* balls = new Ball[nr];
	setAll(balls);
	printAll(nr, balls);
	cout << endl;
	sortBuble(nr, balls);
	printAll(nr, balls);
	cout << endl;
	delBall(nr,1,balls);
	printAll(nr, balls);
	addBall(2,nr,balls);
	//printAll(7, balls);

	delete[] balls;
	pause();
    return 0;
}

