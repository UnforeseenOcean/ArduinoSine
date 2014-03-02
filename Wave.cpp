#include "Arduino.h"
#include "Wave.h"

Wave::Wave(float _t, float _f, float _s, float _a, float _o) {
  t = _t;
  f = _f;
  s = _s;
  a = _a;
  o = _o;
}

float Wave::wave() {
  t+=s;
  return sin(f*t)*a + o;
}
