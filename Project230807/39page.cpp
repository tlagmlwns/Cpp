#include <iostream>
using namespace std;

template <typename T> //ÅÛÇÃ¸´ »ç¿ë
int GetMax(T n1, T n2) { return (n1 > n2) ? n1 : n2; }

void func4_(){ 
	cout << GetMax(100, 200) << endl;
	cout << GetMax(1.1, 2.2) << endl;
	cout << GetMax(-1, -2) << endl;
}
//int main() {}