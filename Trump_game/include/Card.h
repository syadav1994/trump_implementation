///\file
/*!
*  \details     Implementation of Trump game
*  \author    Shubham Yadav (s.yadav@student.utwente.nl)
*  \version   1.0
*  \date      23 November 2017
*/

#ifndef CARD_H
#define CARD_H

#include "TrumpMisc.h"

class Card
{
private:
	SUITS suit; /* Attribute suit of the card*/
	int cardNumber; /* Attribute card number of the card*/
	bool cardValid; /* True when card is still in game\n False when card is won by any team*/
public:
	Card(SUITS, int, bool); 
	Card(); 
	void setSuit(SUITS); 
	SUITS getSuit(void);
	void setCardNumber(int); 
	int getCardNumber(void);
	void setCardValidity(bool); 
	bool getCardValidity(void);
	void printCards(void); 
	~Card(); 
};

#endif
