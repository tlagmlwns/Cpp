#include "Score_manager.h"
#include "Student.h"
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

void Score_manager() {
	while (true) {
		char choice;
		cout << "���α׷� ����" << endl;
		cout << "\n------------------------------" << endl;
		cout << "1. ������ �Է�\n2.�Է��� ��� ������ ���\n 3. �̸����� �˻�\n 4. ��ȣ�� �˻�\n 5. �̸� �Է¹޾� ��հ� ���� ���\n 6. ������� ���������� ���\n" << endl;
		cout << "���α׷� ����(q or Q)" << endl;
		cout << "------------------------------\n" << endl;
		cout << "�ش�Ǵ� ����� ���� ���ڸ� �Է��Ͻÿ� : ";
		cin >> choice;
		if (choice == 'Q' || choice == 'q') {
			cout << "�����մϴ�." << endl;
			break;
		}
		else if (choice == '1') void sDataIp();			//1. ������ �Է� 
		else if (choice == '2') void sDataAllOp(); 		//2. �Է��� ��� ������ ���
		else if (choice == '3') void searchSname(); 	//3. �̸����� �˻�
		else if (choice == '4') void searchSno();		//4. ��ȣ�� �˻�
		else if (choice == '5') void printAnR(); 		//5. �̸� �Է¹޾� ��հ� ���� ���
		else if (choice == '6') void scoreRanking(); 	//6. ������� ���������� ���
		else {
			cout << "�ش� ��ȣ�� �������� �ʽ��ϴ�. �ٽ� �Է��Ͻÿ�\n" << endl;
		}
	}
}
void sDataIp() {
	vector<Student>vs;
	char sn[30];
	int sno, ks, es, ms;
	cout << "1. �л� �̸� �Է� : "; cin >> sn;
	cout << "2. �л� ��ȣ �Է� : "; cin >> sno;
	cout << "3. �л� �������� �Է� : "; cin >> ks;
	cout << "4. �л� �������� �Է� : "; cin >> es;
	cout << "5. �л� �������� �Է� : "; cin >> ms;
	Student sp(sn, sno, ks, es, ms);
	vs.push_back(sp);
}
void sDataAllOp() {
	vector<Student>vs;
	vector<Student>::iterator itr;

	for (itr = vs.begin(); itr != vs.end(); itr++)
		(*itr).showStudentInfo();
}
void searchSname();		
void searchSno();		
void printAnR();		
void scoreRanking();	
