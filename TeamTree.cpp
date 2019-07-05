#include "pch.h"
#include "TeamTree.h"


TeamTree::TeamTree(string Comp)
{
	Root = 0;
	this->CompetitionName = Comp;
}

Team* TeamTree::Find(Team* Score)
{
	Team *current = Root; // find the team based upon a score being given into the function, this will go down the te using the divide and conqure technique
	while (current != Score)
	{
		if (current->LessThan(Score, current))
		{
			current = current->LeftChild;
		}
		else
		{
			current = current->RightChild;
		}
		if (current == 0)
			return 0;
	}
	return current;
}
void TeamTree::DisplayInOrder(Team *LocalRoot)
{
	if (LocalRoot != 0)//display the teams in the tree accending based on their score
	{
		DisplayInOrder(LocalRoot->LeftChild);
		LocalRoot->Display_Team();
		DisplayInOrder(LocalRoot->RightChild);
	}
}
void TeamTree::DisplayComp()
{
	cout << CompetitionName << " Competition" << endl; // display the name of the current competition
}
void TeamTree::AddTeam(string name, int score) // add a new team into the tree by a name and score,
											  //the team will be added into the correct place on the tree based on the score passed in
{
	Team* newNode = new Team(name, score);
	if (Root == 0)
	{ // root is 0, then set the new team to as the root
		Root = newNode;
	}
	else
	{
		Team* current = Root;
		Team* parent;

		while (true)
		{
			parent = current;
			if (current->LessThan(newNode, current))
			{
				current = current->LeftChild;
				if (current == 0)
				{
					parent->LeftChild = newNode;
					return;
				}

			}
			else
			{
				current = current->RightChild;
				if (current == 0)
				{
					parent->RightChild = newNode;
					return;
				}
			}
		}
	}
}