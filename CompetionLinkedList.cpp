#include "pch.h"
#include "CompetitionLinkedList.h"


CompetitionLinkedList::CompetitionLinkedList()
{
	first = 0;
}

bool CompetitionLinkedList::IsEmpty()
{
	return(first == 0);  // if there is not a first link then return true if there is then it will return false
}
void CompetitionLinkedList::AddNew(TeamTree *newTeam)
{//add a new link to the list and re assign the links of the link being added 
	newTeam->next = first;
	first = newTeam;
}
void CompetitionLinkedList::DisplayCompetition()
{
	TeamTree* current = first;
	while (current != 0) // if there are links in the list, run through the list displaying the competitions names 
	{
		current->DisplayComp();
		current = current->next;
	}
}
TeamTree* CompetitionLinkedList::FindCompetition(string name)
{
	TeamTree *Current = first; // search through the linked list to find the competition by name 
	while (Current->CompetitionName != name)
	{
		if (Current->next == 0)
		{
			return 0;

		}
		else
		{
			Current = Current->next;
		}

	}
	return Current;
}
TeamTree* CompetitionLinkedList::Remove(string name)
{
	TeamTree *current = first;
	TeamTree *previous = first;
	while (current->CompetitionName != name)// search through the linked list to Remove the competition by name 
	{
		if (current->next == 0)
		{
			return 0;
		}
		else
		{
			previous = current; // re assign the links to ensure wanted links are not dropped
			current = current->next;
		}
	}
	if (current == first)
	{
		first = first->next;
	}
	else
	{
		previous = current->next;
	}
	return current;
}
TeamTree* CompetitionLinkedList::RemoveFirst() // removes the first link of the list 
{
	TeamTree* current = first;

	if (current->next == 0)
	{
		return 0;
	}
	else
	{
		first = current->next;
	}

	return current;
}