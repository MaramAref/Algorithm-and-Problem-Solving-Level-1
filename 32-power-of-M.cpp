#include<iostream>
using namespace std;
int  ReadNumber(){
	int Number;
	cout<<"Enter Number basis \n";
	cin>>Number;
	return Number;
}
int ReadPower(){
	int Power;
	cout<<"Enter Power \n";
	cin>>Power;
	return Power;
}
int  PowOfM(int Number , int M){
	if (M == 0) 
  return 1; 
}
 int P = 1;  
 for (int i = 1; i <= M; i++) 
 { 
  P *= Number; 
 } 
 return P;
	}
	

int main(){
	cout<<"Result: "<<PowOfM(ReadNumber(), ReadPower())<<endl;
	
	return 0;
}
