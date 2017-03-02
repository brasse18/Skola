#include <iostream> // inport input stream
#include <time.h>
#include <stdlib.h>

using namespace std;

int main ()  // funktions start
 {
	string userInput;
	bool loop = true;
	srand(time(NULL));
	int 	playerNr [3][3];
	string	playerName [3];
	int	randNr = rand() % 100 + 1;
	int	range	[3] = {100,0,0};// 0:närmaste tallet 1: Vilken spelare 2: spelarens gisning
	int	courentRange =0;
	while (loop) 	// Loop tills input "inget"
	{
		system ("CLS");
		cout << "Player One Name: " << endl;
		cin >> userInput;
		if (userInput == "inget")
		{
			for (int i=0;i<3;i++)
			{
				for (int e=0;e<3;e++)
				{
					if (playerNr[i][e] - randNr >= 0)
					{
						courentRange = playerNr[i][e] - randNr;
					}
					else 
					{
						courentRange = playerNr[i][e] - randNr * (-1);
					}
					if (courentRange <= range[0])
					{
						range[0] = courentRange;
						randnge[1] = i;
						range[2] = e;
					} 		
				}
			}
			cout << "Viner is " << playerName[range[1]] << " with the guess " << playerNr[range[1]][range[2]] << endl;
			cout << "The sicret number is " << randNr << endl;
			loop = false; 
		}
		else
		{
			for (int i=0;i<3;i++)
			{
				switch(i)
				{
					case 1:
						playerName[i] = userInput;
					case 2:
						cout << "Player Two Name: " << endl;
						cin  >> playerName[i];
					break;
					case 3:
						cout << "Player Tre Name: " << endl;
						cin  >> playerName[i];
					break;
					default:
					break;
				}
				for (int e=0;e<3;e++)
				{
					cout << "Tal " << e << endl;
					cin  >> playerNr[i][e]; 
				}
			}
		}
	}
	return 0;
 }
