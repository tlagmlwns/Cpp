#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//STL_algorithm
void min_ele() {
	vector<int> container;
	for (int i = 0; i < 10; i++) container.push_back(i);
	vector<int>::iterator itr = min_element(container.begin(), container.end());
	cout << *itr << endl;
}
void max_ele() {
	vector<int> container;
	for (int i = 0; i < 10; i++) container.push_back(i);
	vector<int>::iterator itr = max_element(container.begin(), container.end());
	cout << *itr << endl;
}
void find() {
	vector<int> container;
	for (int i = 0; i < 10; i++) container.push_back(i);
	vector<int>::iterator itr = find(container.begin(), container.end(),3);
}
void sort(){
	vector<int> container;
	for (int i = 0; i < 10; i++) container.push_back(i);
	sort(container.begin(), container.end());
}
//int main(){}