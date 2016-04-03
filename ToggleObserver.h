//
// Created by Georg Rokita on 02.02.16.
//

#ifndef OBSERVER_DESIGN_PATTERN_TOGGLEOBSERVER_H
#define OBSERVER_DESIGN_PATTERN_TOGGLEOBSERVER_H


#include "Observer.h"



class ToggleObserver : public Observer{

public:
    ToggleObserver(SubjectPressButton *mod, int div): Observer(mod, div){}
    void update();
};


#endif //OBSERVER_DESIGN_PATTERN_TOGGLEOBSERVER_H
