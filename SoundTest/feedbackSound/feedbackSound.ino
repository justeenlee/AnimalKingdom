/*

   0919 test on match and mismatch feedback

*/


void setup() {
}

void loop() {
  match();
}


void playMismatch(){
  tone(11, 65, 50);
  delay(100);
  tone(11, 65, 400);
  delay(2000);
}

void playMmatch(){
  tone(11, 783, 50);
  delay(100);
  tone(11, 1318, 400);
  delay(2000);
}



void c1(){
  tone(11, 33, 300);
  delay(2000);
}

void ed(){
  noTone(11);
  tone(11, 1318, 300);
  delay(300);
  tone(11, 1174, 300);
  delay(2000);
}

void af(){
  noTone(11);			
  tone(11, 880, 300);
  delay(100);
  tone(11, 1396, 300);
  delay(1500);
}

void ec(){
  noTone(11);			
  tone(11, 1046, 300);
  delay(100);
  tone(11, 1318, 300);
  delay(2000);
}

void ding(){
  tone(11, 1174.66, 500);
  delay(1500);
}
