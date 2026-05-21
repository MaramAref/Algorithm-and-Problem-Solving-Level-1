#include<iostream>
using namespace std;
enum enOperationType {Add = '+' , Subtract = '-' ,Multiply = '*' , Divide = '/' };
float ReadingNumber(string Message){
	float Number=0;
	cout<<Message<<endl;
	cin>>Number;
	return Number;
}
enOperationType ReadType(){
	char operation='+';
	cout<<"Enter operation :  ";
	cin>>operation;
	return (enOperationType)operation;
}
float Calculate(float Number1, float Number2, enOperationType OpType){
	switch (OpType) 
 { 
 case enOperationType::Add: 
  return Number1 + Number2; 
 
 case enOperationType::Subtract: 
  return Number1 - Number2; 
 
 case enOperationType::Multiply: 
  return Number1 * Number2; 
 
 case enOperationType::Divide: 
  return Number1 / Number2; 
 
 default: 
  return Number1 + Number2; 
 }
}
int main(){
	float Number1=ReadingNumber("Enter number 1: ");
	float Number2=ReadingNumber("Enter number 2: ");
      enOperationType OpType = ReadType();
      cout << endl << " Result = " << Calculate(Number1 , Number2 ,OpType)<< endl; 
	return 0;
}
