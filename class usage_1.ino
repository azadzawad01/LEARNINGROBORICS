// C++ code
//class
class Calculation{
  int a,b,c;
  public:
  void set(int n1,int n2,int n3){
    a=n1,b=n2,c=n3;}
  
  
  void sum(){
    Serial.print("sum:");
    Serial.println(a+b+c);
  }
  void multiplication(){
    Serial.print("product:");
              
     Serial.println(a*b*c);
  }
  void largestnumber(){
    if(a>b && a>c){
     Serial.print(a);Serial.print(" is largest");}
    if(b>a && b>c){
          Serial.print(b);Serial.print(" is largest");}
          if(c>a && c>b){
            Serial.print(c);Serial.print(" is largest");}
           }
}; 


  
void setup()
{ Serial.begin(9600);

 Calculation a;
 a.set(10,20,30);
 a.sum();
 a.multiplication();
 a.largestnumber();

}

void loop()
{
  
}