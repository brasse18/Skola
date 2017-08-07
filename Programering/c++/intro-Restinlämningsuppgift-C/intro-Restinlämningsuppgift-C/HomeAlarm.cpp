#include "HomeAlarm.h"



HomeAlarm::HomeAlarm()
{
}

HomeAlarm::HomeAlarm(string modelName, int installPay, int munthPay)
{
	this->installPay = installPay;
	this->modelName = modelName;
	this->munthPay = munthPay;
}


HomeAlarm::~HomeAlarm()
{
}

string HomeAlarm::getModelName() const
{
	return this->modelName;
}

int HomeAlarm::getInstallPay() const
{
	return this->installPay;
}

int HomeAlarm::getMuthPay(int nr) const
{
	return this->munthPay*nr;
}

string HomeAlarm::totalPayToString(int muth)
{
	return "ModelName: " + this->getModelName() + "\t  Totall Pay: " + to_string(this->getInstallPay() + this->getMuthPay(muth));
}

string HomeAlarm::toString()
{
	return "ModelName: " + this->getModelName() + "\t  Install Pay: " + to_string(this->getInstallPay()) + " \t \t Munth Pay: " + to_string(this->getMuthPay(1));
}

bool HomeAlarm::operator>(const HomeAlarm & sec) const
{
	return this->getInstallPay() > sec.getInstallPay();
}

bool HomeAlarm::operator==(const HomeAlarm & sec) const
{
	return this->getModelName() == sec.getModelName();
}
