// C++ code
//a collection of char
void setup()
{
  Serial.begin(9600);
  String s1="hello world!";
  char letter=s1.charAt(4);
   Serial.println(letter);
  String substring=s1.substring(4,10);
  Serial.println(substring);
  
  
  
}

void loop()
{
  
}
