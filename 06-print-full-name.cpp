#include<iostream>
#include<string>
using namespace std;
struct StNameInfo{
string FirstName;
string LastName;
};
StNameInfo ReadNameInfo(){
	StNameInfo nameinfo;
	cout<<"Enter Your First name: ";
	cin>>nameinfo.FirstName;
	cout<<"Enter Your Last name: ";
	cin>>nameinfo.LastName;
	return nameinfo;
}
string GetFullName(StNameInfo nameinfo){
	string FullName=nameinfo.FirstName+" "+nameinfo.LastName;
	
	return FullName;
}
void PrintFullName(string FullName){
	cout<<"Your Full name is: "<<FullName<<endl;
}
int main(){
	PrintFullName(GetFullName(ReadNameInfo()));
	return 0;
}
