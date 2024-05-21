const int pinoled = 22;
const int piscada = 5;

void setup() {
  pinMode(pinoled, OUTPUT);

  for(int i = 0; i < piscada; i++){
      digitalWrite(pinoled, HIGH);
      delay(500);
      digitalWrite(pinoled, LOW);
      delay(500);
    } 
}

void loop() {

    
}