
//define note
int Si2 =1975;
int LaS2=1864;
int La2= 1760;
int SolS2=1661;
int Sol2=1567;
int FaS2=1479;
int Fa2= 1396;
int Mi2= 1318;
int ReS2=1244;
int Re2= 1174;
int DoS2=1108;
int Do2= 1046;


int Si = 987;
int LaS= 932;
int La = 880;
int SolS=830;
int Sol= 783;
int FaS= 739;
int Fa=  698;
int Mi=  659;
int ReS= 622;
int Re = 587;
int DoS =554;
int Do = 523;
void setup(void)
{
    Serial.begin(9600);
    // pin mode initial
    pinMode(A5,INPUT);
    pinMode(2,INPUT);
    pinMode(3,INPUT);
    pinMode(4,INPUT);
    pinMode(5,INPUT);
    pinMode(6,INPUT);
    pinMode(7,INPUT);
    pinMode(8,INPUT);
    pinMode(9,OUTPUT);
  
}

void loop(void)
{ 
    while(digitalRead(A5) == HIGH)
    {
        tone(9,Do,50);
    };
    while(digitalRead(2) == HIGH)
    {
        tone(9,Re,50);
    };
    while(digitalRead(3)== HIGH)
    {
        tone(9,Mi,50);
    };
    while(digitalRead(4) == HIGH)
    {
        tone(9,Fa,50);
    };
    while(digitalRead(5) == HIGH)
    {
        tone(9,Sol,50);
    };
    while(digitalRead(6) == HIGH)
    {
        tone(9,La,50);
    };
    while(digitalRead(7) == HIGH)
    {
        tone(9,Si,50);
    };
    while(digitalRead(8) == HIGH)
    {
        while(digitalRead(A5) == HIGH)
        {
            tone(9,Do2,50);
        };
          while(digitalRead(2) == HIGH)
        {
            tone(9,Re2,50);
        };
        while(digitalRead(3)== HIGH)
        {
            tone(9,Mi2,50);
        };
        while(digitalRead(4) == HIGH)
        {
            tone(9,Fa2,50);
        };
        while(digitalRead(5) == HIGH)
        {
            tone(9,Sol2,50);
        };
        while(digitalRead(6) == HIGH)
        {
            tone(9,La2,50);
        };
        while(digitalRead(7) == HIGH)
        {
            tone(9,1975,50);
        };
      }
}