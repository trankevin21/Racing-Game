#include "Header.h"
class Horse {
private:
    int position[5];
public:
    Horse() {//Set the starting position of the horse
        int i;
        for (i = 0; i < 5; i++) {
            position[i] = 1;
        }
    }
    void advance(int i) {//Randomize how much the horse moves
        position[i] += (rand() % 2);
        return;
    }
    int getPosition(int i) {//Shows the current position
        int pos = position[i];
        return pos;
    }
};
