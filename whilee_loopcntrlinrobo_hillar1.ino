// C++ code
//while loop controlling

void setup()
{
Serial.begin(9600);
  
  

  while(1){
    Serial.println("hello");
    if(Serial.read()=='b'){
      break;}
      
  }
  Serial.println("Loop Break");
}


  


void loop()
{
}