#include <iostream>
#include "23page.h"
using namespace std;
using namespace P23;
void func2_4_3() {
	SimpleClass sc1; sc1.ShowData();

	//SimpleClass sc2(100); sc2.ShowData();

	SimpleClass sc3(100, 200); sc3.ShowData();

	//SimpleClass sc4(); sc4.ShowData();

	SimpleClass* ptr1 = new SimpleClass;
	ptr1->ShowData();

	SimpleClass* ptr2 = new SimpleClass();
	ptr2->ShowData();
}
//int main() { func2_4_3(); }
