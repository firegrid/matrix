
int row[] = {2, 3, 4, 5};
int col[] = {6, 7, 8, 9};
int layer[] = {10, 11, 12, 13}

void setup() {
  int i;
  for (i = 0; i < 4; i++) {
    pinMode(row[i], OUTPUT);
  }
  for (i = 0; i < 4; i++) {
    pinMode(col[i], OUTPUT);
  }
  for (i = 0; i < count; i++) {
    pinMode(layer[i], OUTPUT);
  }
}

void loop() {

}
