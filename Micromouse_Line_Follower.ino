#define IN4 D10 
#define IN3 D9 
#define IN1 D8 
#define IN2 D7
#define IRL D4
#define IRR D5
int IRLV = 0;
int IRRV = 0;


void forward() {
digitalWrite(IN1, HIGH); 
digitalWrite(IN2, LOW); 
digitalWrite(IN3, HIGH); 
digitalWrite(IN4, LOW);
}

void left() {
digitalWrite(IN3, HIGH); 
digitalWrite(IN4, LOW);
}

void right() {
digitalWrite(IN1, HIGH); 
digitalWrite(IN2, LOW); 
}

void rstop() {
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW); 
digitalWrite(IN3, LOW); 
digitalWrite(IN4, LOW);
}



void setup() {
pinMode(IN1, OUTPUT); 
pinMode(IN2, OUTPUT); 
pinMode(IN3, OUTPUT); 
pinMode(IN4, OUTPUT);
pinMode(IRL, INPUT);
pinMode(IRR, INPUT);
Serial.begin(9600);
}


void loop() {
IRLV = digitalRead(IRL);
IRRV = digitalRead(IRR);

if(digitalRead(IRL) == 0 && digitalRead(IRR) == 0){
  forward();
  }
if(digitalRead(IRL) == 1 && digitalRead(IRR) == 0){
  left();
  }
if(digitalRead(IRL) == 0 && digitalRead(IRR) == 1){
  right();
  } 
if(digitalRead(IRL) == 1 && digitalRead(IRR) == 1){
  rstop();
  }
 
}
