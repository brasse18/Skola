#include <iostream> // inport input stream
#include <time.h>
#include <stdlib.h>

using namespace std;

int main ()  // funktions start
 {
	string userInput;
	bool loop = true;
	srand(time(NULL));
	int 	playerNr = 0;
	string 	playerName = "";
	int 	playerGes = 0;
	string 	inputName = "";
	int	randNr = rand() % 100 + 1;
	int	tempRange = 100;
	int 	courentRange = 100;
	while (loop) 	// Loop tills input "inget"
	{
		system ("CLS");
		if (inputName == "inget")
		{
			cout << "Viner is " << playerName << " with the guess " << playerNr << endl; 
			cout << "The sicret number is " << randNr << endl;
			loop = false; 
		}
		else
		{
			cout << "Player Name: " << endl;
			cin  >> inputName;
			if (inputName != "inget")
			{
				for (int i=0;i<3;i++)
				{
					cout << "Tal: " << endl;
					cin  >> playerGes;
					if (playerGes - randNr >= 0)
					{
						tempRange = playerGes - randNr;
					}
					else 
					{
						tempRange = -1*(playerGes - randNr);
					}
					if (tempRange <= courentRange)
					{
						courentRange = tempRange;
						playerNr = playerGes;
						playerName = inputName;
					}
				}
			}
		}
	}
	return 0;
 }
