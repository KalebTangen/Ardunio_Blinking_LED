int led_output = 8;


void setup() 
{
  // put your setup code here, to run once:
pinMode(led_output,OUTPUT);
}

void loop()
{
  // Blinking Led light code 
digitalWrite(led_output,HIGH);// Sends Voltage to the Led through Pin 8 
delay(3000);// delay for three seconds 
digitalWrite(led_output,LOW); // Stops sending the voltage 
delay(1000);// delays for another second
}
