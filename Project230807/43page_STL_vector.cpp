#include <iostream>
#include <vector>
#include <string>
using namespace std;
//STL_vector
//vector : 크기의 확장이 가능한 배열
void func4_STL_vc1() {
	vector<int> vc;
	for (int i = 0; i < 10; i++) vc.push_back(i + 1);
	for (int i = 0; i < vc.size(); i++) {
		if (vc[i] == 10) cout << vc[i] << endl;
		else cout << vc.at(i) << ", ";
		//cout << vc[i] << ", ";
	}
}

void func4_STL_vc2() {
	vector<int> container;
	for (int i = 0; i < 10; i++) container.push_back(i + 1);
	vector<int>::iterator itr;
	itr = container.begin();
	while (itr != container.end()) { cout << *itr << " "; ++itr; }
}

void func4_STL_vc3() {
	vector<char> container;
	container.push_back('A');
	container.push_back('B');
	container.push_back('C');
	container.push_back('D');
	container.push_back('E');
	vector<char>::iterator itr;
	itr = container.begin();
	while (itr != container.end()) { cout << *itr << " "; ++itr; }
}

void func4_STL_vc4() {
	vector <string> v;
	string s1 = "abc";
	string s2 = "efg";
	string s3;
	if (s1 != s2) s3 = s1 + s2;

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	if (s3 == "abcrfg") cout << "동일한 문자열" << endl;
}

void func4_STL_vc5() {
	vector <string> v;
	vector <string>::iterator itstr;
	string s;

	for (int i = 0; i < 4; i++){
		//char s[10];
		cout << "문자열 입력 : ";
		cin >> s;
		v.push_back(s);
	}
	cout << "\n";
		//v.push_back("tlagmlwns");
	for (itstr = v.begin(); itstr != v.end(); itstr++)
		cout << "입력한 결과 출력 : " << *itstr << "\n";
}

/*
int main() { 
	//func4_STL_vc1();
	//func4_STL_vc2();
	//func4_STL_vc3();
	//func4_STL_vc4();
	func4_STL_vc5();
}*/