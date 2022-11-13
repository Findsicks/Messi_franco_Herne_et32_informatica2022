void setup()
{
 pinMode( 3 , OUTPUT);
 pinMode( 4 , OUTPUT);
 pinMode( 5 , OUTPUT);
 pinMode( 6 , OUTPUT);
 pinMode( 9 , OUTPUT);
}

void loop()
{
 analogWrite( 3 , 255);
 delay(500);
 analogWrite( 3 ,0);
 digitalWrite( 4 , HIGH);
 digitalWrite( 5 , HIGH );
 delay(500);
 digitalWrite( 4 , LOW);
 digitalWrite( 5 , LOW);
 analogWrite( 6 , 40);
 analogWrite( 9 , 40);
 delay(500);
 analogWrite( 6 , 0);
 analogWrite( 9 , 0);
}