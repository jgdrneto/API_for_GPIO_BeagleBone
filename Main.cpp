#include <iostream>

#include "GPIO.cpp"

using namespace std;

int main(int argc, char const *argv[])
{		

	GPIO::setup(PORTNUMBER::P9_11,DIRECTION::OUT); 

	GPIO::output(PORTNUMBER::P9_11,VALUE::HIGH);

	return 0;
}