#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	float total,interest,money,interestpermonth,balance;
	int i;
	cout << "Enter initial loan: ";
	cin >> total;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> money;


	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(total > money){
		
		
		cout << fixed << setprecision(2); 
	cout << setw(13) << left << i+1; 
	cout << setw(13) << left << total;
	interestpermonth = total*interest/100;
	cout << setw(13) << left << interestpermonth;
	balance = total+interestpermonth;
	cout << setw(13) << left << balance;
	cout << setw(13) << left << money;
	total = balance-money;
	cout << setw(13) << left << total;
	cout << "\n";
	i++;

	}
	if (money > total){
		cout << fixed << setprecision(2); 
	cout << setw(13) << left << i+1; 
	cout << setw(13) << left << total;
	interestpermonth = total*interest/100;
	cout << setw(13) << left << interestpermonth;
	balance = total+interestpermonth;
	cout << setw(13) << left << balance;
	cout << setw(13) << left << balance;
	balance = balance-balance;
	cout << setw(13) << left << balance;
	cout << "\n";

	}
	
	return 0;
}
