volatile int NbTopsFan; //measuring the rising edges of the signal
int Calc;
int hallsensor = 2; //The pin location of the sensor
//int echoPin=3, trigPin=4;

void rpm () //This is the function that the interupt calls
{
 NbTopsFan++; //This function measures the rising and falling edge of the

//hall effect sensors signal
}
// The setup() method runs once, when the sketch starts
void setup() //
{
 pinMode(hallsensor, INPUT); //initializes digital pin 2 as an input
 Serial.begin(9600); //This is the setup function where the serial port is initialised,
 attachInterrupt(0, rpm, RISING); //and the interrupt is attached

 // pinMode(trigPin, OUTPUT);
 // pinMode(echoPin, INPUT);
}
// the loop() method runs over and over again,
// as long as the Arduino has power
void loop ()
{
 NbTopsFan = 0; //Set NbTops to 0 ready for calculations 
  sei(); //Enables interrupts
 delay (1000); //Wait 1 second
 cli(); //Disable interrupts
 Calc = (NbTopsFan * 60 / 7.5); //(Pulse frequency x 60) / 73Q, = flow ratein L/hour
 Serial.print (Calc, DEC); //Prints the number calculated above
 Serial.print (" L/hour\r\n"); //Prints "L/hour" and returns a new line



  //long duration, distance;
  //digitalWrite(trigPin, LOW);
  //delayMicroseconds(2);
  //digitalWrite(trigPin, HIGH);
  //delayMicroseconds(10);
  //digitalWrite(trigPin, LOW);
 // duration = pulseIn(echoPin, HIGH);
  //distance = (duration/2) / 29.1;
  //Serial.println("Sonar value");
  //Serial.println(distance);
  //delay(100);
 // while(Calc>0){
    
    
    
   // }

//if(distance<5){
  
  //Serial.println("Sajid in danger!!");
  
  
 }
