int led_1 = 2;
int led_2 = 3;
int led_3 = 4;

int value = A0;
int red;
int green;
int blue;

int redvalue;
int greenvalue;
int bluevalue;

int redout = 8;
int greenout = 9;
int blueout = 10;

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);

  pinMode(value, INPUT);

  pinMode(redout, OUTPUT);
  pinMode(greenout, OUTPUT);
  pinMode(blueout, OUTPUT);
  //digitalWrite(blueout,HIGH);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(led_1,HIGH);
  delay(100);
  red = analogRead(value);
  delay(10);
  Serial.print("R=");
  Serial.println(red);
  digitalWrite(led_1,LOW);

  

  digitalWrite(led_2,HIGH);
  delay(100);
  green = analogRead(value);
  delay(10);
  Serial.print("G=");
  Serial.println(green);
  digitalWrite(led_2,LOW);


  digitalWrite(led_3,HIGH);
  delay(100);
  blue = analogRead(value);
  delay(10);
  Serial.print("B=");
  Serial.println(blue);
  digitalWrite(led_3,LOW);


  if((red>=840 && red<=870) && (blue>=850 && blue<=880))
  {
    redvalue = HIGH;
  }
  else{
    redvalue = LOW;
  }
  if((red>=940 && red<=970) && (blue>=840 && blue<=870))
  {
    greenvalue = HIGH;
  }
  else {
    greenvalue = LOW;
  }
  if((red>=940 && red<=990) && (blue>=740 && blue<=770))
  {
    bluevalue = HIGH;
  }
  else {
    bluevalue = LOW;
  }

  digitalWrite(redout, redvalue);
  digitalWrite(greenout, greenvalue);
  digitalWrite(blueout, bluevalue);
  Serial.println();
  delay(1000);
}


