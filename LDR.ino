// Deklarasi pin
const int pinLDR = A0; // Pin analog untuk sensor LDR
const int pinLED = 13; // Pin digital untuk LED

// Batas tegangan yang menjadi ambang nyala LED
const int threshold = 500; // Sesuaikan dengan kebutuhan Anda

void setup() {
  // Inisialisasi pin LED sebagai output
  pinMode(pinLED, OUTPUT);
  // Mulai komunikasi serial
  Serial.begin(9600);
}

void loop() {
  // Membaca nilai analog dari LDR
  int nilaiLDR = analogRead(pinLDR);

  // Menampilkan nilai LDR pada Serial Monitor
  Serial.print("Nilai LDR: ");
  Serial.println(nilaiLDR);

  // Membandingkan nilai LDR dengan ambang batas
  if (nilaiLDR < threshold) {
    // Menyalakan LED jika nilai LDR di bawah ambang batas
    digitalWrite(pinLED, HIGH);
  } else {
    // Mematikan LED jika nilai LDR di atas ambang batas
    digitalWrite(pinLED, LOW);
  }

  // Menunggu selama 100 milidetik sebelum pembacaan berikutnya
  delay(100);
}
