void setup() { Serial.begin(9600); }
 
void loop() {  
  static int i = 0;
  Serial.print(i);
    while(i  <= 5);{
      (i = 0, i ++);
    }
  if(i%2 == 0) {
    Serial.println(" is even.");
  } else if(i%2 != 0) {
    Serial.println(" is odd.");
  } else {
    Serial.println(" is neither even nor odd.");
  }

  delay(1000);
}

