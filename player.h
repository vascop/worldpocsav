#ifndef _player_
#define _player_

#define GOLD 0
#define HP 1
#define SPEED 2
#define WISDOM 3
#define AGILITY 4
#define STRENGHT 5
#define RESISTANCE 6

typedef struct item
{
	char * itemName;
	int itemPosition;
	int itemQuantity;
	struct item * next;
} item;


typedef struct player
{
	char * name;
	char * pass;
	int skills[7];
    char * spelledskills[7];
	int freePoints;
	item * inventory;

} player;

#endif
