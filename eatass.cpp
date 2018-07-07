#include <iostream>
#include <string>
#include <vector>
#define SMALL_BUFFER (20)

using namespace std;

std::vector<std::string> init(void) {
	//initialise string vect
	std::vector<std::string> vect;

	//add string values to vect
	vect.push_back("Eat ass");
	vect.push_back("Suck a dick");
	vect.push_back("And sell drugs");

	//return initialized vect
	return vect;
}

void print( std::vector<std::string> vect) {
	//loop through given vect
	for (int i = 0; i < vect.size(); i += 1) {
		//print contents of vect indexed by i
		cout << vect[i];
		cout << "\n";
	}
}

int main(void) {
	//print a freshly initialised vector
	print(init());
	//terminate program
	return 0;
}
