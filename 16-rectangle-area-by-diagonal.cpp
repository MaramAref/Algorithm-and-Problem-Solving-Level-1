#include <iostream> 
#include <cmath> 
using namespace std; 
void ReadNumbers(float& a, float& d ) 
{ 
cout << "Pleas enter  rectangle Side A : \n"; 
cin >> a; 
cout << "Pleas enter  rectangle Diagonal D : \n"; 
cin >> d; 
} 
float RectangleAreaBySideAndDiagonal(float a, float d ) 
{ 
 return a * sqrt (pow(d,2) - pow(a,2)) ; 
} 
void PrintResults(float Area) 
{ 
cout << " Rectangle Area = " << Area << endl; 
} 
int main() 
{ 
float Num1, Num2 ; 
ReadNumbers(Num1, Num2 ); 
PrintResults(RectangleAreaBySideAndDiagonal(Num1, Num2)); 
}
