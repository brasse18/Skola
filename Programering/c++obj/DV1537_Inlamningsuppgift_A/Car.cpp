//
// Created by brass on 2017-02-26.
//
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

Car::Car()
{
    model = "";
    regNr = "";
    runDistens = 0;
    price = 0;
}

string Car::getModel() const {
    return this->model;
}

string Car::getRegNr() const {
    return this->regNr;
}

int Car::getRunDistens() const {
    return this->runDistens;
}

double Car::getPrice() const {
    return this->price;
}

string Car::toString()
{

    string out = "";
    out = "Model: " + model + "\n" + "Reg Number: " + regNr + "\n" + "Run Distens: " + to_string(runDistens) + "\n" + "Price: " + to_string(price);
    return out;
}

void Car::setModel(string model)
{
    this->model = model;
}

void Car::setRegNr(string regNr)
{
    this->regNr = regNr;
}

void Car::setRunDistens(int distents)
{
    this->runDistens = distents;
}

void Car::setPrice(double price)
{
    this->price = price;
}

Car::Car(string model, string regNr, int runDistens, double price)
{
    this->model = model;
    this->regNr = regNr;
    this->runDistens = runDistens;
    this->price = price;
}
