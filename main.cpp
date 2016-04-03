#include <iostream>

#include "SubjectPressButton.h"
#include "Observer.h"
#include "ToggleObserver.h"
#include "BlinkObserver.h"


using namespace std;

int main() {

    int func;

    // create the subject
    SubjectPressButton pressedBtn1;

    cout << "Please select functionality:" << endl;
    cout << "Press 1: toggle Led" << endl;
    cout << "Press 2: blink Led" << endl;

    cin >> func;

    if(func == 1){

        ToggleObserver tObs1(&pressedBtn1, 1);
        pressedBtn1.setVal(1);
    }
    else if(func == 2){

        BlinkObserver bObs1(&pressedBtn1, 1);
        pressedBtn1.setVal(2);
    }
    else{
        cout << "No, please!!!" << endl;

    }


    return 0;
}