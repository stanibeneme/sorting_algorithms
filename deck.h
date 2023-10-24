#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - The enumeration of card suits.
 * @SPADE: Spades suit.
 * @HEART: Hearts suit.
 * @CLUB: Clubs suit.
 * @DIAMOND: Diamonds suit.
 * Project by Stanley Ibeneme
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - The playing card
 *
 * @value: The value of the playing card
 * From "Ace" to "King"
 * Project by Stanley Ibeneme
 * @kind: Kind of the playing card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - The Deck of card
 *
 * @card: Points to card of the node
 * @prev: Points to previous node of the list
 * @next: Points to next node of the list
 * Project by Stanley Ibeneme
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
