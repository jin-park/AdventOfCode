#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<int> get_data() {
	vector<int> data;
	int number;
	ifstream file;
	file.open("day1.input");
	while (file >> number) {
		data.push_back(number);
	}
	file.close();
	return data;
}

int part_one() {
	vector<int> data = get_data();
	for (int i = 0; i < data.size(); i++) {
		for (int j = i + 1; j < data.size(); j++) {
			if (data[i] + data[j] == 2020) {
				return data[i] * data[j];
			}
		}
	}
	return -1;
}

int part_two() {
	vector<int> data = get_data();
	for (int i = 0; i < data.size(); i++) {
		for (int j = i + 1; j < data.size(); j++) {
			for (int k = j + 1; k < data.size(); k++) {
				if (data[i] + data[j] + data[k] == 2020) {
					return data[i] * data[j] * data[k];
				}
			}
		}
	}
	return -1;
}

int main() {
	cout << "Part one answer: " << part_one() << "\n";
	cout << "Part two answer: " << part_two() << "\n";
}
