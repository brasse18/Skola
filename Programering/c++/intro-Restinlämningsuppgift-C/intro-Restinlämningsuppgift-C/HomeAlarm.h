#pragma once
#include <iostream>
#include <string>

using namespace std;

class HomeAlarm
{
private:
	string modelName;
	int installPay;
	int munthPay;

public:
	HomeAlarm();
	HomeAlarm(string modelName, int installPay, int munthPay);
	~HomeAlarm();
	string getModelName() const;
	int getInstallPay() const;
	int getMuthPay(int nr) const;
	string totalPayToString(int muth);
	string toString();
	bool HomeAlarm::operator > (const HomeAlarm& sec) const;
	bool HomeAlarm::operator == (const HomeAlarm& sec) const;
};

