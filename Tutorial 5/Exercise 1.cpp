#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int total = 0;
	int numbers;
	fstream myfile;
	myfile.open("sum.txt", ios::in);
	if (myfile.is_open()) {
		while (!myfile.eof()) {
			myfile >> numbers;
			cout << "the number is " << numbers << endl;
			total += numbers;
		}
	}
	else 
	{
		cout << "file is not open or do not exist! ";
	}
	cout << "the total sum of the above numbers are: " << total << endl;
	myfile.close();
	system("pause");
	return 0;
}