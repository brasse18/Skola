#include <iostream>
#include <stdlib.h>

using namespace std;

void pause();
void clear();
string printMenu();
void fill(string arr[], int arrCap);
string printAllRow(string arr[], int arrCap, int nrOfRows);
int getNrOfPassengers(string arr[], int arrCap);
string getPassenger(string arr[], int arrCap, string name);

string getPassenger(string arr[], int arrCap, string name, string fliteClass)
{
    string out = "Emty";
    bool found = false;

    for (int i = 0; i < arrCap && !found; i++)
    {
        if (arr[i] == name)
        {
            out += "Class:" + fliteClass;
            out += "Passenger: " + arr[i];
            out += "Seat: " + i;
        }
    }
    return out;
}

int getNrOfPassengers(string arr[], int arrCap)
{
    int out = 0;
    for (int i = 0;i < arrCap;i++)
    {
        if (arr[i] != "Free")
        {
            out++;
        }
    }
    return out;
}

string printAllRow(string arr[], int arrCap, int nrOfRows)
{
    string out = "";
    int couner = 0;

    for (int i = 0; i < arrCap; i++)
    {
        if (couner == nrOfRows)
        {
            out += "\n";
            couner = 0;
        }
        couner++;
        out += arr[i] + " ";
    }

    return out;
}

void fill(string arr[], int arrCap)
{
    for (int i = 0; i < arrCap; i++)
    {
        arr[i] = "Free";
    }
}

string printMenu()
{
    string out = "";
    out += "1 Print seats \n";
    out += "2 Make a reservation \n";
    out += "3 Show boarding pass for a passenger \n";
    out += "4 Show the number of passengers in each category \n";
    out += "0 Exit \n";
    out += ": \n";

    return out;
}

void clear()
{
    system("clear");
}

void pause()
{
    system("");
}

int main() {
    string B[16];
    fill_n(B, 16, "Free");

    string E[96];
    fill_n(E, 96, "Free");

    string EP[48] = { "Free" };
    fill_n(EP, 48, "Free");

    bool run = true;
    int val = 10;

    while (run) {
        val = 10;
        cout << printMenu();
        cin >> val;
        switch (val) {
            case 0:
            {
                run = false;
            }
                break;
            case 1:
            {
                cout << printAllRow(B,16,4) << endl << endl;
                cout << printAllRow(E,96,6) << endl << endl;
                cout << printAllRow(EP,48,6) << endl << endl;
            }
                break;
            case 2:
            {
                string name;
                string flyClass;
                int nr;
                cout << "Name of passenger:";
                cin >> name;
                cout << "Category (Business, Economy, Economy Plus):";
                cin >> flyClass;
                cout << "Seat nr [0..47]: ";
                cin >> nr;

                if (flyClass == "B")
                {
                    if (B[nr] == "Free")
                    {
                        B[nr] = name;
                        cout << "Done :)";
                    } else
                    {
                        cout << "Error :(";
                    }
                } else if( flyClass == "E")
                {
                    if (E[nr] == "Free")
                    {
                        E[nr] = name;
                        cout << "Done :)";
                    } else
                    {
                        cout << "Error :(";
                    }
                } else if (flyClass == "EP")
                {
                    if (EP[nr] == "Free")
                    {
                        EP[nr] = name;
                        cout << "Done :)";
                    } else
                    {
                        cout << "Error :(";
                    }
                } else
                {
                    cout << "Error :(";
                }
            }
                break;
            case 3:
            {
                string name;
                string pass = "";
                cout << "Name of passenger:";
                cin >> name;
                pass = getPassenger(B,16,name,"Business");
                pass = getPassenger(E,96,name,"Economy");
                pass = getPassenger(EP,47,name,"Economy Plus");
                if (pass != "Emty")
                {
                    cout << "#####################################" << endl;
                    cout << "Boarding pass" << endl;
                    cout << pass << endl;
                    cout << "#####################################" << endl;
                } else {
                    cout << "no pasenger" << endl;
                }
            }
                break;
            case 4:
            {
                cout << "Business class: " << getNrOfPassengers(B,16) << endl;
                cout << "Economy class: " << getNrOfPassengers(B,16) << endl;
                cout << "Economy Plus class: " << getNrOfPassengers(B,16) << endl;

            }
                break;
        }

    }
    return 0;
}