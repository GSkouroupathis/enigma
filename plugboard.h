#if !defined(plugboard_h)
#define plugboard_h

#include "mappable.h"

//The plugboard class
class plugboard : public mappable {

	public:
	plugboard(int* plugboardConfig);
	char mapChar(char plainChar, int roundsApplied);
		
	protected:
	int* plugboardConfig;
};

#endif
