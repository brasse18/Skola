//
// Created by brasse on 2016-11-17.
//

#ifndef INLEMNINGA_HOUSING_H
#define INLEMNINGA_HOUSING_H

#include <string>

using namespace std;

class Housing {
private:
    int id;
    int rent;
    int size;
    int nrOfRoms;
    string adres;
    string type;
public:
    Housing(int id);
    Housing(int id,int rent,int size,int nrOfRoms,string adres,string type);
    int getId() const;
    int getSize() const;
    int getRent() const;
    int getNrOfRoms() const;
    string getAdres() const;
    string getType() const;
    void changeSize(int size);
    void changeRent(int rent);
    void changeNrOfRoms(int nrOfRoms);
    void changeAdres(string adres);
    void changeType(string type);
    Housing& operator=(const Housing& sec);
};


#endif //INLEMNINGA_HOUSING_H
