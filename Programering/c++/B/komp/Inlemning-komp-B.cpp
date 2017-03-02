#include <iostream>
#include <string>
#include <stdio.h>

#define UNIX 3
#define LINUX 2
#define WINDOWS 1

using namespace std;

int osProbe()
{

	#if defined(_WIN32) 
	return WINDOWS;

	#elif defined(__linux__)
	return LINUX;

	#elif defined(__unix__)
	return UNIX;

	#else
	return 0;
	#endif

}

void pause()
{
	switch (osProbe()){
		case WINDOWS:
			system("pause");
			break;
		case LINUX:
		case UNIX:
			cout << "Press enter to continue ...";
			cin.get();
			break;
		default:
			cout << "Stuff didn't go as planned" << endl;
	} 
	return;
}

void clear()
{
	switch (osProbe()){
		case WINDOWS:
			system("cls");
			break;
		case LINUX:
		case UNIX:
			system("clear");
			break;
		default:
			cout << "Stuff didn't go as planned" << endl;
	} 
	return;
}

int showMap(int count,int playerMap[],bool showBoats)
{
	for (int i = 0;i < count*2+3;i++)
	{
		printf("Û");
	}
	printf("\n");
	printf("Û");
	for (int i=0;i<count;i++)
	{
		if (showBoats == true)
		{
			switch (playerMap[i])
			{
			case 0:
				printf("| ");
				break;
			case 1:
				printf("|A");
				break;
			case 2:
				printf("|B");
				break;
			case 3:
				printf("|X");
				break;
			default:
				printf("| ");
				break;
			}
		}
		else
		{
			switch (playerMap[i])
			{
			case 3:
				printf("|X");
				break;
			default:
				printf("| ");
				break;
			}
		}
	}
	printf("|Û\n");
	for (int i = 0;i < count * 2+3;i++)
	{
		printf("Û");
	}
	printf("\n");
	return 0;
}

int testIfApproved(int place, int count)
{
	bool loop = true;
	while (loop)
	{
		if (place < 0 && place >= count - 1)
		{
			cout << "not within 0 and " << count << endl;
			cin >> place;
		}
		else
		{
			loop = false;
		}
	}
	clear();
	return place;
}

bool testIfHit(int place, int count, int playerMap[])
{
	for (int i = 0;i<count;i++)
	{
		if (playerMap[place-1] == 1 || playerMap[place-1] == 2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

int plaseBots(int count,int boats,int player,int playerMap[])
{

	int boat = 0;
	int place = 0;
	clear();

	if (player == 1)
	{
		boat = 1;
	}
	else
	{
		boat = 2;
	}
	cout << "Player " << player << " deploy all " << boats << " boats on the board" << endl;
	showMap(count, playerMap, true);

	for (int i = 0;i < boats;i++)
	{
		cout << "Place: ";
		cin >> place;
		testIfApproved(place,boats);
		playerMap[place-1] = boat;
		clear();
		cout << "(Player " << player << ")" << endl;
		showMap(count, playerMap, true);
		cout << "Boats left: " << boats - i - 1 << endl;
	}

	return playerMap[count];
}

int main()
{
	bool loop = true;
	int playerTurn = 1;
	int wide = 5;
	int boats = 3;

	clear();
	cout << "How wide will the playing field be?" << endl;
	cout << "Wide: ";
	cin >> wide;
	cout << "How many boats?" << endl;
	cout << "Boats: ";
	cin >> boats;
	testIfApproved(wide, wide);
	string playersName[2];

	int *playerAMape = new int [wide];
	int playerABoats = 3;
	int playerAGues = 0;
	string playerAName = "";

	int *playerBMape = new int[wide];
	int playerBBoats = 3;
	int playerBGues = 0;
	string playerBName = "";

	cout << "Player 1" << endl;
	cout << "Name: ";
	cin >> playersName[0];
	plaseBots(wide, boats, 1, playerAMape);
	pause();
	clear();
	cout << "Player 2" << endl;
	cout << "Name: ";
	cin >> playersName[1];
	plaseBots(wide, boats, 2, playerBMape);
	pause();
	clear();

	while (loop)
	{
		if (playerTurn == 1)
		{
			clear();
			cout << "Player 1 HP: " << playerABoats << " Player 2 HP: " << playerBBoats << endl;
			cout << playerAName << " (Player 1)" << endl;
			showMap(wide, playerBMape, false);
			cout << "Place: ";
			cin >> playerAGues;
			testIfApproved(playerAGues, wide);
			if (testIfHit(playerAGues, wide,playerBMape) == false)
			{
				playerTurn = 2;
			}
			else
			{
				playerBBoats--;
				playerBMape[playerAGues-1] = 3;
				cout << "HIT!!" << endl;
				pause();
			}

		}
		else
		{
			clear();
			cout << "Player 1 Boats: " << playerABoats << " Player 2 Boats: " << playerBBoats << endl;
			cout << playerBName << " (Player 2)" << endl;
			showMap(5, playerAMape, false);
			cout << "Place: ";
			cin >> playerBGues;
			testIfApproved(playerBGues, wide);
			if (testIfHit(playerBGues, wide, playerAMape) == false)
			{
				playerTurn = 1;
			}
			else
			{
				playerABoats--;
				playerBMape[playerBGues-1] = 3;
				cout << "HIT!!" << endl;
				system("pause");
			}

		}
		if (playerBBoats == 0)
		{
			clear();
			showMap(wide, playerAMape, true);
			showMap(wide, playerBMape, true);
			cout << "Player 1 win" << endl;
			pause();
			loop = false;
		}
		else if (playerABoats == 0)
		{
			system("cls");
			showMap(wide, playerAMape, true);
			showMap(wide, playerBMape, true);
			cout << "Player 1 win" << endl;
			system("pause");
			loop = false;
		}
	}
    return 0;
}
