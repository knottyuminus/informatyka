#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float x;
cout << "Podaj rzeczywista z przedzialu -5 do 10 " << endl;
cin >> x;

if(x<-5 || x>10){
	cout << "Blad danych";
}
else
{
	if (x<7){
	cout << pow(x,3) + 1;
	}
	if (x==7){
	cout << cos(x-1);
	}
	if (x==9){
		cout << sqrt(3*x);
	}
	if (x<-5 || x>10){
		
	}
	else {
	cout << -8*x; }
}
}
