#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string name, id;
	double gpa;
	ifstream infile;
	infile.open("student.txt");

	if (infile.is_open()){
		while (!infile.eof()) {
			getline(infile, name);
			infile >> id >> gpa;
			infile.ignore();
			cout << "Student Name: " << name << endl;
			cout << "ID: " << id << endl;
			cout << "CGPA: " << gpa << endl;
			if (gpa >= 3.70) {
				cout << name << " gets president list\n\n";
				}
			else if (gpa >= 3.50 && gpa < 3.70) {
				cout << name << " gets dean list\n\n";
			}
			else if (gpa >= 3.00 && gpa < 3.50 ) {
				cout << name << " gets distinction list \n\n";
			}
			else if (gpa <= 3.00) {
				cout << name << " needs to work harder \n\n";
			}
			

			

		}

	}
	else cout << "file is not open!";
	system("pause");
	return 0;
		
}