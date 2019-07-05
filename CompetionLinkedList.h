#pragma once
#include "Link.h"
#include "TeamTree.h"
class CompetitionLinkedList
{
public:
	CompetitionLinkedList();
	~CompetitionLinkedList() {}

	TeamTree* Remove(string name);
	TeamTree* RemoveFirst();
	TeamTree* FindCompetition(string name);

	void DisplayCompetition();
	void AddNew(TeamTree* newTree);

	bool IsEmpty();

	TeamTree* first;
};