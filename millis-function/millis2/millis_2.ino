unsigned long data, A;
int B,DP;
void setup(){
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(9,INPUT_PULLUP);
    
}
void loop(){

data=millis();
if((data-A)>=1000){
  A=data;  
B=!B;                   
    }           
digitalWrite(11,B);   

DP=digitalRead(9);
    
if(DP==0){
   digitalWrite(10,HIGH);        
    }else{
    digitalWrite(10,LOW);    
    }                  
    
}
/*
video pembuatan program ini 
https://youtu.be/ESJhUGszfuE
jangan lupa
subscribe, like, share ya...
Badar Teknog Sabtu/10/April/2021
*/