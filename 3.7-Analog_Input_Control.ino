
int LIGHT=0;
void setup() {
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
    
    Serial.begin(9600);
}
   
void loop() {
      LIGHT = analogRead(0);
    Serial.println(LIGHT);
  
    if(LIGHT<147){
    analogWrite(9, 255);
    analogWrite(10, 0);
    analogWrite(11,0);
    
    }
    
    else if(LIGHT<292&&292>146)
    {
    analogWrite(9, 255);
    analogWrite(10, 121);
    analogWrite(11, 0);
    }
    
    else if(LIGHT<439&&439>292)
    {
    analogWrite(9, 235);
    analogWrite(10, 225);
    analogWrite(11, 52);
    }
    else if(LIGHT<585&&585>439)
    {
    analogWrite(9, 0);
    analogWrite(10, 255);
    analogWrite(11, 0);
    }
    
    else if(LIGHT<731&&731>585)
    {
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 255);
    }
    
    else if(LIGHT<877&&877>731)
    {
    analogWrite(9, 133);
    analogWrite(10, 0);
    analogWrite(11, 250);
    }
    
    else if(LIGHT<1023&&1023>877)
    {
    analogWrite(9, 221);
    analogWrite(10, 3);
    analogWrite(11, 252);
    }
    
}
