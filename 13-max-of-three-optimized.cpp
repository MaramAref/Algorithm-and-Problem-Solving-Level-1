#include <iostream>
using namespace std;
//This variable for the ability to increase the numbers without changing any thing in the code
const int size=5;
struct StNumber{
float Number[size];	
};
StNumber ReadNumbers(){
StNumber num ;
for(int i=0;i<size;i++){
cout<<"Enter Number "<<i+1<<": ";
cin>>num.Number[i];
}
return num;	
}
float CheckNumbers(StNumber num){
	float Max=num.Number[0];
	for(int i=1;i<size;i++){
	if(num.Number[i]>= Max)
		Max=num.Number[i];
		}
		return Max;
	
}
void PrintlargerNumber(float Max){
	cout<<"The larger number is: "<<Max<<endl;
	
}
int main(){
	PrintlargerNumber(CheckNumbers(ReadNumbers()));
	return 0;
}
