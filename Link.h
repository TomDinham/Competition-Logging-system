#pragma once
#include <iostream>
#include "TeamTree.h"
using namespace std;
class Link
{
public:
	Link(int data);
	~Link() {}

	void Display();
	int GetData();

	int data;
	Link* next;
};