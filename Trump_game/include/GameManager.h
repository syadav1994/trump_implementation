///\file
/*!
*  \details   Implementation of Trump game
*  \author    Shubham Yadav (s.yadav@student.utwente.nl)
*  \version   1.0
*  \date      23 November 2017
*/

#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "TrumpMisc.h"
#include "CommandLineUserInterface.h"
#include "CardManager.h"
#include "RoundManager.h"
#include "Player.h"
#include "Message.h"
#include "Card.h"

class GameManager
{
private:
	int playerCount;
	bool canPlayMove;
	SUITS currentSuit;
	int chanceCount;
	Message* txBuffer;
	Message* rxBuffer;
	CommandLineUserInterface* printer;
	CardManager* cardManager;
	RoundManager* roundManager;
	Player* playerList[4];
	Card* cardPlayed[4];
	void sendAckMessage(ENTITY,TEAM);
	void send5Cards(ENTITY,Card**);
	void sendRemainingCards(void);
	void broadcastTrump(void);
	void sendReqForTrump(void);
	void msgToPlayMove(ENTITY player);
	void broadcastMove(int, SUITS, int);
	void broadcastPlayerInfo(Player**);
	void broadcastRoundResult(void);
	void broadcastGameOver(char);
	void broadcastWinner(void);

public:
	GameManager(Message* , Message*);
	void handleMessage(void);
	void playerAdd(void);
	~GameManager();
};

#endif // !GAME_MANAGER_H