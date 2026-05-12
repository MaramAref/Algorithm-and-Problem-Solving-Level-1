#include <iostream> 
#include <cmath> 
using namespace std; 
void ReadTriangleData(float& a, float& b) 
{ 
cout << " Please enter  Triangle Side A  : \n"; 
cin >> a; 
cout << " Please enter Triangle base B : \n"; 
cin >> b; 
} 
float CircleAreaByTriangle(float a, float b) 
{ 
const float PI = 3.141592653589793238;
float Area= PI*(pow(b,2)/4)*((2*a-b)/(2*a+b));
return Area; 
} 
void PrintResults(float Area) 
{ 
cout << "  Circle Area = " << Area << endl; 
} 
int main() 
{ 
float Num1, Num2 ; 
ReadTriangleData(Num1, Num2); 
PrintResults(CircleAreaByTriangle(Num1, Num2));
}