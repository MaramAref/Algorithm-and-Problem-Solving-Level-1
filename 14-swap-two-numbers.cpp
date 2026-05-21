#include <iostream>
using namespace std;
void ReadNumbers(int &Num1  ,int &Num2){
cout<<"Enter two numbers :\n";
cin>>	Num1>>Num2;

}
void SwapNumbers(int &Num1  ,int &Num2){
	int Temp=Num1;
	Num1=Num2;
	Num2=Temp;
}
void PrintNumbers(int Num1  ,int Num2){
	cout<<"The First Number : "<<Num1<<"\n";
	cout<<"The scond Number : "<<Num2<<"\n";
}

int main(){
	int Num1;
	int Num2;
	ReadNumbers(Num1  ,Num2);
	PrintNumbers(Num1  , Num2);
	SwapNumbers(Num1  ,Num2);
	cout<<"After Swaping: \n";
	PrintNumbers(Num1  , Num2);
	return 0;
}
