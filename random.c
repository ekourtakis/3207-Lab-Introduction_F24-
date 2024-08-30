#include <stdlib.h>
#include "header.h"

char randchar() {
    return (char) (rand() % 26 + 65); // generates random number between 0 and 25
                               // 'A' corresponds to 65 in ASCII codes, so add 65
}