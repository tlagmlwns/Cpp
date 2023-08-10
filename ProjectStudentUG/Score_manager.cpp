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
		cout << "프로그램 실행" << endl;
		cout << "\n------------------------------" << endl;
		cout << "1. 데이터 입력\n2.입력한 모든 데이터 출력\n 3. 이름으로 검색\n 4. 번호로 검색\n 5. 이름 입력받아 평균과 석차 출력\n 6. 평균점수 높은순으로 출력\n" << endl;
		cout << "프로그램 종료(q or Q)" << endl;
		cout << "------------------------------\n" << endl;
		cout << "해당되는 기능을 사용시 문자를 입력하시오 : ";
		cin >> choice;
		if (choice == 'Q' || choice == 'q') {
			cout << "종료합니다." << endl;
			break;
		}
		else if (choice == '1') void sDataIp();			//1. 데이터 입력 
		else if (choice == '2') void sDataAllOp(); 		//2. 입력한 모든 데이터 출력
		else if (choice == '3') void searchSname(); 	//3. 이름으로 검색
		else if (choice == '4') void searchSno();		//4. 번호로 검색
		else if (choice == '5') void printAnR(); 		//5. 이름 입력받아 평균과 석차 출력
		else if (choice == '6') void scoreRanking(); 	//6. 평균점수 높은순으로 출력
		else {
			cout << "해당 번호가 존재하지 않습니다. 다시 입력하시오\n" << endl;
		}
	}
}
void sDataIp() {
	vector<Student>vs;
	char sn[30];
	int sno, ks, es, ms;
	cout << "1. 학생 이름 입력 : "; cin >> sn;
	cout << "2. 학생 번호 입력 : "; cin >> sno;
	cout << "3. 학생 국어점수 입력 : "; cin >> ks;
	cout << "4. 학생 영어점수 입력 : "; cin >> es;
	cout << "5. 학생 수학점수 입력 : "; cin >> ms;
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
