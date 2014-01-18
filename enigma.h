#if !defined(enigma_h)
#define enigma_h

#include "plugboard.h"
#include "reflector.h"
#include "rotor.h"

class enigma {
	
	public:
	enigma(plugboard* Plugboard, int NoOfRotors, rotor** Rotors, reflector* Reflector);
	char encrypt(char plainChar);
	
	private:
	//roundsApplied holds the number of encryption done on characters
	int roundsApplied;
	plugboard* Plugboard;
	int NoOfRotors;
	rotor** Rotors;
	reflector* Reflector;
	
};

#endif
