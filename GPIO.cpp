//Definições da classe
#ifndef _GPIO_
#define _GPIO_

#include <iostream>
#include <map>

#include "Port.cpp"

#define ARQUIVO_TEMP "temp.txt" //Arquivo temporário

class GPIO{
	private:

		static GPIO *instance;

		std::map<PORTNUMBER, Port> map;

		GPIO(){
			map.insert(std::pair<PORTNUMBER, Port>(PORTNUMBER::P9_01,Port(PORTNAME::DGND,"gpiodgnd")));
		}

		static GPIO& getInstance(){
			if(!instance) instance = new GPIO();
			return *instance;
		}
		
	public:
		static DIRECTION getDirection(PORTNUMBER pNumber){

			return GPIO::getInstance().map[pNumber].getDirection();

		}

		static void setup(PORTNUMBER number, DIRECTION direction){
			GPIO::getInstance().map[number].setDirection(direction);
		}

		static VALUE input(PORTNUMBER number){
			
			DIRECTION v = GPIO::getInstance().map[number].getDirection();

			if(v != DIRECTION::NDDEF){
				return GPIO::getInstance().map[number].getValue();
			}
				
			std::cerr << "Not defined direction for port " << portNumberToString(number) <<", use the function setup() for this" << std::endl; 
			exit(EXIT_FAILURE);	
			return VALUE::NVDEF;
		}

		static void output(PORTNUMBER number, VALUE value){
			GPIO::getInstance().map[number].setValue(value);
		}
};	

//Definindo o ponteiro a ser alocado no programa principal
GPIO *GPIO::instance;

#endif