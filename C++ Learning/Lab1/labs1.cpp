#include <iostream>
#include <cstdlib>
#include <cmath>

bool isLeapYear(int year){

	int holder = year % 4;
	if (holder == 0) {

		holder = year % 100;
		if (holder == 0) {

			holder = year % 400;
			if (holder == 0) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return true;
		}

	}
	else {
		return false;
	}

}

 int Reversed(int testNumber){

	int num = testNumber;
	int hold = 0;
	int send = 0;

	while (!0 == num) {

		send = send * 10;
		hold = num % 10;
		send = send + hold;
		num = num / 10;
	}

	return send;

}

bool isAPalindrome(int testNumber){
	
	int ogNum = testNumber;
	int revNum;
	int paliTest = 0;
	int holder = 0;
	
	revNum = Reversed(testNumber);

	if (revNum == ogNum) {
		return true;
	}
	else {
		return false;
	}

}

bool isAPrimeNumber(int numbertoTest){

	int num = numbertoTest;
	//Wrong. Redo
	// num / num  || 
	if (num % 2 == 1 || num == 2  ) {
		return true;
	}
	else {
		return false;
	}
}

int input5CharsConvertToInt() {

	int returnInt = 0;
	char inputChar;

	int giveTotal = 0;

	for (int i = 0; i < 5; i++) {

		std::cin >> inputChar;

		switch (inputChar) {
		case '0':
			returnInt = 0;
			break;
		case '1':
			returnInt = 1;
			break;
		case '2':
			returnInt = 2;
			break;
		case '3':
			returnInt = 3;
			break;
		case '4':
			returnInt = 4;
			break;
		case '5':
			returnInt = 5;
			break;
		case '6':
			returnInt = 6;
			break;
		case '7':
			returnInt = 7;
			break;
		case '8':
			returnInt = 8;
			break;
		case '9':
			returnInt = 9;
			break;

		default:
			returnInt = 0;
			break;
		}

		giveTotal = giveTotal * 10;
		giveTotal = giveTotal + returnInt;

	}

	return giveTotal;
}

int convertBinarytoDecimal(int binaryNumber){

	int bin = binaryNumber;
	int conTotal = 0;
	int get = 0;
	int power = 0;
	int temp = 0;

	while (!bin == 0) {

		get = bin % 10;

		std::cout << get << "\n";

		if (get == 1) {
			temp = pow(2, power);

			std::cout << temp << "\n";
			conTotal = conTotal + temp;

		}
		bin = bin / 10;

		power++;

	}
	return conTotal;
}

void drawRightAngledTriangle(){
	
	int stop = 5;

	for (int number1 = 0; number1 < stop; number1++) {

		std::cout << "\n";

		for (int number2 = 0; number2 < number1; number2++) {
			std::cout << "A";

		}

	}

}

void drawIsocelesTriangle(){

	int max1 = 8;
	int max2 = 5;
	int conMax = 0;
	int dec = -2;

	for (int number1 = 0; number1 < max1; number1++) {

		conMax = number1;

		std::cout << "\n";

		if (max2 <= number1) {
			conMax = conMax + dec;
			dec = dec + -2;
		}

		for (int number2 = 0; number2 < conMax; number2++) {

			std::cout << "A";
		}

	}
}

void drawIsocelesTriangle2(){
	
	int max1 = 8;
	int mid = 5;
	int conMax = 0;

	for (int number1 = 1; number1 < max1; number1++) {

		conMax = conMax + ((number1 / mid) * -2) + 1;

		for (int number2 = 0; number2 < conMax; number2++) {

			std::cout << "A";
		}
		std::cout << "\n";
	}

}


// changing anything below here equals 0 marks!!!!!!!!!​
int main()
{
	std::cout << "Leapyear" << std::endl;
	if (!isLeapYear(1700))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isLeapYear(1600))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isLeapYear(2016))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	std::cout << "NumberReversed" << std::endl;
	if(Reversed(123) == 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

		if (Reversed(1) == 1)
		{
			std::cout << "yes" << std::endl;
		}
		else {
			std::cout << "no" << std::endl;
		}
	if (Reversed(1234) != 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	
	std::cout << "Palindrome" << std::endl;
	if (isAPalindrome(1))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isAPalindrome(121))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (!isAPalindrome(1213))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "Prime Number" << std::endl;
	if (isAPrimeNumber(3))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isAPrimeNumber(2147483647))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (!isAPrimeNumber(4))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "Binary to Decimal" << std::endl;
	if (convertBinarytoDecimal(110) == 6)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (convertBinarytoDecimal(111) == 7)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "5 chars to int" << std::endl;
	int convertedInt = input5CharsConvertToInt();
	std::cout << convertedInt << std::endl;

	std::cout << "Triangles" << std::endl;
	drawRightAngledTriangle();
	drawIsocelesTriangle();
	std::cout << "Triangle Extra" << std::endl;
	drawIsocelesTriangle2();

}
