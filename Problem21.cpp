#include <iostream> 
#include <cmath> 
using namespace std; 
float ReadCircumference() 
{ 
float L;
cout << " Please enter Circumference  L: \n"; 
cin >> L; 
return L;
} 
float   CircleAreaByCircumference(float L) 
{ 
const float PI = 3.141592653589793238;
float Area=(pow(L,2))/(PI*4);
return Area; 
} 
void PrintResults(float Area) 
{ 
cout << "  Circle Area = " << Area << endl; 
} 
int main(){  
PrintResults(CircleAreaByCircumference(ReadCircumference()));
}