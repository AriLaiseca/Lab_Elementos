int Dky25 = 3;               // KY-025 para la interfaz digital
int Aky25 = A0;              // KY-025 para la interfaz analógica
int D;                       //Variable D, para almacenar valores digitales de KY-025

void setup()
{

pinMode(Led, OUTPUT);        //Declaración de Led,pin12 como pin de Salida
pinMode(Dky25, INPUT);       //Declaración del KY-021 como pin de Entrada Digital
Serial.begin(9600);          //Inicialización de puerto serial a 9600 baudios

}
void loop()
{
Serial.print("Digital");                //Mensaje en el Monitor Serial, para identificar...
Serial.print("-");                      //...los valores de lectura por puerto digital o...
Serial.println("Analógico");            //... analógico
Serial.print(digitalRead(Dky25));       //Impresión de valores provenientes del pin digital
Serial.print("-");
Serial.println(analogRead(Aky25));      // impresión de valores provenientes del pin analógico
delay(500);                             //este proceso dura medio segundo  

} 