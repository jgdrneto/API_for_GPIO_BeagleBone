#include <iostream>

#include "GPIO.cpp"

using namespace std;

int main(int argc, char const *argv[])
{		

	GPIO::setup(PORTNUMBER::P9_11,DIRECTION::IN);

	cout << GPIO::input(PORTNUMBER::P9_11) << endl;

	return 0;
}