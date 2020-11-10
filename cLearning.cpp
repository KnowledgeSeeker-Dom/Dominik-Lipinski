#include <iostream>
#include <cstdlib>

int main(){
	
	int numGiraffes = 0;
	int numElephants = 0;
	int holder = 0;

	std::cout << "Enter number for Giraffes: \n";
	std::cin >> numGiraffes;
	std::cout << "Enter number for Elephants: \n ";
	std::cin >> numElephants;
	
	holder = numElephants;
	numElephants = numGiraffes;
	numGiraffes = holder;
	
	std::cout << numGiraffes << std::endl;
	std::cout << numElephants << std::endl;


	int numberToTest = 0;
	std::cout << "Human enter a number \n";
	std::cin >> numberToTest;

	if (numberToTest % 2 == 1) {
		std::cout << "Number is even \n ";
	}
	else {
		std::cout << "Number is odd \n";
	}

	int parcelSize1 = 0;
	int parcelSize2 = 0;
	int parcelSize3 = 0;


	std::cout << "Enter Parcel Size \n";
	std::cin >> parcelSize1;

	std::cout << "Enter Parcel Size \n";
	std::cin >> parcelSize2;

	std::cout << "Enter Parcel Size \n";
	std::cin >> parcelSize3;

	//clean up
	if (parcelSize1 > parcelSize2 && parcelSize1 > parcelSize3) {
		std::cout << "Largest Parcel is: " << parcelSize1 <<"\n";
	}
	else if(parcelSize2 > parcelSize1 && parcelSize2 > parcelSize3) {
		std::cout << "Largest Parcel is: " << parcelSize2 << "\n";
	}
	else{
		std::cout << "Largest Parcel is: " << parcelSize3 << "\n";
	}

	int max = 13;
	int total = 0;

	for (int number = 1; number < max ; number++) {

		for (int number2 = 1; number2 < max;  number2++)
		{
			total = number2 * number;
			std::cout << total << "=" << number2 << "x" << number << "\n";

		}

	}

	// Dominik Lipinski | C00242052 | Practical 0.5
}
