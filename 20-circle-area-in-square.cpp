#include <iostream> 
#include <cmath> 
using namespace std; 
float  ReadSquareSide() 
{ 
float A;
cout << " Please enter Square Side  A: \n"; 
cin >> A; 
return A;
} 
float   CircleAreaInscribedInSquare(float A) 
{ 
const float PI = 3.141592653589793238;
float Area=(PI*pow(A,2))/4;
return Area; 
} 
void PrintResults(float Area) 
{ 
cout << "  Circle Area = " << Area << endl; 
} 
int main(){  
PrintResults(CircleAreaInscribedInSquare(ReadSquareSide()));
}
