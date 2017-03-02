#include "SLList.h"
//#include "ArrayList.h"
#include <iostream>
using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	SLList<int> aList;
	//ArrayList<int> aList;
	aList.insertAt(0, 10);
	aList.insertAt(0, 5);
	aList.insertAt(2, 20);
	cout << "Expected output: 5 10 20" << endl;
	for (int i = 0; i < aList.size(); i++)
	{
		cout << aList.elementAt(i) << " ";
	}

	cout << endl << endl;
	SLList<int> bList = aList;
	bList.insertAt(1, 7);
	cout << "Expected output: 5 7 10 20" << endl;
	for (int i = 0; i < bList.size(); i++)
	{
		cout << bList.elementAt(i) << " ";
	}

	SLList<int> cList = aList;

	cList.removeAt(2);
	cList.removeAt(1);
	cout << endl << endl;
	cout << "Expected output: 5 " << endl;
	for (int i = 0; i < cList.size(); i++)
	{
		cout << cList.elementAt(i) << " ";
	}

	aList = cList;
	cList = bList;
	bList = bList;

	cout << endl << endl;
	cout << "Expected output: 5 " << endl;
	for (int i = 0; i < aList.size(); i++)
	{
		cout << aList.elementAt(i) << " ";
	}

	cout << endl << endl;
	cout << "Expected output: 5 7 10 20" << endl;
	for (int i = 0; i < bList.size(); i++)
	{
		cout << bList.elementAt(i) << " ";
	}

	cout << endl << endl;
	cout << "Expected output: 5 7 10 20" << endl;
	for (int i = 0; i < cList.size(); i++)
	{
		cout << cList.elementAt(i) << " ";
	}

	SLList<int> dList;
	cout << endl << endl;
	cout << "Expected output: Exception ......" << endl;
	
	try
	{
		dList.insertAt(1, 60);
	}
	catch (char *e)
	{
		cout << "Exception " <<e<<endl; 
	}

	cout << endl << endl;
	cout << "Expected output: Exception ......" << endl;
	try
	{
		cList.removeAt(12);
	}
	catch (char *e)
	{
		cout << "Exception " << e << endl;
	}

	return 0;
}