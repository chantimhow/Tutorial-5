#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string first_name,lastname;
	double scores, avg_scores,total_scores = 0;
	ifstream infile;
	ofstream outfile;
	infile.open("test.txt");
	outfile.open("testavg.out",ios::app);
	if (infile.is_open() && outfile.is_open()) {
		while (!infile.eof()) {
			infile >> first_name;
			infile >> lastname;
			outfile << "student name: " << first_name << " " << lastname << endl;
			outfile << "test scores: ";
			for (int i = 1; i <= 5; i++) {
				infile >> scores;
				total_scores += scores;
				outfile << fixed << setprecision(2) << scores << " ";
			}
			avg_scores = total_scores / 5;
			outfile << endl;
			outfile << "average test score: " << avg_scores << endl << endl;
			
		}
	}
	else cout << "one of the file is not open or DNE";

}
