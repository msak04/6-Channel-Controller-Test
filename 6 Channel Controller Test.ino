
int channel1 = A4; // initial wifi module pin in arduino
int channel2 = A3; 
int channel3 = A2;
int channel4 = A1;
int channel5 = A0;
int channel6 = 13;

int ChannelValue1; // Used to store values
int ChannelValue2; // Used to store values
int ChannelValue3; // Used to store values
int ChannelValue4; // Used to store values
int ChannelValue5; // Used to store values
int ChannelValue6; // Used to store values
 
void setup() {

   // initialises the channels as inputs
   pinMode (channel1, INPUT);
   pinMode (channel2, INPUT);
   pinMode (channel3, INPUT);
   pinMode (channel4, INPUT);
   pinMode (channel5, INPUT);
   pinMode (channel6, INPUT);
   Serial.begin (9600);
}

  //chanel pulse in
void loop() {
  // Checks the value of channels
  ChannelValue1 = (pulseIn (channel1, HIGH)); 
  Serial.print("Channel 1: ");
  Serial.println(ChannelValue1); //Prints the channels value on the serial monitor

  ChannelValue2 = (pulseIn (channel2, HIGH)); 
  Serial.print("Channel 2: ");
  Serial.println (ChannelValue2); //Prints the channels value value on the serial monitor

  // Checks the value of channel3
  ChannelValue3 = (pulseIn (channel3, HIGH)); 
  Serial.print("Channel 3: ");
  Serial.println(ChannelValue3); //Prints the channels value on the serial monitor

// Checks the value of channel4
  ChannelValue4 = (pulseIn (channel4, HIGH)); 
  Serial.print("Channel 4: ");
  Serial.println(ChannelValue4); //Prints the channels value on the serial monitor

// Checks the value of channel5
  ChannelValue5 = (pulseIn (channel5, HIGH)); 
  Serial.print("Channel 5: ");
  Serial.println(ChannelValue5); //Prints the channels value on the serial monitor

  
// Checks the value of channel6
  ChannelValue6 = (pulseIn (channel6, HIGH)); 
  Serial.print("Channel 6: ");
  Serial.println(ChannelValue6); //Prints the channels value on the serial monitor

  
 delay(1000);
}
