#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include "Score_manager.h"
#include "Student.h"

using namespace std;
vector<Student> vs; //�л������� ����
vector<Student>::iterator itr;
vector<int> Averages; //��� ����

void Score_manager() {
	cout << " (���α׷� ����)" << endl;
	cout << " �������� ���α׷� �Դϴ�." << endl;
	while (true) {
		char choice;
		cout << "\n-----------------------------------" << endl;
		cout << " 1. ������ �Է�\n";
		cout << " 2. �Է��� ��� ������ ���\n";
		cout << " 3. �̸����� �˻�\n";
		cout << " 4. ��ȣ�� �˻�\n";
		cout << " 5. �̸� �Է¹޾� ��հ� ���� ���\n"; 
		cout << " 6. ������� ���������� ���\n" << endl;
		cout << " ! ���α׷� ����(q or Q)" << endl;
		cout << "-----------------------------------\n" << endl;
		cout << " �ش�Ǵ� ����� ���� ���ڸ� �Է��Ͻÿ� : ";
		cin >> choice;
		if (choice == 'Q' || choice == 'q') {
			cout << " 3" << endl;
			cout << " 2" << endl;
			cout << " 1" << endl;
			cout << " (���α׷� ����)" << endl;
			break;
		}
		else if (choice == '1') sDataIp();			//1. ������ �Է� 
		else if (choice == '2') sDataAllOp(); 		//2. �Է��� ��� ������ ���
		else if (choice == '3') searchSname(); 		//3. �̸����� �˻�
		else if (choice == '4') searchSno();		//4. ��ȣ�� �˻�
		else if (choice == '5') printAnR(); 		//5. �̸� �Է¹޾� ��հ� ���� ���
		else if (choice == '6') scoreRanking(); 	//6. ������� ���������� ���
		else {
			cout << " �ش� ��ȣ�� �������� �ʽ��ϴ�. �ٽ� �Է��Ͻÿ�\n" << endl;
		}
		cout << "\n (���α׷� ������....)" << endl;
	}
}
void sDataIp() {
	char sname[30];
	int sno;
	int ks;
	int es;
	int ms;
	cout << " 1. �л� �̸� �Է� >> "; cin >> sname;
	cout << " 2. �л� ��ȣ �Է� >> "; cin >> sno;
	cout << " 3. ���� ���� �Է� >> "; cin >> ks;
	cout << " 4. ���� ���� �Է� >> "; cin >> es;
	cout << " 5. ���� ���� �Է� >> "; cin >> ms;
	Student sp(sname, sno, ks, es, ms);
	vs.push_back(sp); //�л������� �ֱ�
}

void sDataAllOp() {
	for (itr = vs.begin(); itr != vs.end(); itr++)
		(*itr).showStudentInfo();
	cout << "\n (��¿Ϸ�)\n" << endl;
}

void searchSname() {
	char sname[30];
	cout << " �л� �̸����� �˻� : ";
	cin >> sname;
	itr = find(vs.begin(), vs.end(), sname);

	if (itr != vs.end()) {
		cout << " �˻� ���: ";
		(*itr).showStudentInfo();
	}
	else { cout << " �˻� ��� ����" << endl; }
}

void searchSno() {
	int sno;
	cout << " �л� ��ȣ�� �˻� : ";
	cin >> sno;
	itr = find(vs.begin(), vs.end(), sno);

	if (itr != vs.end()) {
		cout << " �˻� ���: ";
		(*itr).showStudentInfo();
	}
	else { cout << " �˻� ��� ����" << endl; }
}

void printAnR() {
	for (itr = vs.begin(); itr != vs.end(); itr++) { //��� ��ŷ �߰�
		Averages.push_back((*itr).getAverage());
	}
	sort(Averages.begin(), Averages.end(), greater<int>());
	vector<int> sorted_indices(Averages.size());
	for (size_t i = 0; i < Averages.size(); ++i) { sorted_indices[i] = i; }

	char sname[30];
	cout << " �л� �̸����� �˻� : "; cin >> sname;
	itr = find(vs.begin(), vs.end(), sname);
	if (itr != vs.end()) {
		cout << " ���: " << (*itr).getAverage();
		for (size_t i = 0; i < sorted_indices.size(); ++i) {
			if (Averages[sorted_indices[i]] == (int)(*itr).getAverage()) {
				cout << ", ����: " << i + 1 << endl;
				Averages.clear(); //�ʱ�ȭ
				break;
			}
		}
	}
	else { cout << " �˻� ��� ����" << endl; }
}

void scoreRanking() {
	Averages.clear(); //�ʱ�ȭ
	for (itr = vs.begin(); itr != vs.end(); itr++) { //��� ��ŷ �߰�
		Averages.push_back((*itr).getAverage());
	}
	sort(Averages.begin(), Averages.end(), greater<int>()); //�������� ����
	cout << "- ���� ��� ��ŷ - " << endl;
	for (int a : Averages) {
		cout << a << endl;
	}
	Averages.clear(); //�ʱ�ȭ
}
