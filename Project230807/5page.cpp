#include<iostream>
using namespace std;
//4.2 new / delete
typedef struct { int xpos; int ypos; }Point;
void func4_2() {
	Point* ptr = new Point;
	ptr->xpos = 10;
	ptr->ypos = 20;
	cout << "ptr->xpos : " << ptr->xpos << "\nptr->ypos : " << ptr->ypos << endl;
	delete ptr;
}

//길이가 10인 int형 배열을 new로 생성하고 1부터 10까지 저장한 후 출력, 함수 종료 전에 배열삭제
void func4_2_1() {
	int* ptr = new int[10];
	for (int i = 0; i < 10; i++) {
		//*(ptr + i) = i+1;
		ptr[i] = i + 1;
		cout << *(ptr + i) << ",";
	}
	delete[] ptr;
}

//길이가 32인 char형 배열을 new로 생성하고 이름 입력받아 출력, 함수 종료 전에 배열삭제
void func4_2_2() {
	char* str = new char[32];
	cout << "이름을 입력 : ";
	cin >> str;
	cout << "입력한 이름 : " << str << endl;
	delete str;
}

//이름, 연락처, 나이를 저장하는 구조체를 생성하고 new로 할당후 "ghdrlfehd", "01023456789", 26을 저장하고 출력후 삭제
typedef struct { char name[32]; char phone[32]; int age; }Info;
void func4_2_3() {
	Info* info = new Info();
	strcpy(info->name, "홍길동"); //cout << "이름을 입력 : "; // cin >> info->name;
	strcpy(info->phone, "01012345678"); //cout << "번호을 입력 : "; //cin >> info->phone;
	info->age >> 26; //cout << "나이을 입력 : ";//cin >> info->age;
	cout << "이름 : " << info->name << ", 번호 : " << info->phone<< ", 나이 : " << info->age<< endl;
	delete info;
}
//int main() { func4_2_3(); }