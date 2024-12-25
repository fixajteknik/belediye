void setup() {
  Serial.begin(115200);      // Seri haberleşmeyi başlat
  pinMode(0, INPUT_PULLUP);  // GPIO0 pinini giriş olarak ayarla, dahili pull-up direnci etkin
}

void loop() {
  // Düğme basılıyken pin LOW olur (pull-up nedeniyle)
  if (digitalRead(0) == LOW) {  
    Serial.println("Düğmeye basıldı!"); // Ekrana mesaj yazdır
    delay(200); // Gereksiz tekrarı önlemek için bekle
  }
}

