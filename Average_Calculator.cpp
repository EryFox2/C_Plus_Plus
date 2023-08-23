#include <iostream>
using namespace std;

//Average Function
double findAvg(double x, double y)
{
	double avg;
	avg = (x + y)/2;
	return avg;
}

//Largest Value Function
double findMax(double a, double b)
{
	double max;
	if(a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	return max;
}

int main()
{
	float num1, num2, myAvg, myMax;
	char option;
	cout<<"\nPlease enter two numbers:\n";
	do
	{
		cout<<"Number 1:\n";
		cin>>num1;
		cout<<"Number 2:\n";
		cin>>num2;
		
	}while(num1 !=0);
	
	cout<<"Do you want to find the \n a.the average number or b.largest number?\n";
	cin>>option;
	switch(option)
	{
	case 'a':
		myAvg = findAvg(num1, num2);//Function call by value.
		cout<<"The average of the numbers is "<<myAvg<<endl;
		break;
	case 'b':
		myMax = findMax(num1, num2);
		cout<<"The largest numbers is "<<myMax<<endl;
		break;	
	}
	system("pause");
	return 0;
}
