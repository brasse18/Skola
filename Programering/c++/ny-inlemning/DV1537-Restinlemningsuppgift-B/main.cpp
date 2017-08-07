#include <iostream>
#include "InstrumentHandler.h"

using namespace std;

void printAll(InstrumentHandler handler)
{
    int cap = 0;
    string* arr = nullptr;
    handler.printAllInstrument(arr, cap);
    for (int i = 0;i<cap;i++)
    {
        cout << arr[i] << endl;
    }
}

void addInstrument(InstrumentHandler &handler)
{
    int strings;
    string name;
    handler.addInstrument(name, strings);
}

int main() {
    InstrumentHandler instrumentHandler;

    addInstrument(instrumentHandler);
    printAll(instrumentHandler);


    std::cout << "Hello, World!" << std::endl;
    return 0;
}