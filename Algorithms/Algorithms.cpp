#include "stdafx.h"
#include <iostream>
#include<string>
#include<vector>
#include<ctime>
using namespace std;
vector<int> getList(int n, int range)
{
	// creates a list of n random integers in the
	// range of 0 to range-1
	// prints the list and returns the list
	srand(time(0));
	vector<int> theList;
	for (int i = 0; i<n; i++)
	{
		int num = rand() % range;
		theList.push_back(num);
	}
	cout << "original list" << endl;
	for (int i = 0; i<theList.size(); i++)
		cout << theList[i] << " ";
	cout << endl << endl;
	return theList;
}
void find1() {
	//find a number in a list
	//get a random list
	vector<int>theList = getList(6, 21);
	//ask for the required number
	int reqNum;
	cout << "Number to find ";
	cin >> reqNum;
	//complete the code here
}
void find2()
{
	//find all given numbers in a list
	//get a random list
		vector<int>theList = getList(6, 21);
	//complete the code here
}
int _tmain(int argc, _TCHAR* argv[])
{
	string func;
	cout << endl << "function to run ";
	cin >> func;
	while (func != "stop")
	{
		if (func == "find1")
			find1();
		else if (func == "find2")
			find2();
		cout << endl << "function to run ";
		cin >> func;
	}
}