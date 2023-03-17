const int led[10] = {2,3,4,5,6,7,8,9} ;


void setup() {
  
  for(int i=0;i<8;i++){
    pinMode(led[i],OUTPUT);
  }
  pinMode(11,INPUT);
  pinMode(12,INPUT);

}

void loop() {
  
  // Flashing Leds 
  for(int i=0;i<8;i++){    
    digitalWrite(led[i],HIGH);
    delay(7);
  }  
delay(500);
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      digitalWrite(led[j],LOW);
  }
  digitalWrite(led[i],HIGH);
  delay(500);
}

  for(int i=7;i>=0;--i){
    for(int j=0;j<8;j++){
      digitalWrite(led[j],LOW);
  }
  digitalWrite(led[i],HIGH);
  delay(500);
}

// 2 LEDs converging and diverging every 500ms
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      digitalWrite(led[j],LOW);
  }
  digitalWrite(led[i],HIGH);
  digitalWrite(led[7-i],HIGH);
  delay(500);
}

// Ping Pong effect (right to left)
  if (digitalRead(11)==1 && digitalRead(12)==0) {
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[i],HIGH);
    delay(500);
  }   
  for(int i=7;i>=0;--i){
    for(int j=0;j<8;j++){
      digitalWrite(led[j],LOW);
  }
    digitalWrite(led[i],HIGH);
    delay(500);
}
  }
//Ping Pong effect (left to right )
  if (digitalRead(12)==1 && digitalRead(11)==0){
      for(int i=7;i>=0;--i){
    for(int j=0;j<8;j++){
      digitalWrite(led[j],LOW);
  }
    digitalWrite(led[i],HIGH);
    delay(500);
}
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[i],HIGH);
    delay(500);
  } 
  }

  // Snake effect
  for(int j=0;j<8;j++){
    digitalWrite(led[j],LOW);
  }  
  for(int i=0;i<8;i++){
    digitalWrite(led[i],HIGH);  
    delay(500);     
  }    
}  
