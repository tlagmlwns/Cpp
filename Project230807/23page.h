#pragma once
#include <iostream>
using namespace std;
//23page
namespace P23 {
	class SimpleClass {
		int num1;
		int num2;
	public:
		//SimpleClass() { num1 = 0; num2 = 0; }
		SimpleClass(int num1 = 0, int num2 = 0) {
			this->num1 = num1;
			this->num2 = num2;
		}
		SimpleClass(int n1) { num1 = n1; num2 = 0; }
		//SimpleClass(int n1, int n2) { num1 = n1; num2 = n2; }
		void ShowData() const { cout << num1 << ' ' << num2 << endl; }
	};
}

