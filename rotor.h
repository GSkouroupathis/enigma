#if !defined(rotor_h)
#define rotor_h

#include "mappable.h"

class rotor : public mappable {
	
	public:
	rotor(int* rotorConfig, int rotateRate);
	char mapChar(char plainChar, int roundsApplied);
	char mapBackChar(char plainChar, int roundsApplied);
	//test function
	void printstuff();

	protected:
	int* rotorConfig;
	int* rotorReverseConfig;
	int rotateRate;
	int roundsApplied;
	
};

#endif
