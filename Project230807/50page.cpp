#include <iostream>
#include <fstream>
#include <string>
//5. ���� �����
using namespace std;
//50page - �����б� ����
void func5_2() {
	std::ifstream in("test.txt");
	std::string s;
	if (in.is_open()) {
		in >> s;
		std::cout << "�Է� ���� ���ڿ� :: " << s << std::endl;
	}
	else { std::cout << "������ ã�� �� �����ϴ�.!" << std::endl; }
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
//52page - ���Ͼ��� ����
void func5_3() {
	std::ofstream out("test.txt");
	std::string s;
	if (out.is_open()) { out << "good morning"; }
}

/*
int main() {
	ReadAll();
}//�а� ���� ���߿� �߰�*/