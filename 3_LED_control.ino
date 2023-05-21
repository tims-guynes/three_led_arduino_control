int LED1 = 10; //pins 10-12 are to be LED outputs
int LED2 = 11;
int LED3 = 12;
int Switch1 = 2;  //pins 2-4 are to be switch inputs
int Switch2 = 3;
int Switch3 = 4;
 
void setup() {
//now setup our input and output pins accordingly
 pinMode(LED1, OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(LED3, OUTPUT);
 pinMode(Switch1, INPUT);
 pinMode(Switch2, INPUT);
 pinMode(Switch3, INPUT);
 
}
 
void loop() {
 //now within loop() we'll take actions based on the status of the switches
 
// if switch 1 is HIGH, LED 1 is HIGH
// if switch 2 is HIGH, LED 2 is HIGH
// if switch 3 is HIGH, LED 3 is HIGH
// if switch 1 and 2 is HIGH, LED 1 is LOW and LED 2 blinks
// if switch 1 and 3 is HIGH, LED 1 blinks and LED 3 is LOW
// if switch 2 and 3 is HIGH, LED 3 blinks, and LED 2 is low
// if switch 1 and 2 and 3 are HIGH, LED 1 blinks morse letter S, LED 2 blinks morse letter O, LED blinks morse letter S

  if ((digitalRead(Switch1) == HIGH) && (digitalRead(Switch2) == HIGH) && (digitalRead(Switch3) == HIGH)){
    morse_letter_s(LED1);
    morse_letter_o(LED2);
    morse_letter_s(LED3); 
    
  }
 
 
}

int morse_letter_s(int LED_select){
  //take LED to use and output the letter in morse code
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(1000);

}

int morse_letter_o(int LED_select){
  //take LED to use and output the letter in morse code
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(1000);

}