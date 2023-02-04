#include <iostream>

#include "CCsv.hpp"

using namespace std;

int main() {
	CCsv csv;
	
	// read a csv file
	vector<pair<string, vector<string>>> CsvRd;
	CsvRd = csv.str_read_csv("Input/text.csv");

	// get a second row
	string head0 = CsvRd.at(0).first;
	string head1 = CsvRd.at(1).first;
	string C_0_0 = CsvRd.at(0).second.at(0);
	string C_1_0 = CsvRd.at(0).second.at(1);
	string C_0_2 = CsvRd.at(2).second.at(0);
	string C_1_2 = CsvRd.at(2).second.at(1);

	cout << head0 << endl;
	cout << head1 << endl;
	cout << C_0_0 << endl;
	cout << C_1_0 << endl;
	cout << C_0_2 << endl;
	cout << C_1_2 << endl;

	return 0;
}

//g(f(x)) z;
//x = {g^(-1)}({f^(-1)}(z)) = z.g^(-1).f^(-1)