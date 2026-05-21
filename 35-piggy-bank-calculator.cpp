#include<iostream>
using namespace std;
struct stPiggyBankContenet{
	float Pennies,Nickels,Dimes,Quarters,Dollars;
};
stPiggyBankContenet ReadPiggyBankContenet(){
	stPiggyBankContenet PiggyBankContenet;
	cout<<"Enter Pennies : " <<endl;
	cin>>PiggyBankContenet.Pennies;
	cout<<"Enter Nickels : " <<endl;
	cin>>PiggyBankContenet.Nickels;
	cout<<"Enter Dimes : " <<endl;
	cin>>PiggyBankContenet.Dimes;
	cout<<"Enter Quarters : " <<endl;
	cin>>PiggyBankContenet.Quarters;
	cout<<"Enter Dollars : " <<endl;
	cin>>PiggyBankContenet.Dollars;
	return PiggyBankContenet;
}
float CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet){
	int TotalPennies=0;
	TotalPennies = PiggyBankContenet.Pennies * 1 +PiggyBankContenet.Nickels * 5 + PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 + PiggyBankContenet.Dollars * 100; 
 
 return TotalPennies;
}
float calculateTotalDollars(float TotalPennies){
	float TotalDollars=TotalPennies/100;
	return TotalDollars;
}
int main(){
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet()); 
 
 cout << endl << "Total Pennies = " << TotalPennies << endl; 
 cout << endl << "Total Dollars = " << (float)TotalPennies / 100 <<endl;
	return 0;
}
