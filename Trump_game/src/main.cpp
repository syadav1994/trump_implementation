///\file
/*
*  Author    Shubham Yadav (s.yadav@student.utwente.nl)
*  Version   1.0
*  Date      23 November 2017
*  Brief     Implementation of Trump game
*/

#include <iostream>
#include <clocale>
#include <string>
#include "Card.h"
#include "CardManager.h"
#include "Player.h"
#include "CommandLineUserInterface.h"
#include "RoundManager.h"
#include "GameManager.h"
#include "Message.h"

/**
* Main function which controls the execution of program
*/
int main()
{
	Message tx;
	Message rx;
	GameManager gamemanager(&tx, &rx);
	gamemanager.handleMessage();

	std::cin.get();
	return 0;
}
