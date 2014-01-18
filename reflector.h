#if !defined(reflector_h)
#define reflector_h

#include "mappable.h"

//The reflector class
class reflector : public mappable {
	
	public:
	reflector();
	char mapChar(char plainChar, int roundsApplied);	
};

#endif
