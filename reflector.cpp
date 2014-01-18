#include "reflector.h"

reflector::reflector() {
	//nothing
}

char reflector::mapChar(char plainChar, int roundsApplied) {
	int plainOrder = plainChar;
	int orderA = 'A';
	char cypherChar = orderA + ((plainOrder - orderA + 13) % 26);
	return cypherChar;
}
