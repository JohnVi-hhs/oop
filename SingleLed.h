#ifndef SINGLELED_H
#define SINGLELED_H
#include <string>

using namespace std;
#include "Led.h"
#pragma once

class SingleLed : public Led
{
public:
  /*
  Zet hier je eigen methoden en constructors neer
  */
private:
    string kleur;
    int pinNr;
    int status;

};

#endif