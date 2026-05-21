#include<iostream>
using namespace std;

float ReadMarkInRange(int From,int To){
	float Grade;
	do{	
	cout<<"Pleas enter a Grade between 0 and 100 :";
	cin>>Grade;
	} while(Grade<From || Grade>To);
	return Grade;	
}
char CheckMark(float Grade){
	if( Grade>=90)
	return'A';
	else if(Grade>=80)
	return'B';
	else if(Grade>=70)
	return'C';
	else if(Grade>=60)
	return'D';
	else if(Grade<=59)
	return'E';
	else
	return'F';
	
	
}
int main(){
	 
	 cout<<"Result: "<<CheckMark(ReadMarkInRange(0,100))<<endl;
	return 0;
}
