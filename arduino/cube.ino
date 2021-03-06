/*
 * Cube.ino 4x4x4 cube model driving code
 * row with digital HIGH & column with digital LOW to turn ON LED
 */
#define MATRIX_SIZE 4

int row[] = {2, 3, 4, 5};
int col[] = {6, 7, 8, 9};
int layer[] = {10, 11, 12, 13}

void setup() {
  int i;
  for (i = 0; i < MATRIX_SIZE; i++) {
    pinMode(row[i], OUTPUT);
  }
  for (i = 0; i < MATRIX_SIZE; i++) {
    pinMode(col[i], OUTPUT);
  }
  for (i = 0; i < MATRIX_SIZE; i++) {
    pinMode(layer[i], OUTPUT);
  }
}

void loop() {

}
void turnAllOff() {
  int i;
  for (i = 0; i < MATRIX_SIZE; i++) {
    digitalWrite(row[i], 0);
  }
  for (i = 0; i < MATRIX_SIZE; i++) {
    digitalWrite(col[i], 0);
  }
  for (i = 0; i < MATRIX_SIZE; i++) {
    digitalWrite(layer[i], 0);
  }
}
void turnAllOn() {
  int i;
  for (i = 0; i < MATRIX_SIZE; i++) {
    digitalWrite(row[i], 1);
  }
  for (i = 0; i < MATRIX_SIZE; i++) {
    digitalWrite(col[i], 0);
  }
  for (i = 0; i < MATRIX_SIZE; i++) {
    digitalWrite(layer[i], 1);
  }
}
