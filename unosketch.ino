
// Written By Anirban Sengupta from Arduino Examples
//this is opensource and for piblic use 

//Connect RED LED TO pin 13 
//Connect WHITE LED to pin 12


int led =13;
int led2=12;
void setup() {
  // initialize serial:
    pinMode(led, OUTPUT);     
  pinMode(led2, OUTPUT);     

  Serial.begin(9600);
}

void loop() {
  
    while (Serial.available()) { // if data is  available 
    char i = (char)Serial.read(); 
    // add it to the inputString:
   if(i == 'f')               //if red led button pressed then do
   { 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(300);               // wait for a second
  }
    if(i == 's')              //if white led button pressed then do
   {
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);               // wait for a second
  
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  delay(400);               // wait for a second
  }
    }
}
  
   



  
  
