#include<iostream>
using namespace std;
struct stInfo{
short Age;
bool HasDriverLicense;
};
stInfo ReadInfo(){
	stInfo info;
	cout<<"Enter Your Age: ";
	cin>>info.Age;
	cout<<"do you have a Drive License \n Enter 1 or 0 \n";
	cin>>info.HasDriverLicense;
	return info;
}
bool IsAccepted(stInfo info){
	return ((info.Age>21) && (info.HasDriverLicense));

}
void PrintRuslt(stInfo info){
	if(IsAccepted( info))
	cout<<"Hired\n";
      else
      cout<<"Rejected\n";
}
int main(){
	PrintRuslt(ReadInfo());
	return 0;
}