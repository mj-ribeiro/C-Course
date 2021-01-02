#include<iostream>

using namespace std;


int main() {
	int idade, ano; 
	cout << "Digite o ano do seu nascimento:";
	cin >> ano;
	
	idade = 2020 - ano;
	cout << "Sua idade: " << idade << " anos";
	
	return 0;
}