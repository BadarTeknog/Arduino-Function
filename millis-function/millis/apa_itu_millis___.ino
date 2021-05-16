unsigned long A,B;
bool a;
void setup(){
Serial.begin(9600);
    delay(1000); 
    pinMode(13,OUTPUT);
}
void loop(){
    
A=millis();    
if((A-B)>=1000){
B=A;
a=!a;
digitalWrite(13,a);        
    }   
Serial.println(A);      
}