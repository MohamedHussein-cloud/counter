#define A  13
#define B  12
#define C  11
#define D  10  
#define bushbutton1  9
#define bushbutton2  8
int segment[4]={A,B,C,D};
int arr[10][4]={{0,0,0,0},
           {1,0,0,0},
           {0,1,0,0},
           {1,1,0,0},
           {0,0,1,0},
           {1,0,1,0},
           {0,1,1,0},
           {1,1,1,0},
           {0,0,0,1},
           {1,0,0,1}};
int i = 0;
int x =0;
int f =0;
void setup() {
  // put your setup code here, to run once:
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
pinMode(bushbutton1,INPUT);
pinMode(bushbutton2,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  seg();
  if(digitalRead(bushbutton1)){
  x++;
}
if(digitalRead(bushbutton2)){
    x--;
}
}
void seg(){
  for(f=0,i=0;f<=3,i<=3;f++,i++){
  digitalWrite(segment[i],arr[x][f]);
}
}
