# include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int num;
	cout<<"Enter a integer number:\n";
	cin>>num;
	
	if( (num%2 == 0) && num>10 ){                                   // !(num%2 == 0) testa se � �mpar, o s�mbolo ! � o not
		cout << "Number greater than 10 and even !";
	}else if((num%2 != 0) && num<10){                              // bool � um tipo de vari�vel que pode ser true ou false 
		cout << "number less than 10 and odd !";
	}else if((num%2 != 0) && num>10){
		cout << "number greater than 10 and odd !";
	}else if((num%2 == 0) && num<10){
		cout << "number less than 10 and even !";
	}

	return 0;
}
