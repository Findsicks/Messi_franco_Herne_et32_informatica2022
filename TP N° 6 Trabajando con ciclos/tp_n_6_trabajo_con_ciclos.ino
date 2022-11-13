void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  for (int RED = 0 ; RED <= 255 ; RED++ )
  {
    
  	for(int G = 0 ;  G <= 255  ; G++)
  	{
      
      for (int BLUE = 0 ; BLUE <= 255 ; BLUE++ )
      {
    	analogWrite(3 , BLUE);
        analogWrite(5 , G);
        analogWrite(6 , RED);

      }     
  	}
  }  	
  
  
  
}