//
// Created by brass on 2017-02-26.
//

#include <cstdlib>
#include "CarRegister.h"

string CarRegister::printAll()
{
    string out = "";
    for (int i = 0;i<size;i++)
    {
        out += "\n" + cars[i]->toString() + "\n" + "\n";
    }
    return out;
}

CarRegister::CarRegister()
{
    cars = new Car*[1];
    size = 0;
    cap = 1;
}

void CarRegister::addCar(Car newCar)
{

    if (cap == size)
    {
        Car** tempCars = new Car*[cap*2];
        for (int i = 0;i<size;i++)
        {
            tempCars[i] = cars[i];
        }
        delete cars;
        cars = tempCars;
        cap = cap*2;
    }
    cars[size] = new Car(newCar.getModel(),newCar.getRegNr(),newCar.getRunDistens(),newCar.getPrice());
    size++;
}

void CarRegister::delCar(string regNr)
{
    for (int i = 0;i<size;i++)
    {
        if (cars[i]->getRegNr() == regNr)
        {
            delete cars[i];
            cars[i] = cars[size];
            size--;
        }
    }
}

void CarRegister::loadFromFile(string file)
{
    ifstream inFile;

    string model;
    string regNr;
    int runDistens;
    int price;

    inFile.open("/home/brasse/Skola/Softwate-Enginer/c++obj/DV1537_Inlamningsuppgift_A/bilar.txt");
    //inFile.open(file);
    if (inFile.is_open())
    {
        int tempSize = 0;
        inFile >> tempSize;
        inFile.ignore();
        for (int i = 0;i<tempSize;i++)
        {
            //inFile.ignore();
            getline(inFile, model);
            getline(inFile, regNr);

            inFile >> price;
            inFile >> runDistens;
            inFile.ignore();
            addCar(Car(model,regNr,runDistens,price));
        }
    } else cout << "Unable to open file";
}

void CarRegister::saveToFil(string file)
{
    ofstream outFile;

    //outFile.open(file);
    outFile.open("/home/brasse/Skola/Softwate-Enginer/c++obj/DV1537_Inlamningsuppgift_A/bilar.txt");
    if (outFile.is_open())
    {
        outFile << size << endl;
        for (int i = 0;i<size;i++)
        {
            outFile << cars[i]->getModel() << endl;
            outFile << cars[i]->getRegNr() << endl;
            outFile << cars[i]->getPrice() << endl;
            outFile << cars[i]->getRunDistens() << endl;
        }
        outFile.close();
    }
    else cout << "Unable to open file";
}

string CarRegister::printAllMaxMinDistant(int max, int min) {
    string out = "";
    for (int i = 0;i<size;i++)
    {
        if (cars[i]->getRunDistens() < max && cars[i]->getRunDistens() > min)
        {
            out += "\n" + cars[i]->toString() + "\n" + "\n";
        }
    }
    return out;
}

string CarRegister::printAllMaxMinPrice(int max, int min) {
    string out = "";
    for (int i = 0;i<size;i++)
    {
        if (cars[i]->getPrice() < max && cars[i]->getPrice() > min)
        {
            out += "\n" + cars[i]->toString() + "\n" + "\n";
        }
    }
    return out;
}

void CarRegister::editPrice(int max, int min, double pros) {
    double temp = 0;
    if (pros != 0)
    {
        for (int i = 0;i<size;i++)
        {
            if (cars[i]->getPrice() < max && cars[i]->getPrice() > min)
            {
                temp = cars[i]->getPrice() - cars[i]->getPrice() * pros;
                cars[i]->setPrice(temp);
            }
        }
    }
}