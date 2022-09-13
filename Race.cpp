#include "Header.h"
#include "Horse.cpp"

class Race {
private:
    Horse h;
    int length;
    int horseNum;

public:
    Race() {
        length = 15;
        horseNum = 5;
    }


    void printLane() {//Prints out the race for user to see
        int horse;

        for (horse = 0; horse < horseNum; horse++) {
            int dots;
            int front = h.getPosition(horse) - 1;
            int back = length - h.getPosition(horse);

            for (dots = 0; dots < front; dots++) {
                std::cout << ".";
            }

            std::cout << horse;

            for (dots = 0; dots < back; dots++) {
                std::cout << ".";
            }

            std::cout << "\n";
        }

        std::cout << "\n\n";

        return;
    }
    void start() {
        int win = 0;
        int i;
        while (win == 0) {//Loops until a horse wins.
            for (i = 0; i < horseNum; i++) {
                h.advance(i);//Generates the random number from 0 - 1 to add to each horse
                printLane();
                if (h.getPosition(i) == length) {//Stops program when a horse finishes and declares a winner
                    std::cout << "Horse " << i << " wins!\n";
                    win = 1;
                    break;
                }
            }
        }

    }
};
