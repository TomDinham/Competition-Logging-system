#include "pch.h"
#include "Team.h"


Team::Team(string name, int score)
{
	this->score = score;
	this->name = name;
	LeftChild = 0;
	RightChild = 0;
}
void Team::Display_Team()
{
	cout << "Team: " << this->name << " : " << "Score: " << this->score << endl; // displays the name and score of the team
}

bool Team::LessThan(Team* T1, Team* T2)
{
	if (T1->score < T2->score)//compares the two teams scores and returns true or false based appon the result
	{
		return true;
	}
	else return false;
}
