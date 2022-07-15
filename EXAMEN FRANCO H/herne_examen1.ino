// C++ code
// RGB 1
int PinRojo = 2;			 
int PinRojo5 = 3;
int PinAzul5 = 4;
int PinVerde5 = 12;

 int Luz = A1;

int PinVerde2 = 6;
int PinRojo2= 5;


int PinRojo3 = 7;
int PinVerde3 = 8;
int PinAzul3 = 9;

int PinRojo4 = 11;
int PinAzul4 = 10;
void setup()
{
// Configuracion Inicial
    
  pinMode(PinRojo5, OUTPUT);
  pinMode(PinAzul5, OUTPUT);
  pinMode(PinVerde5, OUTPUT);
 
  analogWrite(PinRojo5, 0);
  analogWrite(PinVerde5, 100);
  analogWrite(PinAzul5, 100);
  
  pinMode(PinRojo, OUTPUT);
  
  
  pinMode(PinVerde2, OUTPUT);
  pinMode(PinRojo2, OUTPUT);
  
  pinMode(PinRojo3, OUTPUT);
  pinMode(PinVerde3, OUTPUT);
  pinMode(PinAzul3, OUTPUT);
  
  analogWrite(PinAzul4, 200);
  analogWrite(PinRojo4, 100);
  
  
  analogWrite(PinVerde2, 100);
  analogWrite(PinRojo2, 200);
  Serial.begin(9600);
  
   pinMode(PinRojo5, OUTPUT);
  pinMode(PinVerde5, OUTPUT);
  pinMode(PinAzul5, OUTPUT);
}

void loop()
{
 digitalWrite(PinRojo, HIGH);
  
 analogWrite(PinRojo2, 200);
 analogWrite(PinVerde2, 300);
  
 digitalWrite(PinVerde3, HIGH);
 digitalWrite(PinRojo3, HIGH);
  digitalWrite(PinAzul3, LOW);
  
 digitalWrite(PinRojo4, LOW);
  digitalWrite(PinAzul4, HIGH);
 analogWrite(PinRojo4, 100);
 analogWrite(PinAzul4, 50);
  
  
 digitalWrite(PinRojo5, LOW);
 digitalWrite(PinAzul5, 100);
 digitalWrite(PinVerde5, 100);
  
    int lecturaluz = analogRead(Luz);
  int lecturaluzf = map(lecturaluz, 713, 1022, 100, 0);
  lecturaluzf = constrain(lecturaluzf, 0, 100);
  
  if (lecturaluz <26)
  {
    digitalWrite(PinRojo, HIGH);
  
 analogWrite(PinRojo2, 200);
 analogWrite(PinVerde2, 300);
  
 digitalWrite(PinVerde3, HIGH);
 digitalWrite(PinRojo3, HIGH);
  digitalWrite(PinAzul3, LOW);
  
 digitalWrite(PinRojo4, LOW);
  digitalWrite(PinAzul4, HIGH);
 analogWrite(PinRojo4, 100);
 analogWrite(PinAzul4, 50);
  
  
 digitalWrite(PinRojo5, LOW);
 digitalWrite(PinAzul5, 100);
 digitalWrite(PinVerde5, 100);
  }
  else if (lecturaluz >25 and lectura luz <51)
  {
    
  
 	analogWrite(PinRojo2, 200);
   analogWrite(PinVerde2, 300);
  
 	digitalWrite(PinVerde3, HIGH);
 	digitalWrite(PinRojo3, HIGH);
  	digitalWrite(PinAzul3, LOW);
  
	 digitalWrite(PinRojo4, LOW);
 	 digitalWrite(PinAzul4, HIGH);
 	analogWrite(PinRojo4, 100);
 	analogWrite(PinAzul4, 50);
  
  
	 digitalWrite(PinRojo5, LOW);
 	digitalWrite(PinAzul5, 100);
 	digitalWrite(PinVerde5, 100);
  }
  else if (lecturaluz >50 and lecturaluz < 76)
  {
		digitalWrite(PinVerde3, HIGH);
 		digitalWrite(PinRojo3, HIGH);
  		digitalWrite(PinAzul3, LOW);
  
 		digitalWrite(PinRojo4, LOW);
 	 	digitalWrite(PinAzul4, HIGH);
 		analogWrite(PinRojo4, 100);
 		analogWrite(PinAzul4, 50);
  
  
 		digitalWrite(PinRojo5, LOW);
 		digitalWrite(PinAzul5, 100);
 		digitalWrite(PinVerde5, 100);
    
  }
  else if (lecturaluz > 75 and lecturaluz < 99)
  {
    digitalWrite(PinRojo4, LOW);
 	 	digitalWrite(PinAzul4, HIGH);
 		analogWrite(PinRojo4, 100);
 		analogWrite(PinAzul4, 50);
  
  
 		digitalWrite(PinRojo5, LOW);
 		digitalWrite(PinAzul5, 100);
 		digitalWrite(PinVerde5, 100);
    
  }
  else if (lecturaluz == 100)
  {
 		 digitalWrite(PinRojo5, LOW);
 			digitalWrite(PinAzul5, 100);
 		digitalWrite(PinVerde5, 100);
  }
  
 
  
}