//Definições da classe
#ifndef _PORT_
#define _PORT_

#include <string>

#include "Constants.cpp"

//Classe representando as portas
class Port{
	private:
		PORTNAME name;
		std::string physicalAddress;
		VALUE value;
		DIRECTION direction;
	public:

		Port(){/*NULL*/};

		Port(PORTNAME nName, std::string nAddress){
			this->name = nName;
			this->physicalAddress = nAddress;
			this->value = VALUE::NVDEF;
			this->direction = DIRECTION::NDDEF; 
		}

		PORTNAME getPortName(){
			return this->name;
		}

		std::string getPhysicalAddress(){
			return this->physicalAddress;
		} 

		DIRECTION getDirection(){
			return this->direction;
		}

		VALUE getValue(){
			return this->value;
		}

		void setDirection(DIRECTION nDirection){
			this->direction = nDirection;
		}

		void setValue(VALUE value){
			this->value = value;
		}
};

#endif