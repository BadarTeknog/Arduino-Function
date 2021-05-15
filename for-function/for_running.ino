void setup(){
    for(int i=2; i<=6; i++){
    pinMode(i,OUTPUT);}
    
}
void loop(){
    
    for(int i=2; i<=6; i++){
        digitalWrite(i-1,LOW);
        digitalWrite(i,HIGH);
        delay(500);
       if(i==6){digitalWrite(i,LOW);}
    }
    
    for(int i=6; i>=2; i--){
        digitalWrite(i+1,LOW);
        digitalWrite(i,HIGH);
        delay(500);
       if(i==2){digitalWrite(i,LOW);}
    }    
    
    
}