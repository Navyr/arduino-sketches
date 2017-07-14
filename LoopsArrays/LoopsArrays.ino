void setup() {
// arrays = a collection of variables accessed with an index number
  // set up a pin for each "note" of twinkle twinkle little star
pinMode(2, OUTPUT);//first note "twinkle"
pinMode(4, OUTPUT);//second note "twinkle"
pinMode(6, OUTPUT);//third note "little"
pinMode(8, OUTPUT);//fourth note "star"
}

void loop() {
  
//let's set up an array for our pattern
int pattern[] = {2, 2, 4, 4, 6, 6, 8};

//loop through ENTIRE patter
for (int count = 0; count <7; count++) {
  //pattern [count] gives me the note in the 
  //pattern that I've countedd ip to by now
  digitalWrite(pattern[count], HIGH);   
  delay(500);              
  digitalWrite(pattern[count], HIGH);   
  delay(500);  
  
  // play the first "note" twice
  for(int count = 0; count < 2; count++) {
    digitalWrite(2, HIGH);   
    delay(500);              
    digitalWrite(2, HIGH);   
    delay(500);  
  }
  for(int count = 0; count < 2; count++) {
    digitalWrite(4, HIGH);   
    delay(500);              
    digitalWrite(4, HIGH);   
    delay(500);   
  }

  for(int count = 0; count < 2; count++) {
    digitalWrite(6, HIGH);   
    delay(500);              
    digitalWrite(6, HIGH);   
    delay(500);  
  }

  
    digitalWrite(8, HIGH);   
    delay(500);              
 

}
}

