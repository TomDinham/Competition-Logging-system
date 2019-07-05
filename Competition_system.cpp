// 
#include "pch.h"
#include <iostream>
#include "CompetitionLinkedList.h"
#include "TeamTree.h"

int main()
{
	//create link list
	CompetitionLinkedList* Competitions = new CompetitionLinkedList();
	//Create trees and add teams
	TeamTree* Tree1 = new TeamTree("MLG London CSGO");
	TeamTree* Tree2 = new TeamTree("LCS Summer Split");
	TeamTree* Tree3 = new TeamTree("MLG  Vegas Call of duty");
	TeamTree* Tree4 = new TeamTree("Overwatch Champions NewYork");

	Tree1->AddTeam("100 T", 30);
	Tree1->AddTeam("Cloud 9", 45);
	Tree1->AddTeam("LG", -9);
	Tree1->AddTeam("Optic", -1);

	Tree2->AddTeam("100 T", 1);
	Tree2->AddTeam("Liquid", -11);
	Tree2->AddTeam("Optic", 25);
	Tree2->AddTeam("LG", 4);

	Tree3->AddTeam("100 T", 50);
	Tree3->AddTeam("Optic", 35);
	Tree3->AddTeam("Enigma 6", -30);
	Tree3->AddTeam("Evil Geniuses", 10);
	Tree3->AddTeam("Splice", -10);
	Tree3->AddTeam("Team Envy", 0);

	Tree4->AddTeam("New York", 10);
	Tree4->AddTeam("LA", 1);
	Tree4->AddTeam("Virgina", 22);
	Tree4->AddTeam("London", 13);
	Tree4->AddTeam("France", 12);

	//Add the trees to the link list 
	Competitions->AddNew(Tree1);
	Competitions->AddNew(Tree2);
	Competitions->AddNew(Tree3);
	Competitions->AddNew(Tree4);

	//display the scores and teams for the competition
	cout << "Competitions!" << endl;
	cout << "________________________________________________" << endl;
	Competitions->DisplayCompetition();
	cout << "________________________________________________" << endl;
	cout << "Competition: " << endl;
	Tree1->DisplayComp();
	Tree1->DisplayInOrder(Tree1->Root);
	cout << "________________________________________________" << endl;
	cout << "Competition: " << endl;
	Tree2->DisplayComp();
	Tree2->DisplayInOrder(Tree2->Root);
	cout << "________________________________________________" << endl;
	cout << "Competition: " << endl;
	Tree3->DisplayComp();
	Tree3->DisplayInOrder(Tree3->Root);
	cout << "________________________________________________" << endl;
	cout << "Competition: " << endl;
	Tree4->DisplayComp();
	Tree4->DisplayInOrder(Tree4->Root);
	cout << "________________________________________________" << endl;



}


