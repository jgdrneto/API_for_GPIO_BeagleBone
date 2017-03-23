#include <iostream>

#include "GPIO.cpp"

using namespace std;

int main(int argc, char const *argv[])
{		

	GPIO::setup(PORTNUMBER::P9_14,DIRECTION::OUT); 

	GPIO::output(PORTNUMBER::P9_14,VALUE::LOW);

	return 0;
}