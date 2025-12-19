#include<iostream>
#include<iomanip>
using namespace std;

int main(){	
	double loan,peryear,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> peryear;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	cout << fixed << setprecision(2);
	int i=1;
	double prev = loan;
	do{
		cout << setw(13) << left << i; 
		cout << setw(13) << left << prev;
		double interest = (double)prev*peryear/100; 
		cout << setw(13) << left << interest; 
		double total = prev+interest;
		cout << setw(13) << left << total;
		if(total>pay){
			cout << setw(13) << left << pay;
		}else{
			pay = total;
			cout << setw(13) << left << pay;
		}
		double newbalance = total - pay;
		cout << setw(13) << left << newbalance;
		cout << "\n";
		i++;
		prev = newbalance;
	}while(prev > 0);
	return 0;
}
