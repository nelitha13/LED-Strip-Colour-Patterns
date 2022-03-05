// Arthor: Nelitha Priyawansha
int orange1=1;
int green1=2;
int blue1=3;
int white1=4;
int red1=5;
int orange2=6;
int green2=7;
int blue2=8;
int white2=9;
int red2=10;
int orange3=11;
int green3=12;
int blue3=13;
int white3=14;
int red3=15;
int orange4=16;
int green4=17;
int blue4=18;
int white4=19;
int red4=20;

int all=1000;
int pat2=500;
int pat3=500;
int pat4=50;
int all2=750;
int pat6=50;
int all3=1250;
int pat8=1250;
int pat9=1250;
int pat10=1250;

void setup() {

  pinMode(orange1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(blue1, OUTPUT);
  pinMode(white1, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(orange2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(white2, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(orange3, OUTPUT);
  pinMode(green3, OUTPUT);
  pinMode(blue3, OUTPUT);
  pinMode(white3, OUTPUT);
  pinMode(red3, OUTPUT);
  pinMode(orange4, OUTPUT);
  pinMode(green4, OUTPUT);
  pinMode(blue4, OUTPUT);
  pinMode(white4, OUTPUT);
  pinMode(red4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

patten02();
allblink();
patten07();
patten07();
patten07();
patten08();
patten09();
patten10();
patten03();
patten04();
patten04();
patten04();
patten04();
patten05();
patten06();
patten06();
patten06();

}


int allblink(){
digitalWrite(orange1,HIGH);
digitalWrite(green1,HIGH);
digitalWrite(blue1,HIGH);
digitalWrite(white1,HIGH);
digitalWrite(red1,HIGH);
digitalWrite(orange2,HIGH);
digitalWrite(green2,HIGH);
digitalWrite(blue2,HIGH);
digitalWrite(white2,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(orange3,HIGH);
digitalWrite(green3,HIGH);
digitalWrite(blue3,HIGH);
digitalWrite(white3,HIGH);
digitalWrite(red3,HIGH);
digitalWrite(orange4,HIGH);
digitalWrite(green4,HIGH);
digitalWrite(blue4,HIGH);
digitalWrite(white4,HIGH);
digitalWrite(red4,HIGH);
delay(all);
digitalWrite(orange1,LOW);
digitalWrite(green1,LOW);
digitalWrite(blue1,LOW);
digitalWrite(white1,LOW);
digitalWrite(red1,LOW);
digitalWrite(orange2,LOW);
digitalWrite(green2,LOW);
digitalWrite(blue2,LOW);
digitalWrite(white2,LOW);
digitalWrite(red2,LOW);
digitalWrite(orange3,LOW);
digitalWrite(green3,LOW);
digitalWrite(blue3,LOW);
digitalWrite(white3,LOW);
digitalWrite(red3,LOW);
digitalWrite(orange4,LOW);
digitalWrite(green4,LOW);
digitalWrite(blue4,LOW);
digitalWrite(white4,LOW);
digitalWrite(red4,LOW);
}

int patten02(){
digitalWrite(orange1,HIGH);
digitalWrite(red4,HIGH);
delay(pat2);
digitalWrite(green1,HIGH);
digitalWrite(white4,HIGH);
delay(pat2);
digitalWrite(blue1,HIGH);
digitalWrite(blue4,HIGH);
delay(pat2);
digitalWrite(white1,HIGH);
digitalWrite(green4,HIGH);
delay(pat2);
digitalWrite(red1,HIGH);
digitalWrite(orange4,HIGH);
delay(pat2);
digitalWrite(orange2,HIGH);
digitalWrite(red3,HIGH);
delay(pat2);
digitalWrite(green2,HIGH);
digitalWrite(white3,HIGH);
delay(pat2);
digitalWrite(blue2,HIGH);
digitalWrite(blue3,HIGH);
delay(pat2);
digitalWrite(white2,HIGH);
digitalWrite(green3,HIGH);
delay(pat2);
digitalWrite(red2,HIGH);
digitalWrite(orange3,HIGH);
delay(pat2);
//BACKWORD//
digitalWrite(red2,LOW);
digitalWrite(orange3,LOW);
delay(pat2);
digitalWrite(white2,LOW);
digitalWrite(green3,LOW);
delay(pat2);
digitalWrite(blue2,LOW);
digitalWrite(blue3,LOW);
delay(pat2);
digitalWrite(green2,LOW);
digitalWrite(white3,LOW);
delay(pat2);
digitalWrite(orange2,LOW);
digitalWrite(red3,LOW);
delay(pat2);
digitalWrite(red1,LOW);
digitalWrite(orange4,LOW);
delay(pat2);
digitalWrite(white1,LOW);
digitalWrite(green4,LOW);
delay(pat2);
digitalWrite(blue1,LOW);
digitalWrite(blue4,LOW);
delay(pat2);
digitalWrite(green1,LOW);
digitalWrite(white4,LOW);
delay(pat2);
digitalWrite(orange1,LOW);
digitalWrite(red4,LOW);
delay(pat2);
}

int patten03(){
digitalWrite(orange1,HIGH);
digitalWrite(orange2,HIGH);
digitalWrite(orange3,HIGH);
digitalWrite(orange4,HIGH);
delay(pat3);
digitalWrite(orange1,LOW);
digitalWrite(orange2,LOW);
digitalWrite(orange3,LOW);
digitalWrite(orange4,LOW);
digitalWrite(green1,HIGH);
digitalWrite(green2,HIGH);
digitalWrite(green3,HIGH);
digitalWrite(green4,HIGH);
delay(pat3);
digitalWrite(green1,LOW);
digitalWrite(green2,LOW);
digitalWrite(green3,LOW);
digitalWrite(green4,LOW);
digitalWrite(blue1,HIGH);
digitalWrite(blue2,HIGH);
digitalWrite(blue3,HIGH);
digitalWrite(blue4,HIGH);
delay(pat3);
digitalWrite(blue1,LOW);
digitalWrite(blue2,LOW);
digitalWrite(blue3,LOW);
digitalWrite(blue4,LOW);
digitalWrite(white1,HIGH);
digitalWrite(white2,HIGH);
digitalWrite(white3,HIGH);
digitalWrite(white4,HIGH);
delay(pat3);
digitalWrite(white1,LOW);
digitalWrite(white2,LOW);
digitalWrite(white3,LOW);
digitalWrite(white4,LOW);
digitalWrite(red1,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(red3,HIGH);
digitalWrite(red4,HIGH);
delay(pat3);
digitalWrite(red1,LOW);
digitalWrite(red2,LOW);
digitalWrite(red3,LOW);
digitalWrite(red4,LOW); 

//BACKWORD//
digitalWrite(white1,HIGH);
digitalWrite(white2,HIGH);
digitalWrite(white3,HIGH);
digitalWrite(white4,HIGH);
delay(pat3);
digitalWrite(white1,LOW);
digitalWrite(white2,LOW);
digitalWrite(white3,LOW);
digitalWrite(white4,LOW);
digitalWrite(blue1,HIGH);
digitalWrite(blue2,HIGH);
digitalWrite(blue3,HIGH);
digitalWrite(blue4,HIGH);
delay(pat3);
digitalWrite(blue1,LOW);
digitalWrite(blue2,LOW);
digitalWrite(blue3,LOW);
digitalWrite(blue4,LOW);
digitalWrite(green1,HIGH);
digitalWrite(green2,HIGH);
digitalWrite(green3,HIGH);
digitalWrite(green4,HIGH);
delay(pat3);
digitalWrite(green1,LOW);
digitalWrite(green2,LOW);
digitalWrite(green3,LOW);
digitalWrite(green4,LOW);
digitalWrite(orange1,HIGH);
digitalWrite(orange2,HIGH);
digitalWrite(orange3,HIGH);
digitalWrite(orange4,HIGH);
delay(pat3);
digitalWrite(orange1,LOW);
digitalWrite(orange2,LOW);
digitalWrite(orange3,LOW);
digitalWrite(orange4,LOW);
}

int patten04(){
  digitalWrite(orange1,HIGH);
  delay(pat4);
  digitalWrite(orange1,LOW);
  digitalWrite(green1,HIGH);
  delay(pat4);
  digitalWrite(green1,LOW);
  digitalWrite(blue1,HIGH);
  delay(pat4);
  digitalWrite(blue1,LOW);
    digitalWrite(white1,HIGH);
  delay(pat4);
  digitalWrite(white1,LOW);
    digitalWrite(red1,HIGH);
  delay(pat4);
  digitalWrite(red1,LOW);


    digitalWrite(orange2,HIGH);
  delay(pat4);
  digitalWrite(orange2,LOW);
    digitalWrite(green2,HIGH);
  delay(pat4);
  digitalWrite(green2,LOW);
    digitalWrite(blue2,HIGH);
  delay(pat4);
  digitalWrite(blue2,LOW);
    digitalWrite(white2,HIGH);
  delay(pat4);
  digitalWrite(white2,LOW);
    digitalWrite(red2,HIGH);
  delay(pat4);
  digitalWrite(red2,LOW);


    digitalWrite(orange3,HIGH);
  delay(pat4);
  digitalWrite(orange3,LOW);
    digitalWrite(green3,HIGH);
  delay(pat4);
  digitalWrite(green3,LOW);
    digitalWrite(blue3,HIGH);
  delay(pat4);
  digitalWrite(blue3,LOW);
    digitalWrite(white3,HIGH);
  delay(pat4);
  digitalWrite(white3,LOW);
    digitalWrite(red3,HIGH);
  delay(pat4);
  digitalWrite(red3,LOW);


    digitalWrite(orange4,HIGH);
  delay(pat4);
  digitalWrite(orange4,LOW);
    digitalWrite(green4,HIGH);
  delay(pat4);
  digitalWrite(green4,LOW);
    digitalWrite(blue4,HIGH);
  delay(pat4);
  digitalWrite(blue4,LOW);
    digitalWrite(white4,HIGH);
  delay(pat4);
  digitalWrite(white4,LOW);
    digitalWrite(red4,HIGH);
  delay(pat4);
  digitalWrite(red4,LOW);

  //backword//
  
  digitalWrite(white4,HIGH);
  delay(pat4);
  digitalWrite(white4,LOW);
  digitalWrite(blue4,HIGH);
  delay(pat4);
  digitalWrite(blue4,LOW);
   digitalWrite(green4,HIGH);
  delay(pat4);
  digitalWrite(green4,LOW);
   digitalWrite(orange4,HIGH);
  delay(pat4);
  digitalWrite(orange4,LOW);
   digitalWrite(red3,HIGH);
  delay(pat4);
  digitalWrite(red3,LOW);
   digitalWrite(white3,HIGH);
  delay(pat4);
  digitalWrite(white3,LOW);
   digitalWrite(blue3,HIGH);
  delay(pat4);
  digitalWrite(blue3,LOW);
   digitalWrite(green3,HIGH);
  delay(pat4);
  digitalWrite(green3,LOW);
   digitalWrite(orange3,HIGH);
  delay(pat4);
  digitalWrite(orange3,LOW);
   digitalWrite(red2,HIGH);
  delay(pat4);
  digitalWrite(red2,LOW);
   digitalWrite(white2,HIGH);
  delay(pat4);
  digitalWrite(white2,LOW);
   digitalWrite(blue2,HIGH);
  delay(pat4);
  digitalWrite(blue2,LOW);
   digitalWrite(green2,HIGH);
  delay(pat4);
  digitalWrite(green2,LOW);
   digitalWrite(orange2,HIGH);
  delay(pat4);
  digitalWrite(orange2,LOW);
   digitalWrite(red1,HIGH);
  delay(pat4);
  digitalWrite(red1,LOW);
   digitalWrite(white1,HIGH);
  delay(pat4);
  digitalWrite(white1,LOW);
   digitalWrite(blue1,HIGH);
  delay(pat4);
  digitalWrite(blue1,LOW);
   digitalWrite(green1,HIGH);
  delay(pat4);
  digitalWrite(green1,LOW);
   digitalWrite(orange1,HIGH);
  delay(pat4);
  digitalWrite(orange1,LOW);
}

int patten05(){
digitalWrite(orange1,HIGH);
digitalWrite(green1,HIGH);
digitalWrite(blue1,HIGH);
digitalWrite(white1,HIGH);
digitalWrite(red1,HIGH);
delay(all2);
digitalWrite(orange2,HIGH);
digitalWrite(green2,HIGH);
digitalWrite(blue2,HIGH);
digitalWrite(white2,HIGH);
digitalWrite(red2,HIGH);
delay(all2);
digitalWrite(orange3,HIGH);
digitalWrite(green3,HIGH);
digitalWrite(blue3,HIGH);
digitalWrite(white3,HIGH);
digitalWrite(red3,HIGH);
delay(all2);
digitalWrite(orange4,HIGH);
digitalWrite(green4,HIGH);
digitalWrite(blue4,HIGH);
digitalWrite(white4,HIGH);
digitalWrite(red4,HIGH);
delay(all2);
//backword//
digitalWrite(orange4,LOW);
digitalWrite(green4,LOW);
digitalWrite(blue4,LOW);
digitalWrite(white4,LOW);
digitalWrite(red4,LOW);
digitalWrite(orange3,LOW);
digitalWrite(green3,LOW);
digitalWrite(blue3,LOW);
digitalWrite(white3,LOW);
digitalWrite(red3,LOW);
delay(all2);
digitalWrite(orange2,LOW);
digitalWrite(green2,LOW);
digitalWrite(blue2,LOW);
digitalWrite(white2,LOW);
digitalWrite(red2,LOW);
delay(all2);
digitalWrite(orange1,LOW);
digitalWrite(green1,LOW);
digitalWrite(blue1,LOW);
digitalWrite(white1,LOW);
digitalWrite(red1,LOW);
delay(all2);
}

int patten06(){
 
digitalWrite(orange1,HIGH);
digitalWrite(red4,HIGH);
delay(pat6);
digitalWrite(orange1,LOW);
digitalWrite(red4,LOW);

digitalWrite(green1,HIGH);
digitalWrite(white4,HIGH);
delay(pat6);
digitalWrite(green1,LOW);
digitalWrite(white4,LOW);

digitalWrite(blue1,HIGH);
digitalWrite(blue4,HIGH);
delay(pat6);
digitalWrite(blue1,LOW);
digitalWrite(blue4,LOW);

digitalWrite(white1,HIGH);
digitalWrite(green4,HIGH);
delay(pat6);
digitalWrite(white1,LOW);
digitalWrite(green4,LOW);

digitalWrite(red1,HIGH);
digitalWrite(orange4,HIGH);
delay(pat6);
digitalWrite(red1,LOW);
digitalWrite(orange4,LOW);

digitalWrite(orange2,HIGH);
digitalWrite(red3,HIGH);
delay(pat6);
digitalWrite(orange2,LOW);
digitalWrite(red3,LOW);

digitalWrite(green2,HIGH);
digitalWrite(white3,HIGH);
delay(pat6);
digitalWrite(green2,LOW);
digitalWrite(white3,LOW);

digitalWrite(blue2,HIGH);
digitalWrite(blue3,HIGH);
delay(pat6);
digitalWrite(blue2,LOW);
digitalWrite(blue3,LOW);

digitalWrite(white2,HIGH);
digitalWrite(green3,HIGH);
delay(pat6);
digitalWrite(white2,LOW);
digitalWrite(green3,LOW);

digitalWrite(red2,HIGH);
digitalWrite(orange3,HIGH);
delay(pat6);
digitalWrite(red2,LOW);
digitalWrite(orange3,LOW);
//BACKWORD//
digitalWrite(red2,LOW);
digitalWrite(orange3,LOW);
delay(pat6);
digitalWrite(red2,HIGH);
digitalWrite(orange3,HIGH);

digitalWrite(white2,LOW);
digitalWrite(green3,LOW);
delay(pat6);
digitalWrite(white2,HIGH);
digitalWrite(green3,HIGH);

digitalWrite(blue2,LOW);
digitalWrite(blue3,LOW);
delay(pat6);
digitalWrite(blue2,HIGH);
digitalWrite(blue3,HIGH);

digitalWrite(green2,LOW);
digitalWrite(white3,LOW);
delay(pat6);
digitalWrite(green2,HIGH);
digitalWrite(white3,HIGH);

digitalWrite(orange2,LOW);
digitalWrite(red3,LOW);
delay(pat6);
digitalWrite(orange2,HIGH);
digitalWrite(red3,HIGH);

digitalWrite(red1,LOW);
digitalWrite(orange4,LOW);
delay(pat6);
digitalWrite(red1,HIGH);
digitalWrite(orange4,HIGH);

digitalWrite(white1,LOW);
digitalWrite(green4,LOW);
delay(pat6);
digitalWrite(white1,HIGH);
digitalWrite(green4,HIGH);

digitalWrite(blue1,LOW);
digitalWrite(blue4,LOW);
delay(pat6);
digitalWrite(blue1,HIGH);
digitalWrite(blue4,HIGH);

digitalWrite(green1,LOW);
digitalWrite(white4,LOW);
delay(pat6);
digitalWrite(green1,HIGH);
digitalWrite(white4,HIGH);

digitalWrite(orange1,LOW);
digitalWrite(red4,LOW);
delay(pat6);
digitalWrite(orange1,HIGH);
digitalWrite(red4,HIGH);

}

int patten07(){
digitalWrite(orange1,HIGH);
digitalWrite(blue1,HIGH);
digitalWrite(red1,HIGH);
digitalWrite(green2,HIGH);
digitalWrite(white2,HIGH);
digitalWrite(orange3,HIGH);
digitalWrite(blue3,HIGH);
digitalWrite(red3,HIGH);
digitalWrite(green4,HIGH);
digitalWrite(white4,HIGH);
delay(all3);
digitalWrite(orange1,LOW);
digitalWrite(blue1,LOW);
digitalWrite(red1,LOW);
digitalWrite(green2,LOW);
digitalWrite(white2,LOW);
digitalWrite(orange3,LOW);
digitalWrite(blue3,LOW);
digitalWrite(red3,LOW);
digitalWrite(green4,LOW);
digitalWrite(white4,LOW);

digitalWrite(green1,HIGH);
digitalWrite(white1,HIGH);
digitalWrite(orange2,HIGH);
digitalWrite(blue2,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(green3,HIGH);
digitalWrite(white3,HIGH);
digitalWrite(orange4,HIGH);
digitalWrite(blue4,HIGH);
digitalWrite(red4,HIGH);
delay(all);
digitalWrite(green1,LOW);
digitalWrite(white1,LOW);
digitalWrite(orange2,LOW);
digitalWrite(blue2,LOW);
digitalWrite(red2,LOW);
digitalWrite(green3,LOW);
digitalWrite(white3,LOW);
digitalWrite(orange4,LOW);
digitalWrite(blue4,LOW);
digitalWrite(red4,LOW);
}

int patten08(){
digitalWrite(blue1,HIGH);
digitalWrite(red1,HIGH);
digitalWrite(green2,HIGH);
digitalWrite(white2,HIGH);
digitalWrite(orange3,HIGH);
digitalWrite(blue3,HIGH);
digitalWrite(red3,HIGH);
digitalWrite(green4,HIGH);
digitalWrite(white4,HIGH);
delay(pat8);
digitalWrite(blue1,LOW);
digitalWrite(red1,LOW);
digitalWrite(green2,LOW);
digitalWrite(white2,LOW);
digitalWrite(orange3,LOW);
digitalWrite(blue3,LOW);
digitalWrite(red3,LOW);
digitalWrite(green4,LOW);
digitalWrite(white4,LOW);
}

int patten09(){
digitalWrite(white1,HIGH);
digitalWrite(orange2,HIGH);
digitalWrite(blue2,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(green3,HIGH);
digitalWrite(white3,HIGH);
digitalWrite(orange4,HIGH);
digitalWrite(blue4,HIGH);
digitalWrite(red4,HIGH);
delay(pat9);
digitalWrite(white1,LOW);
digitalWrite(orange2,LOW);
digitalWrite(blue2,LOW);
digitalWrite(red2,LOW);
digitalWrite(green3,LOW);
digitalWrite(white3,LOW);
digitalWrite(orange4,LOW);
digitalWrite(blue4,LOW);
digitalWrite(red4,LOW);
}

int patten10(){
digitalWrite(red1,HIGH);
digitalWrite(green2,HIGH);
digitalWrite(white2,HIGH);
digitalWrite(orange3,HIGH);
digitalWrite(blue3,HIGH);
digitalWrite(red3,HIGH);
digitalWrite(green4,HIGH);
digitalWrite(white4,HIGH);
delay(all);
digitalWrite(red1,LOW);
digitalWrite(green2,LOW);
digitalWrite(white2,LOW);
digitalWrite(orange3,LOW);
digitalWrite(blue3,LOW);
digitalWrite(red3,LOW);
digitalWrite(green4,LOW);
digitalWrite(white4,LOW);
}
