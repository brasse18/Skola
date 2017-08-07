//
// Created by brasse on 3/2/17.
//

#include <iostream>
#include "InstrumentHandler.h"

void addInstrument(InstrumentHandler& instrumentHandler);
void editNrOfStrings(InstrumentHandler& instrumentHandler);
void delInstrument(InstrumentHandler& instrumentHandler);
void printAllInstruments(InstrumentHandler& instrumentHandler);
void printAllStringInstruments(InstrumentHandler& instrumentHandler);
void printAllWindInstruments(InstrumentHandler& instrumentHandler);
void printAllStringInstrumentsSpec(InstrumentHandler& instrumentHandler);
int menu();

int menu()
{
    int val = 0;
    cout << "1 Legg till instrument" << endl;
    cout << "2 print alla instrument" << endl;
    cout << "3 print alla strenginstrument plus extra info" << endl;
    cout << "4 print alla windinstrument plus extra info" << endl;
    cout << "5 print alla strenginstrument med strengar melan max och min" << endl;
    cout << "6 edit antal strengar på strenginstruments namn" << endl;
    cout << "7 Ta bort ett instrument" << endl;
    cout << "0 Exit" << endl;
    cin >> val;
    return val;
}

void printAllInstruments(InstrumentHandler& instrumentHandler)
{
    int nrOfInstruments = instrumentHandler.getNrOfInstruments();
    string* arr = new string[nrOfInstruments];
    instrumentHandler.fillArrWithInstruments(arr, nrOfInstruments);
    for (int i = 0; i < nrOfInstruments; i++)
    {
        cout << arr[i] << endl;
    }
    delete[]arr;
}

void printAllStringInstruments(InstrumentHandler & instrumentHandler)
{
    int nrOfInstruments = instrumentHandler.getNrOfStringInstruments();
    string* arr = new string[nrOfInstruments];
    instrumentHandler.fillArrWithStringInstruments(arr, nrOfInstruments);
    for (int i = 0; i < nrOfInstruments; i++)
    {
        cout << arr[i] << endl;
    }
    delete[]arr;
}

void printAllWindInstruments(InstrumentHandler & instrumentHandler)
{
    int nrOfInstruments = instrumentHandler.getNrOfWindInstruments();
    string* arr = new string[nrOfInstruments];
    instrumentHandler.fillArrWithWindInstruments(arr, nrOfInstruments);
    for (int i = 0; i < nrOfInstruments; i++)
    {
        cout << arr[i] << endl;
    }
    delete[]arr;
}

void printAllStringInstrumentsSpec(InstrumentHandler & instrumentHandler)
{
    int min = 0, max = 0,nrOfInstruments = 0;
    int arrCap = instrumentHandler.getNrOfInstruments();
    string* arr = new string[arrCap];
    cout << "Max" << endl;
    cout << ": ";
    cin >> min;
    cout << "Min" << endl;
    cout << ": ";
    cin >> max;
    nrOfInstruments = instrumentHandler.fillArrWithSpecStringInstruments(arr, arrCap, max, min);
    for (int i = 0; i < nrOfInstruments; i++)
    {
        cout << arr[i] << endl;
    }
    delete[]arr;
}

void changeNrOfStrings(InstrumentHandler & instrumentHandler)
{
    string name = "";
    int nrOfStrings = 0;
    cout << "namn ge det instrumentet du vill endra antal strängar på" << endl;
    cout << ": ";
    cin >> name;
    cout << "Nyt antal strengar" << endl;
    cout << ": ";
    cin >> nrOfStrings;
    cin.ignore();
    instrumentHandler.changeNrOfStrings(name, nrOfStrings);
}

void removeInstrument(InstrumentHandler & instrumentHandler)
{
    string name = "";
    bool removed = false;
    cout << "namn på det instrument du vill ta bort" << endl;
    cout << ": ";
    cin >> name;
    removed = instrumentHandler.delInstrument(name);
    if (removed == false)
    {
        cout << "Instrumentet finns inte" << endl;
    }
    else
    {
        cout << "Instrumentet är bortaget" << endl;
    }
}

void addInstrument(InstrumentHandler & instrumentHandler)
{
    int val = 0;
    string name = "";
    string instrumentSpec = "";
    int nrOfStrings = 0;
    cout << "läg till en av följande" << endl;
    cout << "1 StringInstrument" << endl;
    cout << "2 WindInstrument" << endl;
    cout << ": " << endl;
    cin >> val;
    switch (val)
    {
        case 1: {
            cout << "Namn" << endl;
            cout << ": ";
            cin >> name;
            cout << "Type of instroment" << endl;
            cout << ": ";
            cin >> instrumentSpec;
            cout << "antal strengar?" << endl;
            cout << ": ";
            cin >> nrOfStrings;
            instrumentHandler.addStringInstrument(name, instrumentSpec, nrOfStrings);
        }
            break;
        case 2: {
            cout << "Namn" << endl;
            cout << ": ";
            cin >> name;
            cout << "Type of instroment" << endl;
            cout << ": ";
            cin >> instrumentSpec;
            instrumentHandler.addWindInstrument(name, instrumentSpec);
        }
            break;
    }

}

int main() {
    InstrumentHandler instrumentHandler;
    bool loop = true;
while (loop) {
    switch (menu()) {
        case 0:
            loop = false;
            cout << "exit" << endl;
            break;
        case 1:
            addInstrument(instrumentHandler);
            break;
        case 2:
            printAllInstruments(instrumentHandler);
            break;
        case 3:
            printAllStringInstruments(instrumentHandler);
            break;
        case 4:
            printAllWindInstruments(instrumentHandler);
            break;
        case 5:
            printAllStringInstrumentsSpec(instrumentHandler);
            break;
        case 6:
            editNrOfStrings(instrumentHandler);
            break;
        case 7:
            delInstrument(instrumentHandler);
            break;
    }
}
    return 0;
}