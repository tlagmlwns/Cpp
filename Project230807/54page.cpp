#include <iostream>
using namespace std;
using std::bad_alloc;
//����ó�� �� try/~catch
void func5_4_1() { // ����ó�� ���Ѱ�
	int a, b;
	cout << "�ΰ��� ���� �Է� : ";
	cin >> a >> b;
	if (b == 0) cout << "�Է� ����";//throw b;
	else {
		
		cout << "a/b�� �� : " << a / b << endl;
		cout << "a/b�� ������ : " << a % b << endl;
	}
}

void func5_4_2() { //try ~catch������� ����ó��
	int a, b;
	cout << "�ΰ��� ���� �Է� : ";
	cin >> a >> b;
	
	try {
		if (b == 0) throw b; //�μ��� ó��
		cout << "a/b�� �� : " << a / b << endl;
		cout << "a/b�� ������ : " << a % b << endl;
	}
	catch (int exception) {
		cout << exception << " �Է�." << endl;
		cout << "throw�ؼ� catch�� int exception : " << exception << endl;
		cout << "�Է� ����! �ٽ� �Է��� �ּ���." << endl;
	}
}

void func5_4_3() {
	int num;
	cout << "input number : ";
	cin >> num;
	try {
		if (num > 0) throw 10;
		else throw 'm';
	}
	catch (int exp) { cout << "int �� ���� �߻�" << endl; }
	catch (char exp) { cout << "char �� ���� �߻�" << endl; }
}

void func5_4_4() { //�Ҵ�
	try {
		int i = 0;
		while (1) {
			cout << i++ << "��° �Ҵ�" << endl;
			double(*arr)[10000] = new double[10000][10000];
		}
	}
	catch (bad_alloc ex) {
		ex.what();
		cout << endl << "END" << endl;
	}
}
int main() {
	func5_4_4();
}