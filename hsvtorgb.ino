int redPin = 9;
int greenPin = 10;
int bluePin = 11;

float h = 0, s = 0, v = 0;
int r, g, b;

void setup() {
  Serial.begin(9600);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  Serial.println("Enter HSV values separated by spaces (e.g. 180 1 1):");
}

void loop() {
  if (Serial.available()) {
    h = Serial.parseFloat();   // Hue (0-360)
    s = Serial.parseFloat();   // Saturation (0-1)
    v = Serial.parseFloat();   // Value/Brightness (0-1)

    HSVtoRGB(h, s, v, r, g, b);

    analogWrite(redPin, r);
    analogWrite(greenPin, g);
    analogWrite(bluePin, b);

    Serial.print("Converted RGB: ");
    Serial.print(r); Serial.print(", ");
    Serial.print(g); Serial.print(", ");
    Serial.println(b);
    Serial.println("Enter next HSV:");
  }
}

void HSVtoRGB(float H, float S, float V, int& R, int& G, int& B) {
  float C = S * V;
  float X = C * (1 - abs(fmod(H / 60.0, 2) - 1));
  float m = V - C;
  float r, g, b;

  if (H < 60)      { r = C; g = X; b = 0; }
  else if (H < 120){ r = X; g = C; b = 0; }
  else if (H < 180){ r = 0; g = C; b = X; }
  else if (H < 240){ r = 0; g = X; b = C; }
  else if (H < 300){ r = X; g = 0; b = C; }
  else             { r = C; g = 0; b = X; }

  R = (r + m) * 255;
  G = (g + m) * 255;
  B = (b + m) * 255;
}
