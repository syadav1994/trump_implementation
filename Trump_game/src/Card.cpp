///\file
/*
*  Author    Shubham Yadav (s.yadav@student.utwente.nl)
*  Version   1.0
*  Date      23 November 2017
*  Brief     Implementation of Trump game
*/
#include <iostream>
#include "Card.h"
#include "TrumpMisc.h"


/**
* Constructor with 3 input parameters
* @param suit suit of card
* @param cardnumber card number of a card
* @param validity validity of card
*/
Card::Card(SUITS suit, int cardnumber, bool validity)
{
	this->suit = suit;
	this->cardNumber = cardnumber;
	this->cardValid = validity;
}

/**
* Blank constructor with no input arguments
*/
Card::Card()
{
	//blank constructor
}

/**
* Setter function to set the suit of a card
* @param suit Suit of card
*/
void Card::setSuit(SUITS suit)
{
	this->suit = suit;
}

/**
* Getter function to get the suit of card
* @return Suit of a card
*/
SUITS Card::getSuit(void)
{
	return this->suit;
}

/**
* Setter function to set the number of a card
* @param cardnumber Number of a card
*/
void Card::setCardNumber(int cardnumber)
{
	this->cardNumber = cardnumber;
}

/**
* Getter function to get the number of card
* @return Number of a card
*/
int Card::getCardNumber(void)
{
	return this->cardNumber;
}

/**
* Setter function for setting validity of card
* @param validity the validity of card
*/
void Card::setCardValidity(bool validity)
{
	this->cardValid = validity;
}

/**
* Getter function for getting validity of card
* @return the validity of card
*/
bool Card::getCardValidity()
{
	return this->cardValid;
}

/**
* Function to print attributes of card
*/
void Card::printCards(void)
{
	switch (this->suit)
	{
	case SUITS::HEARTS: std::cout << "H " << this->cardNumber << std::endl;
		break;
	case SUITS::CLUBS: std::cout << "C " << this->cardNumber << std::endl;
		break;
	case SUITS::DIAMONDS: std::cout << "D " << this->cardNumber << std::endl;
		break;
	default: std::cout << "S " << this->cardNumber << std::endl;
		break;
	}
}

/**
* Destructor for class Card
*/
Card::~Card()
{
	std::cout << "Destructor for class Card called" << std::endl;
}
