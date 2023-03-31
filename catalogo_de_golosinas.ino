/*
 Fundacion Kinal
 Centro Educativo Tecnico Laborla Kinal
 Electronica
 Grado: Quinto
 Seccion: A
 Curso: Taller de eleectronica digital y reparacion de computadoras I
 Nombre: Juan Manuel Sebastian Ixen Coy
 Carne: 2019519
 Fecha: 31/03
*/

#define ARRIBA 2 
#define ABAJO 3 
 int a = 0;
 int b = 0;
struct producto{
 char     Nombre[15];
 int      Precio;
 int      Stock;
 char     Reserva[20];
 int      precio_de_lote;
 };
producto producto1 = {"Gusanitos 1",20,25,"Si hay en existencia"};
producto producto2 = {"Paletas 2",15,30,"No hay en existencia",};
producto producto3 = {"Takis 3",8,15,"si hay en existencia",};
producto producto4 = {"Papitas 4",16,35,"si hay en existencia",};

void setup() {
 pinMode(ARRIBA, INPUT);
 pinMode(ABAJO, INPUT);
 Serial.begin(9600);
 Serial.println("Bienvenido a la tienda de golosinas");

};
void loop() {
 if (digitalRead(ARRIBA)== HIGH){
  b = 1;
  a++;
  delay(300);
 }
 if(a>4){
  a = 1;
 }
  if (digitalRead(ABAJO)== HIGH){
  b = 1;
  a--;
  delay(300);
 }
  if(a<1){
  a = 4;
 }
while(b==1){
  switch(a)
  {
    case(1):
    {
    Serial.println(producto1.Nombre);
    Serial.println(producto1.Precio);
    Serial.println(producto1.Stock);
    Serial.println(producto1.Reserva);
    Serial.println(producto1.Precio*producto1.Stock);
    Serial.println("");
     delay(1000);


    b=2;
    break;    
  }
  case(2):
  {
    Serial.println(producto2.Nombre);
    Serial.println(producto2.Precio);
    Serial.println(producto2.Stock);
    Serial.println(producto2.Reserva);
    Serial.println(producto2.Precio*producto2.Stock);
    Serial.println("");
     delay(1000);


    b=2;
    break; 
}
 case(3):
  {
    Serial.println(producto3.Nombre);
    Serial.println(producto3.Precio);
    Serial.println(producto3.Stock);
    Serial.println(producto3.Reserva);
    Serial.println(producto3.Precio*producto3.Stock);
    Serial.println("");
     delay(1000);

    b=2;
    break; 
}
 case(4):
  {
    Serial.println(producto4.Nombre);
    Serial.println(producto4.Precio);
    Serial.println(producto4.Stock);
    Serial.println(producto4.Reserva);
    Serial.println(producto4.Precio*producto4.Stock);
    Serial.println("");
     delay(1000);

    b=2;
    break; 
}
  }
}
}
