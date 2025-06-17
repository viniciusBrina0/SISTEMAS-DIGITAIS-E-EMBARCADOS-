#define botao1 2
#define botao2 3
#define botao3 5
#define led1 9
#define led2 10
#define led3 11
#define led4 12

void setup() {
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 if ((digitalRead(botao1) == 0 && digitalRead(botao2) == 0)){
  digitalWrite(led1,1);
} else {
  digitalWrite(led1, 0);
}

}
