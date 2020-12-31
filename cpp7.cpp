# include<iostream>

using namespace std;


int main(int argc, char** argv)
{ 	
	int num;
	cout << "Enter a integer number: \n";
	cin >> num;
	
	switch(num)
	{
	case 10:
		cout << "Number equal 10!";
		break;
	case 11:
		cout << "Number equal 20!";
	default:
		cout << "Number not found!";
		break;
	} 
	return 0;
}
