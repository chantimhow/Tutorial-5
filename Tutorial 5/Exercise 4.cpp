#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int number;
	ofstream outfile;
	outfile.open("Even.txt",ios::app);
	if (outfile.is_open()) {
		for (int i = 1; i <= 10; i++) {
			cout << "enter the number: ";
			cin >> number;
			if (number % 2 == 0) {
				outfile << number << endl;
			}
			else;
		}
	}
	else cout << "file is not open!";
	outfile.close();
	system("pause");
	return 0;

}