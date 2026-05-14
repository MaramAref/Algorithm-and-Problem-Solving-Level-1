#include<iostream>
using namespace std;
int ReadNumber(string Message){
	int Number=0;
	cout<<Message<<"\n";
	cin>>Number;
	return Number;
}
int SumNumbers(){
	int Number=0;
	int Sum=0;
	int Counter=1;
	do{
	Number = ReadNumber("Pleas enter a Number " + to_string(Counter)); 
 
  if (Number == -99) 
   break; 
 
  Sum += Number; 
  Counter++; 
      	
	}while(Number!=-99);
      
        
       
	 return Sum;	
}

int main(){
cout<<"sum: "<<SumNumbers()<<endl;
	return 0;
	
}
