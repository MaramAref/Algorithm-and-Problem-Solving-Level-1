#include <iostream>
using namespace std;
const int size=3;
struct Marks{
float Mark[size];	
};
Marks ReadMarks(){
Marks mark ;
for(int i=0;i<size;i++){
cout<<"Enter Mark "<<i+1<<": ";
cin>>mark.Mark[i];
}
return mark;	
}
float SumMarks(Marks mark){
	float sum=0;
	for(int i=0;i<size;i++){
		sum+=mark.Mark[i];
	}
	return sum;
}
float CalculateAverage(float sum){
	float Average=sum/size;
	return Average;
}
void PrintAverage(float Average){
	cout<<"Your Average is : "<<Average;
	cout<<endl<<endl;
}
int main(){
	PrintAverage(CalculateAverage(SumMarks(ReadMarks())));
	return 0;
}