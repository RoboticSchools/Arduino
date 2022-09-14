#include <Servo.h>      // servo motor library
#include <Keypad.h>     // keypad library

Servo myservo;

const byte ROWS=4;        // no.of rows
const byte COLMS=4;       // no.of columns

char keys[ROWS][COLMS]={
  {'1','2','3','A'},           // 16 keys on keypad
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};
byte rowpins[ROWS]= {9,8,7,6};          // row pins connected to arduino
byte columnpins[COLMS]= {5,4,3,2};       // column pins connected to arduino
 
Keypad kp=Keypad(makeKeymap(keys),rowpins,columnpins,ROWS,COLMS);    // giving information to Keypad function

String password = "1726";     //real password
String mypass = "";           // need to enter

  
void setup()
{
  myservo.attach(10);     // servo connected to arduino pin
  Serial.begin(9600);
  Serial.println("Enter the password: ");
}
void loop()
{
  char key = kp.getKey();      // get the key and save it in key variable
  if(key){
    
  if(mypass.length()<4)
  {
    Serial.print("*");
    mypass = mypass+key;
  }
  }
  if (mypass.length()==4)
  {
    if(password==mypass)
    {
      Serial.println("\nWelcome to SAFELOCKER");
      for (int pos=0; pos<=180;pos++)
      {
        myservo.write(pos);
      }
      delay(3000);
      for (int pos=180; pos>=0;pos--)
      {
        myservo.write(pos);
      }
    }
    else
    {
      Serial.println("\nAuthontication Failed");
    }
    delay(3000);
    mypass ="";
    Serial.println("enter the password");
}
}
