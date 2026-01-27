#define LED_PIN 2
#define SWITCH_PIN 3

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN,OUTPUT); //output
  pinMode(SWITCH_PIN,INPUT_PULLUP); //input with pullup resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(SWITCH_PIN) == LOW){
    delay(200); //debounce
    digitalWrite(LED_PIN,HIGH); //led on
    delay(200); // wait 2 seconds
    digitalWrite(LED_PIN,LOW); // led off
  }
}
