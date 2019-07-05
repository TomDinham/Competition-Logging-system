#pragma once
#include <string>
#include <iostream>
using namespace std;
class Team
{
public:
	Team(string name, int score);
	~Team() {}

	Team *LeftChild;
	Team* RightChild;

	void Display_Team();

	bool LessThan(Team* T1, Team* T2);

	int score;
	string name;
};

