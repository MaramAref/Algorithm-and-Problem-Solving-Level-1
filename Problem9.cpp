#include<iostream>
using namespace std;
struct Numbers{
	int Number[3];
};
Numbers ReadNumber(){
	Numbers number;
	for(int i=0;i<3;i++){
		cout<<"Enter Number "<<i+1<<endl;
		cin>>number.Number[i];
	}
return number;	
}
float CalculateSum(Numbers number){
	float sum=0;
	for(int i=0;i<3;i++){
	sum=sum+number.Number[i];
	}
	return sum;
}
void PrintSum(float sum){
	cout<<"The sum of numbers is :"<<sum<<"\n";
}
int main(){
	PrintSum(CalculateSum(ReadNumber()));
}