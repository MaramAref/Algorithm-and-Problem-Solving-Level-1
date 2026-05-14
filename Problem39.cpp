#include<iostream>
using namespace std;
struct PaidInfo{
		float TotalBill;
        	float	CashPaid;
};
PaidInfo ReadTotalBillCashPaid(){
       PaidInfo paid;
	cout<<"Enter Total Bill: ";
	cin>>paid.TotalBill;
	cout<<"Enter Cash Paid: ";
	cin>>paid.CashPaid;
	return paid;
	
}
float CalculateRemainder(PaidInfo paid){
	float Remainder = paid.CashPaid - paid.TotalBill;
	return Remainder;
}
void PrintRemainder(float Remainder){
	cout<<" Remainder : "<< Remainder<<endl;
}
int main(){
	PrintRemainder(CalculateRemainder(ReadTotalBillCashPaid()));
	return 0;
}