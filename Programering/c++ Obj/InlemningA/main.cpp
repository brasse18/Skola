#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "HousingRegister.h"
#include "Housing.h"

using namespace std;

#define UNIX 3
#define LINUX 2
#define WINDOWS 1

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
            cin.ignore();
            cin.get();
            break;
        default:
            cout << "Stuff didn't go as planned" << endl;
    }
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
}


void printAll(HousingRegister reg)
{
    cout << reg.getAllToString() << endl;
}

void writeToFile(HousingRegister housingRegister)
{
    ofstream outFile;
    string file;
    cout << "Filens namn: " << endl;
    cin >> file;
    outFile.open(file);
    if (outFile.is_open())
    {
        outFile << housingRegister.getAllToPrint();
        outFile.close();
    } else {
        cout << "Unable to open file" << endl;
    }
}

void readFromFile(HousingRegister &housingRegister)
{
    string file;
    int nrOfHous;
    int idNr;
    string line;
    ifstream inFile;
    int id;
    int rent;
    int size;
    int nrOfRoms;
    string adres;
    string type;
    cout << "Filens namn: " << endl;
    cin >> file;
    inFile.open(file);
    if (inFile.is_open())
    {
        inFile >> nrOfHous;
        inFile >> idNr;
        Housing** tempHous = new Housing*[nrOfHous];
        for (int i=0;i<nrOfHous;i++)
        {
            inFile >> id;
            inFile >> rent;
            inFile >> size;
            inFile >> nrOfRoms;
            inFile >> adres;
            inFile >> type;
            tempHous[i] = new Housing(id,rent,size,nrOfRoms,adres,type);
            housingRegister.setHous(tempHous);
            housingRegister.setIdNr(idNr);
            housingRegister.setNrOfHous(nrOfHous);
            housingRegister.setNrOfPlacesForHous(nrOfHous);
        }
        inFile.close();
    } else {
        cout << "Unable to open file" << endl;
    }
}

void addHous(HousingRegister &housingRegister)
{
    int rent;
    int size;
    int nrOfRoms;
    string adres;
    string type;
    cout << "Adres: " << endl;
    cin  >> adres;
    cout << "Type: " << endl;
    cin  >> type;
    cout << "Size: " << endl;
    cin  >> size;
    cout << "Rent: " << endl;
    cin  >> rent;
    cout << "Antal rum: " << endl;
    cin  >> nrOfRoms;
    housingRegister.addHous(rent,size,nrOfRoms,adres,type);
}

void editHous(HousingRegister &housingRegister)
{
	int id;
	int rent;
	int size;
	int nrOfRoms;
	string adres;
	string type;
	cout << "Id to edit: " << endl;
	cin >> id;
	if (housingRegister.idCheck(id))
	{ 
		cout << "Adres: " << endl;
		cin >> adres;
		cout << "Type: " << endl;
		cin >> type;
		cout << "Size: " << endl;
		cin >> size;
		cout << "Rent: " << endl;
		cin >> rent;
		cout << "Antal rum: " << endl;
		cin >> nrOfRoms;
		housingRegister.editHous(id,rent, size, nrOfRoms, adres, type);
	}
	else
	{
		cout << "Id not fond" << endl;
	}
}

void delHous(HousingRegister &housingRegister)
{
	int id;
	cout << "Id to remove: " << endl;
	cin >> id;
	if (housingRegister.idCheck(id))
	{
		housingRegister.removeHous(id);
	}
	else
	{
		cout << "Id not fond" << endl;
	}
}

void printMeny()
{
    cout << "1 Loade from file" << endl;
    cout << "2 Prinat all" << endl;
    cout << "3 Save to file" << endl;
    cout << "4 Edit" << endl;
    cout << "5 Remove" << endl;
	cout << "6 Add" << endl;
    cout << "0 Exit" << endl;
    cout << ": ";
}

int main() {
    HousingRegister test;
    printAll(test);
    bool loop = true;
    int option = 1;
    printAll(test);
    while (loop)
    {
        clear();
        printMeny();
        cin >> option;
        switch (option)
        {
            case 1:
                {
                    readFromFile(test);
                    printAll(test);
                }
                break;
            case 2:
            {
                clear();
                printAll(test);
                pause();
            }
                break;
            case 3:
            {
                writeToFile(test);
                pause();
            }
                break;
			case 4:
			{
				editHous(test);
				pause();
			}
			break;
			case 5:
			{
				delHous(test);
				pause();
			}
			case 6:
			{
				addHous(test);
				pause();
			}
			break;
            case 0:
                {
                    loop = false;
                }
                break;
        }
    }
    return 0;
}