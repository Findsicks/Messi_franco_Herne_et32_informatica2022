#include <LiquidCrystal.h>

#define sensorT A5
#define LED_R 2
#define LED_V 4
#define LED_A 3
#define sensor A4

#define Boton 11
#define RS 9
#define E  10
#define DB4 5
#define DB5 6
#define DB6 7
#define DB7 8
LiquidCrystal LCD( RS , E , DB4 , DB5 , DB6 , DB7 );
int estado = 0;


void setup()
{
  int pin[] = { A5 , Boton , A4 , 4 , 2 , 3 }; 
  int put[] = {1 , 1 , 1 , 0 , 0 , 0 };
  
  LCD.begin( 16 , 2 );
  Serial.begin( 9600);
}

void loop()
{
  
  if (!digitalRead(Boton) == HIGH)
  {
    estado = estado+1;
  }
  
  int lecturaluz =  analogRead ( A4 );
  	
  int porcentaje_luz = map( lecturaluz , 713, 1022, 100 , 0);
   
  float temp = ((5.0 / 1024 * analogRead( sensorT )) * 100 - 50);
  
  if (estado == 1)
  {
    LCD.clear();
  	LCD.setCursor( 3 , 0);
  	LCD.print("Luz");
  	LCD.setCursor( 7 , 1 ); 
  	LCD.print(porcentaje_luz);
  	LCD.print("%");
  }
  
  else if(estado == 2)
  {
    LCD.clear();
  	LCD.setCursor( 3 , 0);
  	LCD.print("Temperatura");
  	LCD.setCursor( 7 , 1 ); 
  	LCD.print(temp);
  	LCD.print("c");
  }
  else if(estado == 3)
  {
   estado = 1; 
  }
  if ( porcentaje_luz >= 1 )
  {
   digitalWrite( LED_R , LOW); 
   digitalWrite( LED_V , LOW); 
   digitalWrite( LED_A , LOW);
  }
  else if ( (temp >= 18) && (temp <=90))
  {
 	digitalWrite( LED_R , LOW); 
   digitalWrite( LED_V , HIGH); 
   digitalWrite( LED_A , LOW); 
  }
  else if ( temp < 18)
  {
    digitalWrite( LED_R , LOW); 
   digitalWrite( LED_V , LOW); 
   digitalWrite( LED_A , HIGH); 
  }
  else if (temp > 90)
  {
    digitalWrite( LED_R , HIGH); 
   digitalWrite( LED_V , LOW); 
   digitalWrite( LED_A , LOW); 
  }
  delay(1000);
}

  







//Franco Herne
  