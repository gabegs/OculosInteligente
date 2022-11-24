//Programa: Óculos Inteligente
//Autores: Grupo 7

int pino_ir = 7;
int pino_buzzer = 10;
int valor_d = 0;
int aux = 0;
int tempo = 1000;
int frequencia = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pino_ir, INPUT);
  pinMode(pino_buzzer, OUTPUT);
}

void loop() {
  int valor_d = digitalRead(pino_ir);
  if (valor_d != 1) {
    for (aux=0;aux<=1;aux++) {
      frequencia=1000;
      tone(pino_buzzer, frequencia, tempo);
      delay(100);
      frequencia=2000;
      tone(pino_buzzer, frequencia, tempo);
      delay(100);
    }
  }
}
