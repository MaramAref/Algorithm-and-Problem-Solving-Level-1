#include <iostream> 
#include <cmath> 
using namespace std; 
void ReadNumbers(float& a, float& h ) 
{ 
cout << " Please enter triangle base A : \n"; 
cin >> a; 
cout << " Please enter triangle height H : \n"; 
cin >> h; 
} 
float CalculateTriangleArea(float a, float h ) 
{ 
float Area=(a/2 )* h;
return Area; 
} 
void PrintResults(float Area) 
{ 
cout << "  Triangle Area = " << Area << endl; 
} 
int main() 
{ 
float Num1, Num2 ; 
ReadNumbers(Num1, Num2 ); 
PrintResults(CalculateTriangleArea(Num1, Num2)); 
}
