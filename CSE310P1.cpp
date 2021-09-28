//============================================================================
// Name        : CSE310P1.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;



void insertionSort (char array1[], int n) { //??? n is length? maybe?
	int j;
	char k;
	for (int i = 1; i < n; i++) {
		k = array1[i];
		j = i-1;
		while (j >= 0 && array1[j] > k) {
			array1[j + 1] = array1[j];
			j--;
		}
		array1[j+ 1] = k;
	}
	cout << array1 << "\n";
	//return 1;
}


void mergesort (char array1[], int length) {  //take in array/ length of array
	int left = array1[0];
//	int mid = array1[];
	int right = array1[length];

	//int tempArray1[temp1size];


}

string encode (char lineArray[],int length ) {
	//if (selection == "Insertion" || "insertion") {
		//string currentLine = readIn(filenameIN);
		//int length = currentLine.length();
		//insertionSort(array1 array1.length());



	//}
	//else if(selection == "Mergesort" || "mergesort") { //mergesort


	//}
	//else {
	//	cout << "Invalid selection" << endl;

	//}
	string encodedLine;
	for (int i = 0; i < length; i++) {

	}
return encodedLine;
}

string readIn (string fileName) { //read a line in from stdin
	std::ifstream infile("fileName");

	std::string line;
	std::getline(infile, line);
	if (line == NULL) {
		printf ("Line is empty");
	}
	return line;
}
void writeToFile (string fileName, string encodedLine)  {
	ofstream outfile;
	outfile.open("output.txt");
	outfile << encodedLine << endl;
	outfile.close();

}

char stringToarray(string line) {
	char convert[line.length];

	for (int i = 0; i < line.length();i++) {
		convert[i] = line[i];

	}
	return convert;
}


int main (string fileName, string sortType) {
	string line;
	if (sortType == "Insertion" || "insertion") {
		while (line != NULL ) {
			line = readIn(fileName);
			char lineArray[line.length()];
			lineArray = stringToarray(line);
			insertionSort(lineArray, line.length());
			string encodedLine = encode(lineArray,line.length());
			writeToFile(fileName, encodedLine);

		}
	}
	else if (sortType == "Mergesort" || "mergesort") {

	}
	else {
		printf("Invalid selection");
	}
}
