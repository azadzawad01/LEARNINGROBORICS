// C++ code
//
void setup()
{
Serial.begin(9600);
    int rows,i;

    for(int i = 5; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
          Serial.print("*");
        }
  Serial.println("");
    }
    
  
}


void loop()
{

}