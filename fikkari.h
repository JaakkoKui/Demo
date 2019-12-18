#ifndef FIKKARI_H
#define FIKKARI_H

#include <Arduino.h>

#define TASO1 100
#define TASO2 40
#define LEDON 180
#define LEDOFF 0
#define FILTER 20


class fikkari
{
  public:
    fikkari(int P, int L); //Konstruktori
    void handle();
   private:
   bool buttonPressed();
   void changeState();
   int _oldState; // Painikkeen tilojen seurantaa varten
   int _valaistusTaso = LEDOFF;
   int _P, _L; //liitännät
};



#endif FIKKARI_H
