int timestoblink = 1;  // make it global so both functions can see it

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  timestoblink = timestoblink + 3 * 4;  // now timestoblink = 13
}

void loop() { 
 while (timestoblink > 4) {
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(1000); 
    digitalWrite(LED_BUILTIN, LOW); 
    delay(1000);
  }

}