#include<iostream>
using namespace std;
struct StArea{
	int Lengh;
	int Width;
	
};
StArea ReadNumbers(){
	StArea Area;
	cout<<"Enter the Lengh: ";
	cin>>Area.Lengh;
	cout<<"Enter the Width: ";
	cin>>Area.Width;
	return Area;
}
float CalculateRectangleArea(StArea Area){
	return Area.Lengh*Area.Width;
}
void PrintRuslt(float RectangleArea){
	cout<<"The Rectangle Area is: "<<RectangleArea<<endl;
	
}
int main(){
	PrintRuslt(CalculateRectangleArea(ReadNumbers()));
	return 0;
}
