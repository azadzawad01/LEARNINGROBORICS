// C++ code
//String:a collection of char
void setup()
{
  Serial.begin(9600);
  String s1="Hello World!";
  //char letter=s1.charAt(4);
   //Serial.println(letter);
  //String substring=s1.substring(4,10);
  //Serial.println(substring);
 // String in="1234",out="abcd";
                                                          //type casting
 // String sum=in+out;
  //Serial.println(sum);
  String num1="5",num2="15";
  
  int Num1=num1.toInt();
  int Num2=num2.toInt();
  Serial.println(Num1+Num2);
  s1.toLowerCase();
  Serial.println(s1);
  s1.toUpperCase();
  Serial.println(s1);
  
  
  
  
  
  
  
}

void loop()
{
  
}
