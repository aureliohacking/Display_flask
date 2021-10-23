void setup() {
  Serial.begin(9600);
  for(int i=2; i<10; i++){
    pinMode(i, OUTPUT);
    }
  for(int j=2; j<9; j++){
    digitalWrite(j, HIGH);
    }  
}

void loop() {
  if(Serial.available()>0){
    char cat = Serial.read();
    numPad(cat);
    }
}
void numPad(char x){
  switch(x){
    case '0': display(1,0,0,0,0,0,0); break;
    case '1': display(1,1,1,1,0,0,1); break;
    case '2': display(0,1,0,0,1,0,0); break;
    case '3': display(0,1,1,0,0,0,0); break;
    case '4': display(0,0,1,1,0,0,1); break;
    case '5': display(0,0,1,0,0,1,0); break;
    case '6': display(0,0,0,0,0,1,0); break;
    case '7': display(0,1,1,1,0,0,0); break;
    case '8': display(0,0,0,0,0,0,0); break;
    case '9': display(0,0,1,1,0,0,0); break;
    }
  }
void display(int a1, int a2, int a3, int a4, int a5, int a6, int a7){
  digitalWrite(2, a1);
  digitalWrite(3, a2);
  digitalWrite(4, a3);
  digitalWrite(5, a4);
  digitalWrite(6, a5);
  digitalWrite(7, a6);
  digitalWrite(8, a7);
}
  
