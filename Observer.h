//
// Created by Georg Rokita on 02.02.16.
//

#ifndef OBSERVER_DESIGN_PATTERN_OBSERVER_H
#define OBSERVER_DESIGN_PATTERN_OBSERVER_H

#include "SubjectPressButton.h"

class Observer {
    // 2. "dependent" functionality
    SubjectPressButton *model;
    int denom;
public:
    Observer(SubjectPressButton *mod, int div) ;
    virtual  void update() = 0;
protected:
    SubjectPressButton *getSubject() ;
    int getDivisor() ;
};


#endif //OBSERVER_DESIGN_PATTERN_OBSERVER_H
