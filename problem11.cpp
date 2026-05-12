#include <iostream>
using namespace std;
const int size=3;
struct StMarks{
float Mark[size];	
};
enum enResult{pass=1,fail=2};
StMarks ReadMarks(){
StMarks marks ;
for(int i=0;i<size;i++){
cout<<"Enter Mark "<<i+1<<": ";
cin>>marks.Mark[i];
}
return marks;	
}
float SumMarks(StMarks marks){
	float sum=0;
	for(int i=0;i<size;i++){
		sum+=marks.Mark[i];
	}
	return sum;
}
float CalculateAverage(float sum ){
	float Average=sum/size;
	return Average;
}
enResult Result(float Average){
	if(Average>=50)
		return enResult::pass;
       else
	  return enResult::fail;
}
void PrintAverage(float Average){
	if(Result(Average)==enResult::pass)
	cout<<"You Passed \n";
	else
	cout<<"You failed \n";
	
}
int main(){
	PrintAverage((CalculateAverage(SumMarks(ReadMarks()))));
	return 0;
}