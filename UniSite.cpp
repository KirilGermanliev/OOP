#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;
struct Student {
	char name[129];
	char surname[129];
	long long egn;
};
struct University {
	char name[129];
	Student students[1024] = { 0 }; //kakvo zanulqvam?
	bool hasStudent(const Student& s) const {
		for (int i = 0; i < 1024; i++) {
			if (students[i].egn == s.egn) {
				return true;
			}
		}
		return false;
	}
	void addStudent()  {
		for (int i = 0; i < 1024; i++) {
			if (students[i].egn == 0) {
				cin.getline(students[i].name, 129);
				cin.getline(students[i].surname, 129);
				cin >> students[i].egn;
			}
		}
	}
};
int main() {

	return 0;
}