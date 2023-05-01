

int buzz=2;
int q=350; 
int o=250; 
int d=300; // spatiere timp note
int d2=600;


void setup(){
pinMode(buzz,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT); // cele 3 pin-uri unde adaugam ledurile
}

void loop(){

// notele muzicale

mi_o();digitalWrite(10,HIGH);delay(d);digitalWrite(10,LOW);mi_o();digitalWrite(11,HIGH);delay(d);digitalWrite(11,LOW);mi_q();digitalWrite(10,HIGH);delay(d2);digitalWrite(10,LOW);
mi_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);mi_o();digitalWrite(11,HIGH);delay(d);digitalWrite(11,LOW);mi_q();digitalWrite(12,HIGH);delay(d2);digitalWrite(12,LOW);
mi_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);sol_o();digitalWrite(10,HIGH);delay(d);digitalWrite(10,LOW);do_o();digitalWrite(11,HIGH);delay(d);digitalWrite(11,LOW);re_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);
mi_m();digitalWrite(10,HIGH);delay(d2);digitalWrite(10,LOW);delay(d2);
  
fa_o();digitalWrite(10,HIGH);delay(d);digitalWrite(10,LOW);fa_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);fa_q();digitalWrite(11,HIGH);delay(d2);digitalWrite(11,LOW);
mi_o();digitalWrite(11,HIGH);delay(d);digitalWrite(11,LOW);mi_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);mi_q();digitalWrite(10,HIGH);delay(d2);digitalWrite(10,LOW);
mi_o();digitalWrite(11,HIGH);delay(d);digitalWrite(11,LOW);re_o();digitalWrite(10,HIGH);delay(d);digitalWrite(10,LOW);re_o();digitalWrite(10,HIGH);delay(d);digitalWrite(10,LOW);mi_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);
re_q();digitalWrite(10,HIGH);delay(d2);digitalWrite(10,LOW);sol_q();digitalWrite(11,HIGH);delay(d2);digitalWrite(11,LOW);
  
mi_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);mi_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);mi_q();digitalWrite(11,HIGH);delay(d2);digitalWrite(11,LOW);
mi_o();digitalWrite(10,HIGH);delay(d);digitalWrite(10,LOW);mi_o();digitalWrite(11,HIGH);delay(d);digitalWrite(11,LOW);mi_q();digitalWrite(10,HIGH);delay(d2);digitalWrite(10,LOW);
mi_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);sol_o();digitalWrite(10,HIGH);delay(d);digitalWrite(10,LOW);do_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);re_o();digitalWrite(11,HIGH);delay(d);digitalWrite(11,LOW);
mi_m();digitalWrite(11,HIGH);delay(d2);digitalWrite(11,LOW);delay(d2);
  
fa_o();digitalWrite(10,HIGH);delay(d);digitalWrite(10,LOW);fa_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);fa_q();digitalWrite(11,HIGH);delay(d2);digitalWrite(11,LOW);
mi_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);mi_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);mi_q();digitalWrite(10,HIGH);delay(d2);digitalWrite(10,LOW);
sol_o();digitalWrite(11,HIGH);delay(d);digitalWrite(11,LOW);sol_o();digitalWrite(10,HIGH);delay(d);digitalWrite(10,LOW);fa_o();digitalWrite(12,HIGH);delay(d);digitalWrite(12,LOW);re_o();digitalWrite(11,HIGH);delay(d);digitalWrite(11,LOW);
do_m();digitalWrite(10,HIGH);delay(d2);digitalWrite(10,LOW);delay(d2);
}

void do_q()
{
tone(buzz, 261,q);
}

void re_q()
{
tone(buzz, 294,q);
}

void mi_q()
{
tone(buzz,331,q);
}

void fa_q()
{
tone(buzz,349,q);
}

void sol_q()
{
tone(buzz,392,q);
}

void la_q()
{
tone(buzz,441,q);
}

void si_q()
{
tone (buzz,497,q);
}

void do2_q()
{
tone(buzz,523,q);
}




void do_o()
{
tone(buzz, 261,o);
}

void re_o()
{
tone(buzz,294,o);
}

void mi_o()
{
tone(buzz,331,o);
}

void fa_o()
{
tone(buzz,349,0);
}

void sol_o()
{
tone(buzz,392,o);
}

void la_o()
{
tone(buzz,441,o);
}

void si_o()
{
tone(buzz,497,o);
}

void do2_0()
{
tone(buzz,523,o);
}

void mi_m()
{
tone(buzz,331,q*2);
}

void do_m()
{
tone(buzz, 261,q*2);
}
