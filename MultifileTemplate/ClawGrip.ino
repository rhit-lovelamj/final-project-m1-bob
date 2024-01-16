
int pos = 0;    // variable to store the servo position 
 
void clawGrab() 
{ 
  for(pos = 40; pos < 140; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(40);                       // waits 40ms for the servo to reach the position 
  } 
  for(pos = 140; pos>=41; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(40);                       // waits 40ms for the servo to reach the position 
  } 
} 
