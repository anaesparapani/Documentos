//constante para o pino da buzzer
#define pinoBuzzer 2

//constante do led
#define pinoLedVermelho 3

#define pinoLedVerde 5

//constante do botão
#define pinoButao 4

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoLedVerde, OUTPUT);
  pinMode(pinoButao, INPUT);

  delay(1000);  //parada estratégica
}

void loop() {
  if (digitalRead(pinoButao) == 1) {
    tone(pinoBuzzer, 523);//Nota musical dó
    digitalWrite(pinoLedVermelho, HIGH);
    digitalWrite(pinoLedVerde, HIGH);
  } 

  else if (digitalRead(pinoButao) == 0) {
    noTone(pinoBuzzer);                  //desliga a buzzer
    digitalWrite(pinoLedVermelho, LOW);  //apaga o LED
    digitalWrite(pinoLedVerde, LOW);
  }
}
