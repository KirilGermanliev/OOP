#include<iostream>
#include<cstring>
using namespace std;

class Registration {
private:
	char number[9];
public:
	Registration(const char* str) {
		if (str == nullptr) {
			throw exception("nullptr");
		}
		else {
			int counter = 0;
			bool check = 1;
			int size = strlen(str);
			switch (size) {
			case 7:
				for (int i = 0; i < size; i++) {
					if (i == 0 && (str[i] < 'A' || str[i]>'Z')) {
						throw exception("that's the wrong number");
						check = 0;
					}
					if (i > 0 && i < 5 && (str[i] < '0' || str[i]>'9')) {
						throw exception("that's the wrong number");
						check = 0;
					}
					if (i >= 5 && (str[i] < 'A' || str[i]>'Z')) {
						throw exception("that's the wrong number");
						check = 0;
					}
				}
				break;
			case 8:
				for (int i = 0; i < size; i++) {
					if (i < 2 && (str[i] < 'A' || str[i]>'Z')) {
						throw exception("that's the wrong number");
						check = 0;
					}
					if (i > 1 && i < 6 && (str[i] < '0' || str[i]>'9')) {
						throw exception("that's the wrong number");
						check = 0;
					}
					if (i >= 6 && (str[i] < 'A' || str[i]>'Z')) {
						throw exception("that's the wrong number");
						check = 0;
					}
				}
				break;
			default:
				throw exception("that's the wrong number");
				check = 0;
			}
			if (check == 1) {
				strcpy(number, str);
			}
		}
	}

	Registration& operator=(const char* str) {
		if (strcmp(number, str) != 0) {
			strcpy(number, str);
		}
		return *this;
	}

	bool operator==(const Registration& rhs) const {
		if (strcmp(number, rhs.number) == 0) {
			return true;
		}
		return false;
	}
	const char* toString() const {
		//cout << endl << number;
		return number;
	}

};

class Vihicle {
public:
	Registration regnum;
	char* description;
};