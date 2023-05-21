int LED1 = 10; //pins 10-12 are to be LED outputs
int LED2 = 11;
int LED3 = 12;
int Switch1 = 4;  //pins 2-4 are to be switch inputs
int Switch2 = 3;
int Switch3 = 2;
 
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
// if switch 1 and 2 is HIGH, hello world
// if switch 1 and 3 is HIGH, 
// if switch 2 and 3 is HIGH, 
// if switch 1 and 2 and 3 are HIGH, SOS

  // all switch on - SOS
  if ((digitalRead(Switch1) == HIGH) && (digitalRead(Switch2) == HIGH) && (digitalRead(Switch3) == HIGH)){
    morse_letter_s(LED1);
    morse_letter_o(LED2);
    morse_letter_s(LED3); 
    
  }
  //switch 1 and 2 on - hello world
  else if ((digitalRead(Switch1) == HIGH) && (digitalRead(Switch2) == HIGH)){
    morse_letter_h(LED1);
    morse_letter_e(LED1);
    morse_letter_l(LED1);
    morse_letter_l(LED1);
    morse_letter_o(LED1);
    delay(500);
    morse_letter_w(LED2);
    morse_letter_o(LED2);
    morse_letter_r(LED2);
    morse_letter_l(LED2);
    morse_letter_d(LED2);
  }
  //switch 1 and 3 on - 
  else if ((digitalRead(Switch1) == HIGH) && (digitalRead(Switch3) == HIGH)){
    //Dont Panic
    morse_letter_d(LED1);
    morse_letter_o(LED1);
    morse_letter_n(LED1);
    morse_letter_t(LED1);
    delay(500);
    morse_letter_p(LED3);
    morse_letter_a(LED3);
    morse_letter_n(LED3);
    morse_letter_i(LED3);
    morse_letter_c(LED3);
  }
  //switch 2 and 3 on -
  else if ((digitalRead(Switch1) == HIGH) && (digitalRead(Switch2) == HIGH)){
    // switchted on
    morse_letter_s(LED1);
    morse_letter_w(LED1);
    morse_letter_i(LED1);
    morse_letter_t(LED1);
    morse_letter_c(LED1);
    morse_letter_h(LED1);
    morse_letter_e(LED1);
    morse_letter_d(LED1);
    delay(500);
    morse_letter_o(LED2);
    morse_letter_n(LED2);
  }
}

int morse_letter_a(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(1000);
}

int morse_letter_c(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(1000); 
}

int morse_letter_d(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(250);
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

int morse_letter_e(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(100);  
}

int morse_letter_h(int LED_select){
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
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(1000);  
}

int morse_letter_i(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(1000);
}

int morse_letter_l(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(250);
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

int morse_letter_n(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(250);
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

int morse_letter_p(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(1000); 
}

int morse_letter_r(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(100);
  digitalWrite(LED_select, HIGH);
  delay(100);
  digitalWrite(LED_select, LOW);
  delay(1000);
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
int morse_letter_t(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(250);
  digitalWrite(LED_select, LOW);
  delay(1000);
}


int morse_letter_w(int LED_select){
  digitalWrite(LED_select, HIGH);
  delay(100);
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