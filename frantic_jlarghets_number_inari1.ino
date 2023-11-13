// C++ code
//find largest number
void setup()
{
  Serial.begin(9600);
  int n1,n2,n3;
  n1=1000;
  n2=999;
  n3=998;
  if(n1>n2 && n1>n3){
    Serial.print(n1);}
   if(n2>n1 && n2>n3){
     Serial.print(n2);}
   if(n3>n2 && n3>n1){
    Serial.print(n3);
   }  
    Serial.print(" "); Serial.print("is largest");
  
}

void loop()
{
  
}