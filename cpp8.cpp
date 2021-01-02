/* 
                                                    Calculator in C++
*/


# include<iostream>


using namespace std;


int main(int argc, char** argv)
{
	int num1, num2, res;
	float div;
	char op;

	cout << "Type the first number:";
	cin >> num1;

	cout << "Type the second number:";
	cin >> num2;


	cout << "Type operation:";
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
		if(num2!=0){
		div = (float)num1 / num2;
		cout << "division:" << div << endl;
		}else{
			cout << "Zero division error!";
		}
		break;
		return 0;
	}
}







