//
// Created by brass on 2017-02-26.
//

#ifndef INLAMNINGSUPPGIFT_A_CAR_H
#define INLAMNINGSUPPGIFT_A_CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string model;
    string regNr;
    int runDistens;
    double price;
public:
    Car();
    Car(string model, string regNr, int runDistens, double price);
    string getModel() const ;
    string getRegNr() const ;
    int getRunDistens() const ;
    double getPrice() const ;
    string toString();
    void setModel(string model);
    void setRegNr(string regNr);
    void setRunDistens(int distents);
    void setPrice(double price);
};


#endif //INLAMNINGSUPPGIFT_A_CAR_H
