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

//���̰� 10�� int�� �迭�� new�� �����ϰ� 1���� 10���� ������ �� ���, �Լ� ���� ���� �迭����
void func4_2_1() {
	int* ptr = new int[10];
	for (int i = 0; i < 10; i++) {
		//*(ptr + i) = i+1;
		ptr[i] = i + 1;
		cout << *(ptr + i) << ",";
	}
	delete[] ptr;
}

//���̰� 32�� char�� �迭�� new�� �����ϰ� �̸� �Է¹޾� ���, �Լ� ���� ���� �迭����
void func4_2_2() {
	char* str = new char[32];
	cout << "�̸��� �Է� : ";
	cin >> str;
	cout << "�Է��� �̸� : " << str << endl;
	delete str;
}

//�̸�, ����ó, ���̸� �����ϴ� ����ü�� �����ϰ� new�� �Ҵ��� "ghdrlfehd", "01023456789", 26�� �����ϰ� ����� ����
typedef struct { char name[32]; char phone[32]; int age; }Info;
void func4_2_3() {
	Info* info = new Info();
	strcpy(info->name, "ȫ�浿"); //cout << "�̸��� �Է� : "; // cin >> info->name;
	strcpy(info->phone, "01012345678"); //cout << "��ȣ�� �Է� : "; //cin >> info->phone;
	info->age >> 26; //cout << "������ �Է� : ";//cin >> info->age;
	cout << "�̸� : " << info->name << ", ��ȣ : " << info->phone<< ", ���� : " << info->age<< endl;
	delete info;
}
//int main() { func4_2_3(); }