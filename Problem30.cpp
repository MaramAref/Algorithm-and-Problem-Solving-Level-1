#include<iostream>
using namespace std;
int ReadPOsitiveNumber(string Message){
int Number;
do{
cout<<Message<<endl;
cin>>Number;
} while(Number<=0);
return Number;
}
int factorialOfNumber(int Number){
	int factorial=1;
       for(int counter=1;counter<=Number;counter++){
       		factorial*=counter;
	       }
      	
	 return factorial;	
}

int main(){
cout<<factorialOfNumber(ReadPOsitiveNumber("Enter positive Number"))<<"\n";
	return 0;
}