// Definição dos pinos para cada segmento do display
const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;
const int dp = 9;

// Matriz para representar os números de 0 a 9
const int numeros[10][8] = {
  {1, 1, 1, 1, 1, 1, 0, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1, 0}, // 2
  {1, 1, 1, 1, 0, 0, 1, 0}, // 3
  {0, 1, 1, 0, 0, 1, 1, 0}, // 4
  {1, 0, 1, 1, 0, 1, 1, 0}, // 5
  {1, 0, 1, 1, 1, 1, 1, 0}, // 6
  {1, 1, 1, 0, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1, 0}, // 8
  {1, 1, 1, 1, 0, 1, 1, 0}  // 9
};

void setup() {
  // Define os pinos como saída
  for (int i = 2; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int num = 0; num <= 9; num++) {
    for (int seg = 0; seg < 8; seg++) {
      digitalWrite(2 + seg, numeros[num][seg]);
    }
    delay(1000); // Espera 1 segundo antes de exibir o próximo número
  }
}