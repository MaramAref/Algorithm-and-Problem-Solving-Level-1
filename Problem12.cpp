#include <iostream>
using namespace std;
void ReadNumbers(int &Num1  ,int &Num2){
cout<<"Enter two numbers :\n";
cin>>	Num1>>Num2;

}
int CheckMaxNumber(int Num1,int Num2){
	if(Num1>Num2)
	return Num1;
	else
	return Num2;
}
void PrintLargerNumber(int Max){
	cout<<"The larger number is: "<<Max<<endl;
}
int main(){
	int Num1,Num2;
	ReadNumbers(Num1,Num2);
	PrintLargerNumber(CheckMaxNumber(Num1,Num2));
}