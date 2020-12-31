#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
	int din;
	cout << "Enter an integer number: \n";
	
	cin>>din;
	
	if(din > 10)
	{
		cout << "Number greater than 10 !";
	} else if(din == 10){
		cout << "Number equal 10 !";
	}else if(din < 10){
		cout << "Number less than 10 !";
	}
	return 0;
}
