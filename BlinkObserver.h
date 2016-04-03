//
// Created by Georg Rokita on 02.02.16.
//

#ifndef OBSERVER_DESIGN_PATTERN_BLINKOBSERVER_H
#define OBSERVER_DESIGN_PATTERN_BLINKOBSERVER_H


#include "Observer.h"
#include <iostream>
using namespace std;


class BlinkObserver {

public:

    BlinkObserver(SubjectPressButton *mod, int div): Observer(mod, div){}
    void update() ;

};


#endif //OBSERVER_DESIGN_PATTERN_BLINKOBSERVER_H
