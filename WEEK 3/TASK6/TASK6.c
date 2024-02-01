
#include "TASK6.h"

unsigned int foo (unsigned int n, unsigned int r){
	if (n > 0)
        {
            return((n%r) + foo(n/r, r));
        }
	else return 0;
}

