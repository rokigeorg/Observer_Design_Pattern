//
// Created by Georg Rokita on 02.02.16.
//

#include "SubjectPressButton.h"


SubjectPressButton::SubjectPressButton() {
    value =0;
}


void SubjectPressButton:: attach(Observer *obs) {
    views.push_back(obs);
}

void SubjectPressButton::setVal(int val) {
    value = val;
    notify();
}


int  SubjectPressButton::getVal() {
    return value;
}

void SubjectPressButton::notify() {
    // 5. Publisher broadcasts

    for(int i = 0; i< views.size();i++){
        views[i]->update();
    }

}
