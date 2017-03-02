#include <iostream>
#include <cstdlib>
#include "CarRegister.h"
#include <fstream>
#include <stdlib.h>

using namespace std;

string saveToFile()
{
    string out = "";
    cout << "Save to file (skriv exakta sökväg)" << endl;
    cout << "File: ";
    cin >> out;
    return out;
}

int printMenue()
{
    int out;
    cout << "  Meny" << endl;
    cout << "1 Add Car" << endl;
    cout << "2 Remove Car by reg number" << endl;
    cout << "3 save to file" << endl;
    cout << "4 Print all" << endl;
    cout << "5 Sok on price max min" << endl;
    cout << "6 sök on distans max min" << endl;
    cout << "7 edit price on price max min" << endl;
    cout << "0 Exit" << endl;
    cout << ": ";
    cin >> out;
    return out;
}

Car addCar()
{
    Car tempCar;
    cout << "    Add New Car" << endl;
    cout << "-------------------" << endl;
    cout << endl;

    string model;
    string regNr;
    int runDistens;
    int price;

    cout << "Model: ";
    cin >> model;
    cout << "Reg Numer: ";
    cin >> regNr;
    cout << "Run Distans: ";
    cin >> runDistens;
    cout << "Price: ";
    cin >> price;

    tempCar.setModel(model);
    tempCar.setRegNr(regNr);
    tempCar.setRunDistens(runDistens);
    tempCar.setPrice(price);
    return tempCar;
}

string delRegCar()
{
    string out;
    cout << "Delet car med reg number: " << endl;
    cin >> out;
    return out;
}

int printMaxMiniCar(int nr)
{
    int out = 0;
    if (nr == 1)
    {
        cout << "Min price: " << endl;
        cin >> out;
    } else if (nr == 2)
    {
        cout << "Max price: " << endl;
        cin >> out;
    } else if (nr == 3)
    {
        cout << "Max price: " << endl;
        cin >> out;
    } else if (nr == 4)
    {
        cout << "Min price: " << endl;
        cin >> out;
    }
    return out;
}

void pause()
{
    system("pause");
}

double getPros()
{
    double out = 0;
    cout << " edit price med -%     Ex.  0-100" << endl;
    cout << ": " << endl;
    cin >> out;
    out = out/100;
    return out;
}

string lodeFromFile()
{
    string in = "";
    cout << "Load from file  (skriv exakta sökväg)" << endl;
    cout << "File:";
    cin >> in;
    return in;
}

int main() {

    enum mod{RUN,EXIT};
    mod loop = RUN;
    CarRegister carRegister;

    carRegister.loadFromFile(lodeFromFile());
    while (loop == RUN)
    {
        switch (printMenue())
        {
            case 0:
            {
                loop = EXIT;
            }
                break;
            case 1:
            {
                carRegister.addCar(addCar());
            }
                break;
            case 2:
            {
                carRegister.delCar(delRegCar());
            }
                break;
            case 3:
            {
                carRegister.saveToFil(saveToFile());
            }
                break;
            case 4:
            {
                cout << carRegister.printAll();
            }
                break;
            case 5:
            {
                carRegister.printAllMaxMinDistant(printMaxMiniCar(1),printMaxMiniCar(2));
            }
                break;
            case 6:
            {
                carRegister.printAllMaxMinPrice(printMaxMiniCar(3),printMaxMiniCar(4));
            }
                break;
            case 7:
            {
                carRegister.editPrice(printMaxMiniCar(3), printMaxMiniCar(4), getPros());
            }
                break;
            default:
                break;

        }
    }

    return 0;
}