#include <unistd.h>
#include <iostream>
#include "gpiofuncties.h"

using namespace std;
#define RODELED 135

int main() {

    cout<<"Hi NSE"<<endl;
    int b=zetPinOpOutput(RODELED); //return waarde of het gelukt is.
    if(b == 0)  {  //if(!b) mag ook. 
    cout<<"Foutje bedankt"<<endl;
       return 0;
    }
    cout<<"b= "<<b<<endl;//return waarde of het gelukt is.
    b=zetPinWaarde(RODELED,1);  //Zet de rode LED aan.
    usleep(1000000);
    b=zetPinWaarde(RODELED,0);  //Zet de rode LED uit.
    cout<<"einde"<<endl;
}
