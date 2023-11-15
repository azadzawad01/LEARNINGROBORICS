// Function to check if a number is divisible by both 3 and 5
bool isDivisibleBy3And5(int number) {
  return (number % 3 == 0) && (number % 5 == 0);
}

void setup() {
  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Number to be checked
  int checkNumber = 15; // You can change this number to test different values

  // Check if the number is divisible by both 3 and 5 using the function
  if (isDivisibleBy3And5(checkNumber)) {
    Serial.print(checkNumber);
    Serial.println(" is divisible by both 3 and 5.");
  } else {
    Serial.print(checkNumber);
    Serial.println(" is NOT divisible by both 3 and 5.");
  }

  // Delay for a short period
  delay(1000);}
