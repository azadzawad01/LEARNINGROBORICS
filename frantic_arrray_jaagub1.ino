// C++ code
//array
void setup()
{
  Serial.begin(9600);
  int i;
  int array[5]={1,2,3,4,5};
                for(i=0;i<5;i++){
                  Serial.print(array[i]);}
                               
    Serial.println("");
  for(i=100;i<105;i++){
    array[i-100]=i;
    
   Serial.print(array[i-100]);Serial.print(" ");
         }
                               
}

void loop()
{
}