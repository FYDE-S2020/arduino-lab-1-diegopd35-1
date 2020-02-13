//hello 

#define LED_PIN 2
int interval= 250; 

void setup() {
  // put your setup code here, to run once:
pinMode(LED_PIN, OUTPUT);
}
void timedBlink (int interval){
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(interval);                       // wait for a second
}
  
void dimmer(int freq, int duty) {
    int period, onTime, offTime;
    period = 1000/freq;
    onTime = period * duty / 100;
    offTime = period - onTime;
    digitalWrite(LED_PIN, HIGH);
    delay(onTime);
    digitalWrite(LED_PIN, LOW);
    delay(offTime);
}
void loop() {
  timedBlink (interval);
  if (interval == 1000) {
    interval= 250;
  }
  else{
    interval*=2;
  } 
}
  // put your main code here, to run repeatedly:
 
