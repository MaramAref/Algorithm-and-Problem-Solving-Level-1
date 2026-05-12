#include<iostream>
using namespace std;
int ReadNumber(){
int Number;
cout<<"Enter number: ";
cin>>Number;
return Number;
}
void  PrintRangeFrom1toNum_UsingFor(int Number){
	cout << "Range printed using For Statement: \n";
for(int counter=1;counter<=Number;counter++){
	cout<<counter<<"\n";
}	
}
void PrintRangeFrom1toNum_UsingWhile(int Number ){
	cout << "Range printed using While Statement: \n";
	int counter=1;
	while(counter<=Number){
		cout<<counter<<endl;
		counter++;
	}
}
void PrintRangeFrom1toNum_UsingDoWhile(int Number){
	cout << "Range printed using Do While Statement: \n";
	int counter=1;
	do{
	cout<<counter<<endl;
		counter++;	
	}
	while(counter<=Number);
}
int main(){
	int N=ReadNumber();
 PrintRangeFrom1toNum_UsingFor(N);
 PrintRangeFrom1toNum_UsingWhile(N);
 PrintRangeFrom1toNum_UsingDoWhile(N);
	return 0;
}