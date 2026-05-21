#include<iostream>
#include<string>
using namespace std;
struct NameInfo{
string FirstName;
string LastName;
};
NameInfo ReadNameInfo(){
	NameInfo nameinfo;
	cout<<"Enter Your First name: ";
	cin>>nameinfo.FirstName;
	cout<<"Enter Your Last name: ";
	cin>>nameinfo.LastName;
	return nameinfo;
}
string GetFullName(NameInfo nameinfo,bool Reversed){
	string FullName = ""; 
	if(Reversed)
        FullName=nameinfo.LastName+" "+nameinfo.FirstName;
        else
	 FullName=nameinfo.FirstName+" "+nameinfo.LastName;
	
	return FullName;
}
void PrintFullName(string FullName){
	cout<<"Your Full name is: "<<FullName<<endl;
}
int main(){
	PrintFullName(GetFullName(ReadNameInfo(),true));
	return 0;
}
