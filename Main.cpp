#include <iostream>

#include "GPIO.cpp"

using namespace std;

int main(int argc, char const *argv[])
{		

	//GPIO::setup(PORTNUMBER::P9_01,DIRECTION::OUT);

	cout << GPIO::input(PORTNUMBER::P9_01) << endl;

	return 0;
}