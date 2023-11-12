void setup() {
  Serial.begin(9600);  // Initialize Serial communication
}

void loop() {
  int rows = 5;  // Number of rows in the pyramid
  int spaces = rows - 1;  // Initial number of spaces in the first row

  while (spaces >= 0) {
    // Print leading spaces
    int i = 0;
    while (i < spaces) {
      Serial.print(" ");
      i++;
    }

    // Print stars
    int stars = 2 * (rows - spaces) - 1;
    i = 0;
    while (i < stars) {
      Serial.print("*");
      i++;
    }

    // Move to the next line for the next row
    Serial.println();

    // Decrease the number of spaces for the next row
    spaces--;

    // You can add a delay to slow down the printing if needed
    delay(100);
  }

  // Endless loop, the pattern will keep printing
  // You may want to add a delay here to control the speed of the pattern
  delay(1000);
}