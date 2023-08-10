#include <iostream>
#include <fstream>
#include <string>
//5. 파일 입출력
using namespace std;
//50page - 파일읽기 예제
void func5_2() {
	std::ifstream in("test.txt");
	std::string s;
	if (in.is_open()) {
		in >> s;
		std::cout << "입력 받은 문자열 :: " << s << std::endl;
	}
	else { std::cout << "파일을 찾을 수 없습니다.!" << std::endl; }
	in.close();
}
//ifstream
void ReadAll() {
	ifstream in("test.txt");
	string s;
	if (in.is_open()) {
		while (!in.eof()) {
			getline(in, s);
			cout << s << endl;
		}
		in.close();
	}
}
//52page - 파일쓰기 예제
void func5_3() {
	std::ofstream out("test.txt");
	std::string s;
	if (out.is_open()) { out << "good morning"; }
}

/*
int main() {
	ReadAll();
}//읽고 쓰시 나중에 추가*/