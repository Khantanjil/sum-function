#include <iostream>
#include <cmath>

using namespace std;
using std::cout;
using std::cin;

int sum(int x,int y){
	int suma = x + y;
	cout << suma;
}

int main(){
	int first, second;
	cout << "Type an number: ";
	cin >> first;
	cout << "Type another number: ";
	cin >> second;
	int sumation = sum(first, second);
}