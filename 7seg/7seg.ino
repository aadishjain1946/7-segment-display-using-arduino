int L0=1,L1=2,L3=3,L4=4,L6=5,L8=6,L9=7,r9=9,r10=10,r11=11,r12=12;
void setup() {
  pinMode(L0, OUTPUT);
  pinMode(L1, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L8, OUTPUT);
  pinMode(L9, OUTPUT);
  pinMode(r9, INPUT);
  pinMode(r10, INPUT);
  pinMode(r11, INPUT);
  pinMode(r12, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(digitalRead(r9) == HIGH){
    digitalWrite(L0, LOW);
  digitalWrite(L1, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L4, HIGH);
  digitalWrite(L6, LOW);
  digitalWrite(L8, LOW);
  digitalWrite(L9, LOW);
  delay(1000);
  digitalWrite(L0, LOW);
  digitalWrite(L1, HIGH);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, HIGH);
  digitalWrite(L6, LOW);
  digitalWrite(L8, HIGH);
  digitalWrite(L9, HIGH);
  delay(1000);
  }
  else{
    digitalWrite(L0, HIGH);
  digitalWrite(L1, HIGH);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, HIGH);
  digitalWrite(L6, HIGH);
  digitalWrite(L8, HIGH);
  digitalWrite(L9, HIGH);
  }
}
