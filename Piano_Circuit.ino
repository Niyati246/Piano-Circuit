/*
  ———————————————————————————————————————————
  Programmer: Niyati Sharma
  Date: Fri Jan 20th 2023
  ———————————————————————————————————————————
  Program: Allow 8 buttons to play a C major scale
  ———————————————————————————————————————————
  Description: There are 8 buttons connected to 8
  different pins, and a buzzer that is the output connected
  to pin 13. Each button plays a different note in the C
  major scale
  ———————————————————————————————————————————
  Connections: Pins 2, 3, 4, 5, 6, 7, 8, 9, 13
  ———————————————————————————————————————————
*/
//-----------------------------------------------------------------
//Global area - Everything in this section applies to all functions
//-----------------------------------------------------------------

int key1 = 2; //Gives button a connection to pin 2
int key2 = 3; //Gives button a connection to pin 3
int key3 = 4; //Gives button a connection to pin 4
int key4 = 5; //Gives button a connection to pin 5
int key5 = 6; //Gives button a connection to pin 6
int key6 = 7; //Gives button a connection to pin 7
int key7 = 8; //Gives button a connection to pin 8
int key8 = 9; //Gives button a connection to pin 9
int buzzer = 13; //Gives buzzer a connection to pin 13

//-----------------------------------------------------------------
//Setup area - All code in this section runs once
//-----------------------------------------------------------------

void setup()
{
  //declare all buttons as input
  pinMode(key1,INPUT); 
  pinMode(key2,INPUT);
  pinMode(key3,INPUT);
  pinMode(key4,INPUT);
  pinMode(key5,INPUT);
  pinMode(key6,INPUT);
  pinMode(key7,INPUT);
  pinMode(key8,INPUT);
  
  //declare buzzer as output
  pinMode(buzzer,OUTPUT);
  
}

//-----------------------------------------------------------------
//loop area - All code in this section runs repeatedly
//-----------------------------------------------------------------

void loop()
{
  //allow buttons to read keys
  int button1 = digitalRead(key1);
  int button2 = digitalRead(key2);
  int button3 = digitalRead(key3);
  int button4 = digitalRead(key4);
  int button5 = digitalRead(key5);
  int button6 = digitalRead(key6);
  int button7 = digitalRead(key7);
  int button8 = digitalRead(key8);
  
  
  //If button is clicked, a note will be played
  
  if(button1 == 1){ //If button one is pressed
     tone(buzzer,260,100); //The sound produced will be C
  }
   if(button2 == 1){ //If button two is pressed
     tone(buzzer,292,100); //The sound produced will be D
  }
   if(button3 == 1){ //If button three is pressed
     tone(buzzer,324,100); //The sound produced will be E
  }
   if(button4 == 1){ //If button four is pressed
     tone(buzzer,342,100); //The sound produced will be F
  }
   if(button5 == 1){ //If button five is pressed
     tone(buzzer,385,100); //The sound produced will be G
  }
   if(button6 == 1){ //If button six is pressed
     tone(buzzer,430,100); //The sound produced will be A
  }
   if(button7 == 1){ //If button seven is pressed
     tone(buzzer,490,100); //The sound produced will be B
  }
   if(button8 == 1){ //If button eight is pressed
     tone(buzzer,520,100); //The sound produced will be C (high octave)
  }

//delay for pitch
  delay(10);
}

//No code goes beyond this point
