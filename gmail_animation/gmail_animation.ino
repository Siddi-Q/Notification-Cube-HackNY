int L1 = 10;
int L2 = 2;
int L3 = 3;
int L4 = 4;
int L5 = 5;
int L6 = 6;
int L7 = 7;
int L8 = 8;
int L9 = 9;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(L1, OUTPUT);
pinMode(L2, OUTPUT);
pinMode(L3, OUTPUT);
pinMode(L4, OUTPUT);
pinMode(L5, OUTPUT);
pinMode(L6, OUTPUT);
pinMode(L7, OUTPUT);
pinMode(L8, OUTPUT);
pinMode(L9, OUTPUT);

} //close setup


void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()){
int state = Serial.parseInt();
  if(state == 1){
    Serial.print("it works");
    notifyM();
  }

}// serial close
}


void notifyM(){
  //spin
  printS1();
  printS2();
  printS3();
  printS4();
  
  printS1();
  printS2();
  printS3();
  printS4();
  
  printS1();
  printS2();
  printS3();
  printS4();
  
  //create M- mail
  printM1();
  printM2();
  printM3();
  printM4();
  printM5();
  printM6();
  printM7();
  
  //blink
   printM();
  delay(1000);
  Serial.println("on ");
  
  printOff();
  delay(1000);
    Serial.println("off ");
  
   printM();
  delay(1000);
  Serial.println("on ");
  
  printOff();
  delay(1000);
    Serial.println("off ");
  
   printM();
  delay(1000);
  Serial.println("on ");
  
  printOff();
  delay(1000);
    Serial.println("off ");
  
  
  printM();
  delay(1000);
  Serial.println("on ");
  
  printOff();
  delay(1000);
    Serial.println("off ");
  
  
  Serial.println("stay still");
  printM();
  delay(5000);
  
}

void printM1(){
digitalWrite(L1, LOW);
digitalWrite(L2, LOW);
digitalWrite(L3, LOW);
digitalWrite(L4, LOW);
digitalWrite(L5, LOW);
digitalWrite(L6, LOW);
digitalWrite(L7, HIGH);
digitalWrite(L8, LOW);
digitalWrite(L9, LOW);
  delay(1000);
}

void printM2(){
digitalWrite(L1, LOW);
digitalWrite(L2, LOW);
digitalWrite(L3, LOW);
digitalWrite(L4, HIGH);
digitalWrite(L5, LOW);
digitalWrite(L6, LOW);
digitalWrite(L7, HIGH);
digitalWrite(L8, LOW);
digitalWrite(L9, LOW);
  delay(1000);
}

void printM3(){
digitalWrite(L1, HIGH);
digitalWrite(L2, LOW);
digitalWrite(L3, LOW);
digitalWrite(L4, HIGH);
digitalWrite(L5, LOW);
digitalWrite(L6, LOW);
digitalWrite(L7, HIGH);
digitalWrite(L8, LOW);
digitalWrite(L9, LOW);
  delay(1000);
}

void printM4(){
digitalWrite(L1, HIGH);
digitalWrite(L2, LOW);
digitalWrite(L3, LOW);
digitalWrite(L4, HIGH);
digitalWrite(L5, HIGH);
digitalWrite(L6, LOW);
digitalWrite(L7, HIGH);
digitalWrite(L8, LOW);
digitalWrite(L9, LOW);
  delay(1000);
}

void printM5(){
digitalWrite(L1, HIGH);
digitalWrite(L2, LOW);
digitalWrite(L3, HIGH);
digitalWrite(L4, HIGH);
digitalWrite(L5, HIGH);
digitalWrite(L6, LOW);
digitalWrite(L7, HIGH);
digitalWrite(L8, LOW);
digitalWrite(L9, LOW);
  delay(1000);
}

void printM6(){
digitalWrite(L1, HIGH);
digitalWrite(L2, LOW);
digitalWrite(L3, HIGH);
digitalWrite(L4, HIGH);
digitalWrite(L5, HIGH);
digitalWrite(L6, HIGH);
digitalWrite(L7, HIGH);
digitalWrite(L8, LOW);
digitalWrite(L9, LOW);
  delay(1000);
}

void printM7(){
digitalWrite(L1, HIGH);
digitalWrite(L2, LOW);
digitalWrite(L3, HIGH);
digitalWrite(L4, HIGH);
digitalWrite(L5, HIGH);
digitalWrite(L6, HIGH);
digitalWrite(L7, HIGH);
digitalWrite(L8, LOW);
digitalWrite(L9, HIGH);
  delay(1000);
}

void printM(){
digitalWrite(L1, HIGH);
digitalWrite(L2, LOW);
digitalWrite(L3, HIGH);
digitalWrite(L4, HIGH);
digitalWrite(L5, HIGH);
digitalWrite(L6, HIGH);
digitalWrite(L7, HIGH);
digitalWrite(L8, LOW);
digitalWrite(L9, HIGH);
}


//function- turn off
void printOff(){
digitalWrite(L1, LOW);
digitalWrite(L2, LOW);
digitalWrite(L3, LOW);
digitalWrite(L4, LOW);
digitalWrite(L5, LOW);
digitalWrite(L6, LOW);
digitalWrite(L7, LOW);
digitalWrite(L8, LOW);
digitalWrite(L9, LOW);
}

void printS1(){
digitalWrite(L1, HIGH);
digitalWrite(L2, LOW);
digitalWrite(L3, LOW);
digitalWrite(L4, LOW);
digitalWrite(L5, HIGH);
digitalWrite(L6, LOW);
digitalWrite(L7, LOW);
digitalWrite(L8, LOW);
digitalWrite(L9, HIGH);
  delay(500);
}

void printS2(){
digitalWrite(L1, LOW);
digitalWrite(L2, LOW);
digitalWrite(L3, LOW);
digitalWrite(L4, HIGH);
digitalWrite(L5, HIGH);
digitalWrite(L6, HIGH);
digitalWrite(L7, LOW);
digitalWrite(L8, LOW);
digitalWrite(L9, LOW);
  delay(500);
}

void printS3(){
digitalWrite(L1, LOW);
digitalWrite(L2, LOW);
digitalWrite(L3, HIGH);
digitalWrite(L4, LOW);
digitalWrite(L5, HIGH);
digitalWrite(L6, LOW);
digitalWrite(L7, HIGH);
digitalWrite(L8, LOW);
digitalWrite(L9, LOW);
  delay(500);
}

void printS4(){
digitalWrite(L1, LOW);
digitalWrite(L2, HIGH);
digitalWrite(L3, LOW);
digitalWrite(L4, LOW);
digitalWrite(L5, HIGH);
digitalWrite(L6, LOW);
digitalWrite(L7, LOW);
digitalWrite(L8, HIGH);
digitalWrite(L9, LOW);
  delay(500);
}
