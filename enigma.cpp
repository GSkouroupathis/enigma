#include "enigma.h"

enigma::enigma(plugboard* Plugboard, int NoOfRotors, rotor** Rotors, reflector* Reflector)
	:Plugboard(Plugboard), NoOfRotors(NoOfRotors), Rotors(Rotors), Reflector(Reflector) {
	this->roundsApplied = 0;
}

char enigma::encrypt(char plainChar){

		char cypherChar = Plugboard->mapChar(plainChar, roundsApplied);
		for ( int i=0; i<NoOfRotors; i++ ) {
			cypherChar = Rotors[i]->mapChar(cypherChar, roundsApplied);
		}

		cypherChar = Reflector->mapChar(cypherChar, roundsApplied);

		for ( int i=NoOfRotors-1; i>=0; i-- ) {
			cypherChar = Rotors[i]->mapBackChar(cypherChar, roundsApplied);
		}

		cypherChar = Plugboard->mapChar(cypherChar, roundsApplied);
		roundsApplied++;
		return cypherChar;
	}
