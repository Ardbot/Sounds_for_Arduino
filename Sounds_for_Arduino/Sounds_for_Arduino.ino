

void setup() {
  pinMode(9, OUTPUT); // Выход на динамик с ограничивающим резистром
}

void loop() { //   Демо режим / DEMO
  triad();
  delay(1000);
  Alarm();
  delay(1000);
  Geiger_counter();
  delay(2000);
}

// Мелодические интервалы / Melodic intervals
void triad() // До Ре Ми
{
  tone(9, 60 , 100);
  delay(200);
  tone(9, 62 , 100);
  delay(200);
  tone(9, 64 , 100);
  delay(500);
}

//  Предупреждения / Warnings
void Alarm()  // Звук тревоги
{
  for (int i = 0; i < 9; i++)
  {
    tone(9, 100 , 300);
    delay(500);
  }
}
void Geiger_counter() // Счетчик Гейгера
{
  for (int g = 0; g < 200; g++)
  {
    int i = random(2, 32);
    tone(9, 20 , i);
    delay(20);
  }
}
