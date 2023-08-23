#include <iostream>
using namespace std;

main()
{
	const int numOfDays = 5;
	double tempMonth[numOfDays + 1];
	double  avg, sum = 0;
	int i;
	cout<<"\nPlease enter temperetures for the month.\n";
	for(i = 1; i <= numOfDays; i++)
	{
		cout<<"\nTemperature for day"<<i<<" = ";
		cin>>tempMonth[i];
		sum += tempMonth[i];
	}
	avg = sum/numOfDays;
	
	cout<<"\n==================================================\n";
	cout<<"\nThe average of the temperatures is "<<avg<<endl;
	
	for(i = 1; i <= numOfDays; i++)
	{
		if (tempMonth[i] > avg)	
		cout<<"\nDay No. "<<i<<"\tTemp " <<tempMonth[i];
	}
	
	return 0;		
}
