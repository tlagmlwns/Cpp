#include <iostream>
using namespace std;
using std::bad_alloc;
//예외처리 및 try/~catch
void func5_4_1() { // 예외처리 안한거
	int a, b;
	cout << "두개의 숫자 입력 : ";
	cin >> a >> b;
	if (b == 0) cout << "입력 오류";//throw b;
	else {
		
		cout << "a/b의 몫 : " << a / b << endl;
		cout << "a/b의 나머지 : " << a % b << endl;
	}
}

void func5_4_2() { //try ~catch사용으로 예외처리
	int a, b;
	cout << "두개의 숫자 입력 : ";
	cin >> a >> b;
	
	try {
		if (b == 0) throw b; //인셉션 처리
		cout << "a/b의 몫 : " << a / b << endl;
		cout << "a/b의 나머지 : " << a % b << endl;
	}
	catch (int exception) {
		cout << exception << " 입력." << endl;
		cout << "throw해서 catch된 int exception : " << exception << endl;
		cout << "입력 오류! 다시 입력해 주세요." << endl;
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
	catch (int exp) { cout << "int 형 예외 발생" << endl; }
	catch (char exp) { cout << "char 형 예외 발생" << endl; }
}

void func5_4_4() { //할당
	try {
		int i = 0;
		while (1) {
			cout << i++ << "번째 할당" << endl;
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