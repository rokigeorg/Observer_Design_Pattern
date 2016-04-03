//
// Created by Georg Rokita on 02.02.16.
//

#include "Observer.h"

Observer::Observer(SubjectPressButton *mod, int div) {
    model = mod;
    denom = div;
    // 4. Observers register themselves with the Subject
    model->attach(this);
}

SubjectPressButton *Observer::getSubject() {
    return model;
}

int Observer::getDivisor(){
    return denom;
}