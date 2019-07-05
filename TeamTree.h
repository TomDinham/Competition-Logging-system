#pragma once
#include "Team.h"
class TeamTree
{
public:

	TeamTree(string comp);
	~TeamTree() {}

	Team *Find(Team* score);

	void DisplayInOrder(Team *LocalRoot);
	void AddTeam(string name, int score);
	void DisplayComp();

	TeamTree* next;
	Team *Root;
	string CompetitionName;
};
