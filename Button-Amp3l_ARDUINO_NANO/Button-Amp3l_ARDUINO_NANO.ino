

  #define Rot 5
 
  #define Gruen 8

  #define Gelb 7

  #define Button 6

  #include <RCSwitch.h>
  
  RCSwitch mySwitch = RCSwitch();

  
  
void setup() {

   Serial.begin(9600);

   pinMode(Button, INPUT);
   digitalWrite(Gruen, LOW);
   digitalWrite(Rot, LOW);
   digitalWrite(Gelb, LOW);

 

}


void changeLights(){
   
// Grüne Phase
   digitalWrite(Gruen, HIGH);
   digitalWrite(Gelb, LOW);
   digitalWrite(Rot, LOW);
   delay(3000);

   
  
// Gelbe Phase
   digitalWrite(Gruen, LOW);
   digitalWrite(Gelb, HIGH);
   digitalWrite(Rot, LOW);
   delay(3000);




// Rote Phase

   digitalWrite(Gruen, LOW);
   digitalWrite(Gelb, LOW);
   digitalWrite(Rot, HIGH);
   delay(3000);
 

   
// Rot-Gelbe Phase

   digitalWrite(Gruen, LOW);
   digitalWrite(Gelb, HIGH);
   digitalWrite(Rot, HIGH);
   delay(3000);

   

// Phasen beenden

   digitalWrite(Gruen, LOW);
   digitalWrite(Gelb, LOW);
   digitalWrite(Rot, LOW);
   delay(0.001);



   
}



void loop() {


 
  while (digitalRead(Button) == LOW) {
    
    digitalWrite(Gruen, HIGH);
    delay(0.001);

    Serial.println("while schleife");
    
  }
    
      
      
  if (digitalRead(Button) == HIGH) {

           changeLights();
           delay(10);

           Serial.println("if-Bedingung");

  }
  }



  


       
