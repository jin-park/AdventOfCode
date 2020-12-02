#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

bool valid(string input, int min, int max, char letter) {
	int count = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == letter) {
			count++;
		}
	}
	if (count >= min && count <= max) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	ifstream file;
	vector<int> min, max;
	vector<char> letters;
	vector<string> passwords;
	file.open("input-day2.txt");
	string input, temp;
	int count = 0;
	int first;
	while (file >> input) {
		temp = "";
		if (count % 3 == 0) {
			first = input.find('-');
			for (int i = 0; i < first; i++) {
				temp.push_back(input[i]);
			}
			min.push_back(stoi(temp));
			temp = "";
			for (int i = first + 1; i < input.length(); i++) {
				temp.push_back(input[i]);
			}
			max.push_back(stoi(temp));
		}
		else if (count % 3 == 1) {
			letters.push_back(input[0]);
		}
		else {
			passwords.push_back(input);
		}
		count++;
	}
	file.close();
	count = 0;
//	for (int i = 0; i < passwords.size(); i++) {
//		if (valid(passwords[i], min[i], max[i], letters[i])) {
//			count++;
//		}
//	}
//	cout << "answer: " << count << "\n";
	for (int i = 0; i < passwords.size(); i++) {
		if (passwords[i][min[i] - 1] == letters[i] || passwords[i][max[i] - 1] == letters[i]) {
			if (passwords[i][min[i] - 1] == letters[i] && passwords[i][max[i]-1] == letters[i]) {
				continue;
			}
			count++;
		}
	}
	cout << "answer: "<< count << "\n";
	return 0;
}
