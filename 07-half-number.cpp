#include<iostream>
using namespace std;
float ReadNumber(){
	float Number;
	cout<<"Enter Number: ";
	cin>>Number;
     return	Number;
}
float CalculateHalfNumber(float Number){
	
	return Number/2;;
}
void PrintHalfNumber(float HalfNumber){
	cout<<"The half is : "<<HalfNumber<<endl<<endl;
}
int main(){
	PrintHalfNumber(CalculateHalfNumber(ReadNumber()));
	return 0;
}
