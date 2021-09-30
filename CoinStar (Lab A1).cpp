#include <iostream>
using namespace std;

//Program Main Body

int main()
{

//Input Variables
	
	int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarters = 0;
	int halfdollars = 0;
	float total = 0.0;

//Prompted Inputs
	
	cout << "How many pennies do you have? " << endl;
	cin >> pennies;
	
	cout << "How many nickels do you have? " << endl;
	cin >> nickels;
	
	cout << "How many dimes do you have? " << endl;
	cin >> dimes;
	
	cout << "How many quarters do you have? " << endl;
	cin >> quarters;
	
	cout << "How many half dollars do you have? " << endl;
	cin >> halfdollars;
	
//Total Formula
	
	total = (pennies * .01) + (nickels * .05) + (dimes * .1) + (quarters * .25) + (halfdollars * .5);
	
	cout << endl;
	
//Amount Text
	
	cout << "You have " << pennies << " pennies." << endl;
	cout << endl;
	
 	cout << "You have " << nickels << " nickels." << endl;
	cout << endl;
	
	cout << "You have " << dimes << " dimes." << endl;
	cout << endl;
	
	cout << "You have " << quarters << " quarters." << endl;
	cout << endl;
	
	cout << "You have " << halfdollars << " half dollars." << endl;
	cout << endl;
	
// Total Result

	cout << "The value of your coins is: $" << total << " cents." << endl;
}