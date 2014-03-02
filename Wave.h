#ifndef Wave_h
#define Wave_h

#include "Arduino.h"

class Wave
{
  public:
    Wave(float _t, float _f, float _s, float _a, float _o);
    float t;
    float f;
    float s;
    float a;
    float o;
    float wave();
};

#endif
