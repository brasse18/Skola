#include <iostream>
#include "HomeAlarm.h"

using namespace std;

void pause();
bool addAlarm(HomeAlarm arr[], int &arrCap, int &arrSize);
void printAll(HomeAlarm arr[], int arrSize);
void printAllNrMouth(HomeAlarm arr[], int arrSize);
void printMinPayNrMouth(HomeAlarm arr[], int arrSize);
bool delAlarm(HomeAlarm arr[], int &arrSize);
void sortAlarm(HomeAlarm arr[], int arrSize);

int main()
{
	int arrSize = 0;
	int arrCap = 10;
	HomeAlarm alarmList[10];
	
	alarmList[0] = HomeAlarm("gggg", 123, 456);
	alarmList[1] = HomeAlarm("ffff", 213, 264);
	alarmList[2] = HomeAlarm("bb", 333, 1231231);
	alarmList[3] = HomeAlarm("12ff", 2, 4);
	alarmList[4] = HomeAlarm("efef", 90, 666);
	arrSize = 5;
	
	printAll(alarmList, arrSize);
	//addAlarm(alarmList, arrCap, arrSize);
	//printAll(alarmList, arrSize);
	printAllNrMouth(alarmList, arrSize);
	printMinPayNrMouth(alarmList, arrSize);

	pause();
	return 0;
}

void pause()
{
	system("pause");
}

bool addAlarm(HomeAlarm arr[], int & arrCap, int & arrSize)
{
	bool out = false;
	HomeAlarm tempAlarm;
	string modelName = "";
	int installPay = 0;
	int munthPay = 0;
	
	cout << " ---- Add Alarm ----" << endl;
	cout << "Model Name: " << endl;
	cin >> modelName;
	cout << "Install Pay: " << endl;
	cin >> installPay;
	cout << "Munth Pay: " << endl;
	cin >> munthPay;

	tempAlarm = HomeAlarm(modelName, installPay, munthPay);

	arr[arrSize] = tempAlarm;
	arrSize++;
	return out;
}

void printAll(HomeAlarm arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i].toString() << endl;
	}
}

void printAllNrMouth(HomeAlarm arr[], int arrSize)
{
	int tempNr = 0;
	cout << endl << "Nr of Muth: ";
	cin >> tempNr;
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i].totalPayToString(tempNr) << endl;
	}
}

void printMinPayNrMouth(HomeAlarm arr[], int arrSize)
{
	int tempNr = 0;
	int tempSum = 0;
	int tempMuthr = 1;
	cout << endl << "Nr of Muth: ";
	cin >> tempMuthr;
	for (int i = 0; i < arrSize; i++)
	{
		if (tempSum > arr[i].getMuthPay(tempMuthr) + arr[i].getInstallPay() || tempSum == 0)
		{
			tempNr = i;
			tempSum = arr[i].getMuthPay(tempMuthr) + arr[i].getInstallPay();
		}
	}
	cout << endl << arr[tempNr].toString() << endl;
}

bool delAlarm(HomeAlarm arr[], int & arrSize)
{
	bool out = false;
	for (int i = 0; i < arrSize; i++)
	{
		if (false)
		{
			arr[i] = arr[arrSize];
			arrSize--;
			out = true;
		}
	}
	return out;
}

void sortAlarm(HomeAlarm arr[], int arrSize)
{
	HomeAlarm temp;
	int bigTemp = 0;

	for (int i = 0;i < arrSize;i++)
	{
		bigTemp = i;
		for (int e = i;e < arrSize;e++)
		{
			if (arr[e] > arr[bigTemp])
			{
				bigTemp = e;
			}
		}
		temp = arr[i];
		arr[i] = arr[bigTemp];
		arr[bigTemp] = temp;
	}

}
