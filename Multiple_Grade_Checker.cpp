#include <iostream>
using namespace std;

main()
{
	//Declarations
	int numOfCourses = 0;
	double courseScores[10];
	int i;
	
	
	//Quantity of courses
	cout<<"\nHow many courses did you take?\n";
	cin>>numOfCourses;
	
	
	//Scores for courses
	cout<<"\nPlease enter the Scores for the Courses.\n";
	for(i = 0; i < numOfCourses; i++)
	{
		cout<<"\nScore for Course "<<i<<" = ";
		cin>>courseScores[i];
		
		
		//Assigning grades
		if (courseScores[i] <= 100 and courseScores[i] > 89)
		{
			cout<<"\nYour grade for course "<<i<<" is A+\n";				
		}
		else if (courseScores[i] <= 89 and courseScores[i] > 79)
		{
			cout<<"\nYour grade for course "<<i<<" is A\n";	
		}
		else if (courseScores[i] <= 79 and courseScores[i] > 69)
		{
			cout<<"\nYour grade for course "<<i<<" is B\n";	
		}
		else if (courseScores[i] <= 69 and courseScores[i] > 59)
		{
			cout<<"\nYour grade for course "<<i<<" is C\n";	
		}
		else if (courseScores[i] <= 59 and courseScores[i] > 49)
		{
			cout<<"\nYour grade for course "<<i<<" is D\n";	
		}
		else if (courseScores[i] <= 49 and courseScores[i] >= 0)
		{
			cout<<"\nYour grade for course "<<i<<" is F\n";	
		}
		else 
		{
			cout<<"\nIncorrect value.....Please try again\n";
		}
		
	}
	
	for(i = 0; i < numOfCourses; i++)
	{
		cout<<"===========================Results===========================\n";
		cout<<"Course "<<i<<"\t"<<courseScores[i]<<endl;
	}	
	
	
	return 0;
}
