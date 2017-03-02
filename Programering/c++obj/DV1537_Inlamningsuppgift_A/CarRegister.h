//
// Created by brass on 2017-02-26.
//

#ifndef INLAMNINGSUPPGIFT_A_CARREGISTER_H
#define INLAMNINGSUPPGIFT_A_CARREGISTER_H

#include <iostream>
#include <fstream>
#include "Car.h"

using namespace std;

class CarRegister
{
private:
    Car** cars;
    int cap;
    int size;
public:
    CarRegister();
    void addCar(Car car);
    void delCar(string reg);
    string printAll();
    string printAllMaxMinPrice(int max, int min);
    string printAllMaxMinDistant(int max, int min);
    void editPrice(int max, int min, double pros);
    void loadFromFile(string file);
    void saveToFil(string file);
};


#endif //INLAMNINGSUPPGIFT_A_CARREGISTER_H
