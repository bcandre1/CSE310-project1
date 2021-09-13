//============================================================================
// Name        : CSE310P1.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;



int insertionSort (char array1[], int n) { //??? n is length? maybe?
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
	return 1;
}


void mergesort () {  //Unfinished

}

void encode (string selection, string filenameIN, string filenameOUT) {
	if (selection == "Insertion" || "insertion") {

		//int temp = insertionSort(array1 array1.length());



	}
	else if(selection == "Mergesort" || "mergesort") { //mergesort


	}
	else {
		cout << "Invalid selection" << endl;

	}


}

void readIn (string fileName) { //read a line in from stdin
	char fileLine[200];
	//getline()

}

int main () {

}
