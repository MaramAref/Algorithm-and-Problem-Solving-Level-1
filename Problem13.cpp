#include <iostream>
using namespace std;
const int size=3;
struct StNumber{
float Number[size];	
};
StNumber ReadNumbers(){
StNumber num ;
for(int i=0;i<size;i++){
cout<<"Enter Nurmbe "<<i+1<<": ";
cin>>num.Number[i];
}
return num;	
}
float CheckNumbers(StNumber num){
	if(num.Number[0]>=num.Number[1]&&num.Number[0]>=num.Number[2])
		return num.Number[0];
       else if(num.Number[1]>=num.Number[0]&&num.Number[1]>=num.Number[2])
	return num.Number[1];
	else
		return num.Number[2];
	
	
	
}
void PrintlargerNumber(float Max){
	cout<<"The larger number is: "<<Max<<endl;
	
}
int main(){
	PrintlargerNumber(CheckNumbers(ReadNumbers()));
	return 0;
}
