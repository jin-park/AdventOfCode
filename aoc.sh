#!/bin/bash
# Creates template folder for advent of code
mkdir "Day $1"
cd "Day $1"
touch "day$1.input"
touch "day$1.cpp"
touch "day$1.txt"
echo "#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<int> get_data() {
	vector<int> data;
	int number;
	ifstream file;
	file.open(\"day$1.input\");
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
    cout << \"Part one: \" << part_one() << \"\n\";
    cout << \"Part two: \" << part_two() << \"\n\";
}" >> "day$1.cpp"
echo "Template for Advent of code day $1 finished"
echo "Files created: day$1.cpp, day$1.txt, day$1.input"
echo "day$1.cpp: Problem solution file, day$1.txt: Problem statement file, day$1.input: Problem input file"
