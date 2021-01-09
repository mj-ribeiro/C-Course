#include <iostream>

using namespace std;


bool par(int num);
void mens();



int main(int argc, char** argv){
	mens();
	int n;
	cout << "Digite um numero:";
	cin >> n;
	
	if(par(n)){
		cout << "O numero e par";
	}else{
		cout << "O numero e impar";
	}
	return 0;
}


void mens(){
	cout << "Aprendendo c++" << endl;
}




bool par(int num){
	if(num%2==0){
		return true;
	}else{
		return false;
	}
		 
}