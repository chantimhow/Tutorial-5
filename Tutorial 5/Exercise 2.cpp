#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string id,name;
	ifstream infile;
	int mon, tue, wed, thurs, fri,d, total;
	double payrate = 3.5, salary;
	infile.open("employee.txt", ios::in);
	if (infile.is_open()) {
		
		while (!infile.eof()) {
			getline(infile, id);
			cout << "employee ID: " << id << endl;
			getline(infile, name);
			cout << "employee name: " << name << endl;
			infile >> mon >> tue >> wed >> thurs >> fri;
			cout << mon << ' ' << tue << ' ' << wed << ' ' << thurs << ' ' << fri <<  endl;
			total = mon + tue + wed + thurs + fri;
			salary = total * payrate;
			cout << "total wages: RM" << salary << endl;
			cout << endl;
			infile.get(); //to get rid of white space after infile >> mon >> tue >> wed >> thurs >> fri;

		
			

		}
	}
	else {
		cout << "file is not open!";
	}

	infile.close();
	system("pause"); 
	return 0;

}