#include "TASK 1.h"

int digits_reversed(int NUM) {

int digits_reversed =0;
    while(NUM != 0){
        int reminder = NUM %10;
        digits_reversed = digits_reversed*10 + reminder;
        NUM /=10;
    }

        return digits_reversed ;

}


