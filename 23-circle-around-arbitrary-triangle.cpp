#include <iostream> 
#include <cmath> 
using namespace std; 
void ReadNumbers(float& a, float& b, float& c) 
{ 
cout << " Please enter triangle side A : \n"; 
cin >> a; 
cout << " Please enter triangle base B: \n"; 
cin >> b; 
cout << " Please enter triangle side C: \n"; 
cin >> c; 
} 
float CalculateTriangleArea(float a, float b,float c ) 
{ 
const float PI = 3.141592653589793238; 
float T; 
float P = (a + b + c) / 2;
T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
float Area=PI*pow( T,2);
return Area; 
} 
void PrintResults(float Area) 
{ 
cout << "  Triangle Area = " << Area << endl; 
} 
int main() 
{ 
float Num1, Num2 ,Num3; 
ReadNumbers(Num1, Num2 ,Num3); 
PrintResults(CalculateTriangleArea(Num1, Num2,Num3)); 
}
