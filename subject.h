//
//  subject.h
//

//

#ifndef subject_h
#define subject_h
#include "Observer.h"
#include <vector>

#pragma once

class Subject {
    private:
        std::vector<Observer*> observers;

    public:
        void attach(Observer& observer);
        void dataChanged();
        void notifyObservers();
};

void Subject::attach(Observer& observer) {
    observers.push_back(&observer);
}

void Subject::dataChanged() {
    notifyObservers();
}

void Subject::notifyObservers() {
    for (Observer* ob : observers) {
        ob->update();
    }
}


#endif /* subject_h */
