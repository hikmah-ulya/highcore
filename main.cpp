#include <iostream>
#include "player.h"
#include "highscore.h"
#include "subject.h"

using namespace std;

int main() {
    cout << "SCORE PEMAIN" << endl << endl;

    Subject* subject = new Subject();

    Highscore* highscore = new Highscore(*subject);

    Player* player2 = new Player(*subject, " R ", 300);
    highscore->addPlayer(*player2);
    subject->notifyObservers();

    Player* player1 = new Player(*subject, " J ", 250);
    highscore->addPlayer(*player1);
    subject->notifyObservers();

    Player* player3 = new Player(*subject, " S ", 400);
    highscore->addPlayer(*player3);
    subject->notifyObservers();

    return 0;
}

