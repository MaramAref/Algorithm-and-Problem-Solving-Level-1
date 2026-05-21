#include <iostream> 
#include <cmath> 
using namespace std; 
float ReadDiameter() 
{ 
float D;
cout << " Please enter Diameter D: \n"; 
cin >> D; 
return D;
} 
float  CircleAreaByDiameter(float D) 
{ 
const float PI = 3.141592653589793238;
float Area=(PI*pow(D,2))/4;
return Area; 
} 
void PrintResults(float Area) 
{ 
cout << "  Circle Area = " << Area << endl; 
} 
int main(){  
PrintResults(CircleAreaByDiameter(ReadDiameter()));
}
