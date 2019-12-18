#define LED 6
#define PAINIKE 5
#define TASO1 180
#define TASO2 100
void setup () {
   pinMode (LED, OUTPUT);
   pinMode (PAINIKE, INPUT_PULLUP);
}

void loop () {
  if (digitalRead (PAINIKE)==LOW){
    analogWrite (LED, TASO1);
  }else{
    digitalWrite(LED, HIGH);
  }
}
