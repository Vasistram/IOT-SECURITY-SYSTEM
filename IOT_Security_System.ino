void setup(){
  pinMode(4,INPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int a=digitalRead(4);
  if(a==1){
  	Serial.println("Motion detected !!");
    digitalWrite(7,HIGH);
  }
  else{
    digitalWrite(7,LOW);
  }
  delay(200);
}
