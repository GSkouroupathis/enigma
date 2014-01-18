#include "plugboard.h"

plugboard::plugboard(int* plugboardConfig)
:plugboardConfig(plugboardConfig)
{ }

char plugboard::mapChar(char plainChar, int roundsApplied) {

	int plainOrder = plainChar;
	int orderA = 'A';
	int index = plainOrder - orderA;
	char cypherChar = plugboardConfig[index] + orderA;

	return cypherChar;
}
