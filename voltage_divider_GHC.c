/*This is a simple voltage divider with an arduino mega2560
 *and two resistors and a potentiometer and a LED
 */
int analogPin   = A3;   //the analog pin that the potentiometer is connected to analogPin = A3;
int val         = 0;    //outsides leads to ground and +5 volts
int LED         = 3;    //varible to store the value read

/*setup the serial communication*/
void setup()
{
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
}

void loop()
{
    val = analogRead(analogPin);    //read the value from the potentiometer
    Serial.println(val);            //print the value to the serial monitor


    if(val < 110)
    {
        digitalWrite(LED, HIGH);
        delay(1000);
        digitalWrite(LED, LOW);
        delay(1000);                //if the value is less than 110, turn on the LED
    }

    if(val > 400)
    {
        digitalWrite(LED, HIGH);
        delay(300);
        digitalWrite(LED, LOW);
        delay(300);                 //if the value is greater than 400, turn on the LED
    }
    else
    {
        digitalWrite(LED, LOW);     //if the value is between 110 and 400, turn off the LED
    }
}
