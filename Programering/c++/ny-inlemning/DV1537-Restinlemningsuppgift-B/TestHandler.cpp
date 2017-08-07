//
// Created by brasse on 2/28/17.
//

#include "InstrumentHandler.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    InstrumentHandler instrumentHandler;
    //expanderings test
    instrumentHandler.addWindInstrument("fr","trunbån");
    instrumentHandler.addWindInstrument("pipan13", "trompet");
    instrumentHandler.addWindInstrument("abc", "randomString");
    instrumentHandler.addWindInstrument("yeey", "pofran");
    instrumentHandler.addStringInstrument("ell", "fiol", 6);
    instrumentHandler.addStringInstrument("ahdf", "gitar", 12);
    instrumentHandler.addStringInstrument(":)", "tegelsten", 2);
    instrumentHandler.addStringInstrument("acdc", "ellgitar", 4);
    //Copy cons test
    InstrumentHandler instrumentHandlerTow = instrumentHandler;
    cout << endl;
    cout << "-------------- Instrument 1 --------------------" << endl;
    cout << endl;
    int nrOfInstruments = instrumentHandlerTow.getNrOfInstruments();
    string* arr = new string[nrOfInstruments];
    instrumentHandlerTow.fillArrWithInstruments(arr, nrOfInstruments);
    for (int i = 0; i < nrOfInstruments; i++)
    {
        cout << arr[i] << endl;
    }
    delete[]arr;
    // tilldelningsoperatorn
    cout << endl;
    cout << "Tildelning" << endl;
    cout << endl;
    instrumentHandlerTow.addStringInstrument("dsdsdsd", "ffff", 12);
    instrumentHandlerTow.addStringInstrument("snart klar", "brasa", 4);
    instrumentHandlerTow.addStringInstrument("14", ":(", 1);
    instrumentHandler = instrumentHandlerTow;
    cout << endl;
    cout << "-------------- Instrument 2 --------------------" << endl;
    cout << endl;
    nrOfInstruments = instrumentHandler.getNrOfInstruments();
    arr = new string[nrOfInstruments];
    instrumentHandler.fillArrWithInstruments(arr, nrOfInstruments);
    for (int i = 0; i < nrOfInstruments; i++)
    {
        cout << arr[i] << endl;
    }
    delete[]arr;
    //Testar bortagning
    cout << endl;
    cout << "Tar bort från instrument 1" << endl;
    cout << endl;
    instrumentHandler.delInstrument("fr");
    instrumentHandler.delInstrument(":)");
    cout << endl;
    cout << "-------------- Instrument 1 --------------------" << endl;
    cout << endl;
    nrOfInstruments = instrumentHandler.getNrOfInstruments();
    arr = new string[nrOfInstruments];
    instrumentHandler.fillArrWithInstruments(arr, nrOfInstruments);
    for (int i = 0; i < nrOfInstruments; i++)
    {
        cout << arr[i] << endl;
    }
    delete[]arr;
    return 0;
}