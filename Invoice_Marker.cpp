#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	//Declarations
	int numOfItems;
	double itemQuantity[numOfItems + 1];
	double totalQuantity, itemPrice = 15, totalPrice = 0, discount = 0, discountedPrice, taxPercent,  vat, finalPrice;
	
	//Header
	cout<<"**********Good Sam's Convenience Store**********";
	cout<<"\nWelcome";
	
	
	//Quantity of items
	cout<<"\nHow many items are you buying?\n";
	cin>>numOfItems;
	
	cout<<"\nPlease enter the quantity for the items.\n";
	for(int i = 1; i <= numOfItems; i++)
	{
		cout<<"\nQuantity for item "<<i<<" = ";
		cin>>itemQuantity[i];
		totalQuantity += itemQuantity[i];
		totalPrice += itemQuantity[i] * itemPrice;
	}
	
	
	//Discount
	if (totalPrice >= 500 and totalPrice < 1000)
	{
		discount = 0.05 * totalPrice;
	} 
	else if (totalPrice >= 1000 and totalPrice < 1500)
	{
		discount = 0.1 * totalPrice;
	}
	else if (totalPrice >= 1500)
	{
		discount = 0.15 * totalPrice;
	}
	else
	{
		discount =  0;
	}
	
	discountedPrice =  totalPrice - discount;
	
	//Tax
	cout<<"\nPlease enter the tax percent for the items.";
	cin>>taxPercent;
	vat = (taxPercent/100) * discountedPrice;
	finalPrice = discountedPrice + vat;
	
	
	//Invoice
	cout<<"\n                         INVOICE                         \n";
	cout<<"============================================================\n";
	cout<<setprecision(2)<<setiosflags(ios::fixed);
	cout<<"The quantity of your items is "<<setw(5)<<totalQuantity<<endl;
	cout<<"The unit price of each item is $"<<setw(5)<<itemPrice<<endl;
	cout<<"The price with tax excluded is $"<<setw(5)<<discountedPrice<<endl;
	cout<<"The total amount payable is $"<<setw(5)<<finalPrice<<endl;
	cout<<"The vat amount is $"<<setw(5)<<vat<<endl;
	cout<<"The discount amount is $"<<setw(5)<<discount<<endl;
	cout<<"============================================================\n";
	
	return 0;
}
