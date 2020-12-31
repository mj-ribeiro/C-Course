/* 
                                                    Calculator in C++
*/


# include<iostream>


using namespace std;


int main(int argc, char** argv)
{
	int num1, num2, res;
	char op;

	cout << "Type the first number: \n";
	cin >> num1;

	cout << "Type the second number: \n";
	cin >> num2;


	cout << "Type operation: \n";
	cin >> op;

	switch(op)
	{
	case '+':
		res = num1 + num2;
		cout << "sum:" << res << endl;
		break;
	case '-':
		res = num1 - num2;
		cout << "subtraction:" << res << endl;
		break;
	case '*':
		res = num1 * num2;
		cout << "multiplication:" << res << endl;
		break;
	case '/':
		res = num1 / num2;
		cout << "division:" << res << endl;
		break;
		return 0;
	}
}







