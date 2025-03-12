int in1 = 11;      
int in2 = 10;    
int in3 = 3;      
int in4 = 5; 
#define ena 6        // Enable/speed motor Front Right 
#define enb 9  
int command; 
int speedcar = 100; 		// 50 - 255.

void setup() {  
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    pinMode(ena, OUTPUT);
	  pinMode(enb, OUTPUT);
	Serial.begin(9600); 

  } 
void avancer(){ 
     analogWrite(ena, speedcar);
     analogWrite(enb, speedcar); 
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
  }
void reculer(){ 
       analogWrite(ena, speedcar);
     analogWrite(enb, speedcar); 
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
  }
void gauche(){ 
       analogWrite(ena, speedcar);
     analogWrite(enb, speedcar); 
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
  }
void droite(){
       analogWrite(ena, speedcar);
     analogWrite(enb, speedcar); 
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
  }
void avancerdroite(){
       analogWrite(ena, speedcar);
     analogWrite(enb, speedcar); 
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);

  }
void avancergauche(){
       analogWrite(ena, speedcar);
     analogWrite(enb, speedcar); 
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
  }
void reculerdroite(){ 
       analogWrite(ena, speedcar);
     analogWrite(enb, speedcar); 
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);

  }
void reculergauche(){ 
       analogWrite(ena, speedcar);
     analogWrite(enb, speedcar); 
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
  }
void stopRobot(){  
      analogWrite(ena, speedcar);
      analogWrite(enb, speedcar); 
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);

  } 
void loop(){
if (Serial.available() > 0) {
	command = Serial.read();
  Serial.print(command);
	stopRobot(); 			//Initialize with motors stopped.
switch (command) {
case 'F':avancer();break;
case 'B':reculer();break;
case 'L':gauche();break;
case 'R':droite();break;
case 'I':avancerdroite();break;
case 'G':avancergauche();break;
case 'J':reculerdroite();break;
case 'H':reculergauche();break;
case '0':speedcar = 100;break;
case '1':speedcar = 115;break;
case '2':speedcar = 130;break;
case '3':speedcar = 145;break;
case '4':speedcar = 160;break;
case '5':speedcar = 175;break;
case '6':speedcar = 190;break;
case '7':speedcar = 205;break;
case '8':speedcar = 220;break;
case '9':speedcar = 235;break;
case 'q':speedcar = 255;break;
}
}
}