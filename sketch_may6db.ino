#define BLYNK_TEMPLATE_ID "TMPL3hIFG-Kfi"        // Your Template ID
#define BLYNK_TEMPLATE_NAME "Farm Security"       // Your Template Name
#define BLYNK_AUTH_TOKEN "kWb35Zsz3J1rhDLP7nCMcMIT89gvUCgv"  // Your Auth Token

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "OnePlus Nord";   // Replace with your actual Wi-Fi SSID
char pass[] = "lovesiddhi005";  // Replace with your actual Wi-Fi password

#define PIR_PIN       12  // PIR sensor at top
#define IR_PIN        34  // IR sensor at bottom
#define MOTION2_PIN   13  // New motion sensor (e.g., front gate)
#define BUZZER_PIN     5  // Buzzer output

void setup() {
  Serial.begin(115200);  // Start the Serial Monitor at 115200 baud rate

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  pinMode(PIR_PIN, INPUT);
  pinMode(IR_PIN, INPUT);
  pinMode(MOTION2_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("Farm Security System Initialized");

  delay(0);  // Allow time for initialization
}

void loop() {
  Blynk.run();  // Blynk run to keep the connection

  int pir = digitalRead(PIR_PIN);
  int ir = digitalRead(IR_PIN);
  int motion2 = digitalRead(MOTION2_PIN);
  int buzzerState = LOW;

  Serial.print("PIR (Top): ");
  Serial.print(pir);
  Serial.print(" | IR (Bottom): ");
  Serial.print(ir);
  Serial.print(" | Motion2 (Gate): ");
  Serial.println(motion2);

  // Decision logic
  if (motion2 == HIGH) {
    buzzerState = HIGH;
    Blynk.logEvent("motion_detected", "Gate motion detected!");
  } else if (pir == LOW && ir == HIGH) {
    buzzerState = LOW;
  } else if (pir == HIGH && ir == LOW) {
    buzzerState = LOW;
  } else if (pir == LOW && ir == LOW) {
    buzzerState = HIGH;
    Blynk.logEvent("animal_alert", "Animal alert detected!");
  } else {
    buzzerState = LOW;
  }

  digitalWrite(BUZZER_PIN, buzzerState);

  // Update Blynk virtual pins
  Blynk.virtualWrite(V0, pir);
  Blynk.virtualWrite(V1, ir);
  Blynk.virtualWrite(V2, motion2);
  Blynk.virtualWrite(V3, buzzerState);

  delay(100);
}
