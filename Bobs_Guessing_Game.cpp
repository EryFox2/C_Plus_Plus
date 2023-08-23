#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

main()
{
	// Variable declaration 
	int randomNum = 0, guessedNum = 0, minVal = 1, maxVal = 20, i = 1;
	
	//Using the current time as seed for the random generator
	srand(time(0));
	//Setting the random number
	randomNum = (rand() % (maxVal - minVal + 1)) + minVal;
	//Reading user's input
	cout<<"\nWelcome to the guessing game!! \nMy name is Bob, I picked a number between 1 and 20 and I want you to guess it. \nCan you do that? \nOkay.... \nGuess the number.....\n";
	cin>>guessedNum;
	
	//Compare the two numbers and give feedback
	while (guessedNum != randomNum){
		
		if(guessedNum == randomNum)
		{
			break;
		}
		else if(guessedNum > randomNum)
		{
			cout<<"Try again...\nChoose a lesser number.\n";
			i++;
			cin>>guessedNum;
			continue;
		}
		else if(guessedNum < randomNum)
		{
			cout<<"Try again...\nChoose a greater number.\n";
			i++;
			cin>>guessedNum;
			continue;
		}
		else
		{
			cout<<"\nInvalid input.....\nPlease try again\n";
			cin>>guessedNum;
			continue;
		}
	
	}
	
	if(i <= 1)
	{
		cout<<"Congratulations!!\n You guessed the number on the first try.";
	}
	else
	{
		cout<<"Congratulations!!\nYou guessed the number in "<<i<<" tries.";	
	}

	return 0;
}
