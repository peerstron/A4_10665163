#include <iostream>
using namespace std;

//A C++ program to calculate the Greatest Common Divisor of two numbers entered by the use.

int main()
{
	int x, y;
	cout<<"Enter two numbers: \n";
	cin>>x >>y;
	
	int gcd;
	int i; //'i' is a common divisor for the two numbers entered by the user.
	
	for(i=1; i<=x && i<=y; i++){
		
		if(x % i == 0 && y % i ==0){
			
			gcd=i;
		}
	}
	cout<<endl;
	
	cout<<"The Greatest Common Divisor (GCD) of "<< x <<" and " <<y << " is "<< gcd<<endl;
	return 0;
}
