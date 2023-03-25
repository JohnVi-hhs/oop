#include <unistd.h>
#include <iostream>
#include "SingleLed.h"

using namespace std;
#define RODELED 135
#define GROENELED 132
#define GELELED 134

void LedInfo(Led& l) {
     cout<<"De eigenaar is:"<<l.deEigenaar()<<endl;
     cout<<"De Led is aangesloten op pinnen:"<<l.connectie()<<endl;
     cout<<"De status van de Led is:"<<l.ledStatus()<<endl;
}


int main() {

    SingleLed led1(RODELED,"rood","Pietje Puk");
    SingleLed led2(GELELED,"geel");
    Led &lr1(led1);
    lr1.zetAan("rood");
    usleep(1000000);
    led2.zetAan("geel");
    usleep(1000000);
    led1.zetUit();
    usleep(1000000);
    LedInfo(led1);
    LedInfo(led2);
    LedInfo(lr1);
    led2.zetUit();
    return 0;
}
