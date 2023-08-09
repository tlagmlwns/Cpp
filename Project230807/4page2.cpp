#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
//4.1 malloc/free & new/delete
char* Makestr(int len) {
	char* str = new char[len];
	return str;
}

void new1() {
	char* str = Makestr(20);
	strcpy(str, "Hello Cpp");
	cout << "sizeof(str) : " << sizeof(str) << ", str : " << str << endl;
	delete[]str;
}
//int main() { new1(); }