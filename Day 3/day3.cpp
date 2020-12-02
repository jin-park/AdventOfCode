#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<int> get_data() {
	vector<int> data;
	int number;
	ifstream file;
	file.open("day3.input");
	while (file >> number) {
		data.push_back(number);
	}
	file.close();
	return data;
}

int part_one() {
	vector<int> data = get_data();
}

int part_two() {
	vector<int> data = get_data();
}

int main() {
    cout << "Part one: " << part_one() << "\n";
    cout << "Part two: " << part_two() << "\n";
}
