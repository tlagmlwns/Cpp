#include <iostream>
using namespace std;

template <typename T>
class Data {
public :
	T Int;

	Data(T inum) { this->Int = inum; }

	T getData() { return Int; }
	void showData() { cout << Int << endl; }
};

void func4_1() {
	Data<int> d1 = (1);
	d1.showData();

	Data<double> d2 = (3.14);
	d2.showData();

	Data<char> d3 = ('a');
	d3.showData();
}
//int main(){}