#include "fikkari.h"

fikkari T1 (5, 6); //luodaan ilmentymä
fikkari T2 (10, 11);
fikkari T3 (3, 9);
void setup () {

}



void loop() {
 T1.handle();
 T2.handle();
 T3.handle();
}
