//
// Created by Georg Rokita on 02.02.16.
//

#ifndef OBSERVER_DESIGN_PATTERN_SUBJECTPRESSBUTTON_H
#define OBSERVER_DESIGN_PATTERN_SUBJECTPRESSBUTTON_H

#include <vector>

using namespace std;


class SubjectPressButton {
private:

    vector <class Observer * > views;
    int value;

public:
    SubjectPressButton();
    void attach(Observer *obs);
    void setVal(int val) ;
    int getVal();
    void notify();

};


#endif //OBSERVER_DESIGN_PATTERN_SUBJECTPRESSBUTTON_H
