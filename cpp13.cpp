
//**********************                 Factorial, 0 other way


#include <iostream>


using namespace std;

int main(int argc, char** argv)
{	
	int f;
	cout<< "Type a number: ";
	cin >> f;
	
	int i, fat = 1;

	for(i = (f+1); i != 1; i--){
		fat = fat * (i - 1);
	}
	cout << "The factorial of " << f << " is " << fat  ;
	return 0;
} 

