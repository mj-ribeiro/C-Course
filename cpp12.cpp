
//**********************                 Factorial


#include <iostream>



using namespace std;

int main(int argc, char** argv)
{	int f;
	cout << "What number do you have factorial ?";
	cin >> f;	
	int i, fat = 1;
		
	for(i = 1; i < f; i++){		
		fat = fat * (i + 1);		
	}
	cout << "The factorial of " << f << " is " << fat ;
	return 0;
}

