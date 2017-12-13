///\file
/*!
*  \details     Implementation of Trump game
*  \author    Shubham Yadav (s.yadav@student.utwente.nl)
*  \version   1.0
*  \date      23 November 2017
*/

#ifndef CARD_MANAGER_H
#define CARD_MANAGER_H

#include "Card.h"
#include "TrumpMisc.h"

class CardManager
{
private:
	Card *allCards[52]; /*array of pointers of objects of type card*/
public:
	CardManager(void);
	void shuffleCards(void);
	Card** getshuffledCards(void);
	void printCards(void);
	~CardManager(void);
};


#endif // !CARD_MANAGER_H




