#include <iostream>
using namespace std;
int main ()
{
	int a;
	int interger;
	a = 2;
	cout <<"Enter a number"<< endl;
	cin >> interger;
	if (interger%2==0){
		cout <<"it is not a prime"<< endl;
	}
	else
	if (interger%2==1){
		cout <<"it is a prime number"<< endl;
	}
	return 0;
}
