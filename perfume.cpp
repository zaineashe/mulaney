#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

class Fluid {
	private:
		std::string contents;
	public:
		void Grab(void) {
			//initialise name vector for both kinds of fluids
			std::vector<std::string> fluids;
			fluids.push_back("Whisky");
			fluids.push_back("Perfume");
			//boolean coin flip, assign value of contents var based on result
			srand(time(NULL));
			contents = fluids[round(rand() % 2)];
		}
		std::string Contents(void) {
			//return contents of fluid to caller
			return contents;
		}
		void Drink(void) {
			//print private contents string
			cout << "It's " << contents << "\n";
		}
};
int main(void) {

	//initialise fluid
	Fluid fluid;
	//ask the killer question
	cout << "Hey, is this whisky or perfume? \n";
	
	fluid.Grab();

	//check to see if class' private string is Whisky or Perfume
	if (fluid.Contents() == "Whisky" || fluid.Contents() == "Perfume") {
		//drink that shit anyway
		fluid.Drink();
	}
	//terminate program
	return 0;
}
