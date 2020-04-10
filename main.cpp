#include <iostream>
#include <string>

using namespace std;

//Function: dataType nameOfFunction() {}

//Function Declarations

void askUser(int&, string&);
//askUser - fill in score and name
//@param int& - the users score
//@param score& - the users name

void calculateOutcome(int, string);
// calculateOutcome
// @param int - score of user
// @param string - name of user


int main()
{
	
	int score;
	string name;

	askUser(score, name);
	calculateOutcome(score, name);

	return 0;
}

//Function Definitions

void askUser(int& newScore, string& newName)
{
	cout << "Please type in your name: ";
	cin >> newName;

	cout << "Enter your score: ";
	cin >> newScore;
}

void calculateOutcome(int newScore, string newName)
{
	if (newScore > 50)
	{
		cout << "You did not fail!" << endl;
	}
	else
	{
		cout << "You failed, " << newName << endl;
	}
}