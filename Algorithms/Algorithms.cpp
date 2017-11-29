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
	for (int i = 0; i < n; i++)
	{
		int num = rand() % range;
		theList.push_back(num);
	}
	cout << "original list" << endl;
	for (int i = 0; i < theList.size(); i++)
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
	int i = 0;
	while (i < theList.size() && theList[i] != reqNum)
		i++;
	if (i < theList.size())
		cout << reqNum << " is in position number " << i + 1 << endl;
	else
		cout << reqNum << " has not been found." << endl;
}

void find2()
{
	//find all given numbers in a list
	//get a random list
	vector<int>theList = getList(6, 21);
	//complete the code here
	int reqNum, i, c = 0;
	cout << "Number to find: ";
	cin >> reqNum;
	for (i = 0; i < theList.size(); i++)
		if (reqNum == theList[i])
			cout << reqNum << " found at position " << i + 1 << endl;
		else
			c++;
	if (c == theList.size())
		cout << "Number not found." << endl;
}

void insert()	// write a function to insert a given number into a vector at a given position. There is a built in
{				// vector method to do this but here it should be done manually.

	vector<int>theList = getList(6, 21);
	int numIn, posIn;
	cout << "What number would you like to enter into the list? ";
	cin >> numIn;
	cout << "What position would you like it in the list? ";
	cin >> posIn;
	theList.push_back(theList[posIn - 1]);
	theList[posIn - 1] = numIn;
	for (int i = 0; i < theList.size(); i++)
		cout << theList[i] << " ";
	cout << endl;
}

void insertNum(vector<int> & a)
{
	int numIn, posIn, i = (a.size() - 1);
	cout << "What number would you like to enter into the list? ";
	cin >> numIn;
	while (i != 0 && numIn < a[i - 1])
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = numIn;
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}

void bubbleSort()	// Write a function to sort a vector using bubble sort.
{
	vector<int>theList = getList(6, 21);
	bool swaps = true;
	while (swaps)
	{
		swaps = false;
		for (int i = (theList.size() - 1), temp; i > 0; i--)
			if (theList[i] < theList[i - 1])
			{
				temp = theList[i];
				theList[i] = theList[i - 1];
				theList[i - 1] = temp;
				swaps = true;
			}
	}
	cout << "When ordered, this list becomes: ";
	for (int i = 0; i < theList.size(); i++)
		cout << theList[i] << " ";
	cout << endl;
	insertNum(theList);
}

int _tmain(int argc, _TCHAR* argv[])
{
	string func;
	cout << endl << "function to run (find1, find2, insert, bubble) - stop to quit: ";
	cin >> func;
	while (func != "stop")
	{
		if (func == "find1")
			find1();
		else if (func == "find2")
			find2();
		else if (func == "insert")
			insert();
		else if (func == "bubble")
			bubbleSort();
		cout << endl << "function to run (find1, find2, insert, bubble) - stop to quit: ";
		cin >> func;
	}
}