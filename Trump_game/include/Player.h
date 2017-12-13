///\file
/*!
*  \details     Implementation of Trump game
*  \author    Shubham Yadav (s.yadav@student.utwente.nl)
*  \version   1.0
*  \date      23 November 2017
*/

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Card.h"

class Player
{
private:
	ENTITY playerID; /*!< player ID*/
	std::string playerName;/*!< player name*/
	Card *currentCards[13];/*!< array of pointers of cards alloted to a player*/
	TEAM team; /*!< team in which a player belongs*/
	bool isPlaying; /*!< whether player is playing or not*/
	bool isActive;
public:
	Player(bool);
	Player(ENTITY,std::string,TEAM);
	ENTITY getPlayerID(void);
	void setPlayerID(ENTITY);
	std::string getPlayername(void);
	void setPlayername(std::string);
	void setTeam(TEAM);
	TEAM getTeam(void);
	void set5Cards(Card**);
	void setRestCards(void);
	Card** getCards(void);
	void movePlayed(Card*);
	bool getIsPlaying(void);
	void setIsPlaying(bool);
	void setIsActive(bool);
	bool getIsActive(void);
	void printPlayerStatus(void);
	~Player();
};

#endif // !PLAYER_H





