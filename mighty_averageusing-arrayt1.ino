// C++ code
//
void setup()
{
 Serial.begin(9600); 
  const int maxValues = 5;  // Maximum number of values to be entered
int values[maxValues];    // Array to store the entered values
int count = 0;            // Counter for the number of values entered
int sum = 0;  
  // Wait until the required number of values are entered
  while (count < maxValues) {
    // Prompt the user to enter a value
    Serial.print("Enter value #");
    Serial.print(count + 1);
    Serial.print(": ");
    
    // Wait for a value to be entered through the Serial Monitor
    while (!Serial.available()) {
      // Do nothing while waiting
    }
    
    // Read the entered value and store it in the array
    values[count] = Serial.parseInt();
    Serial.println(values[count]);  // Echo the entered value back to the user
    count++;  // Increment the counter
  }

  // Calculate the sum of entered values
  for (int i = 0; i < maxValues; i++) {
    sum += values[i];
  }

  // Calculate and display the average
  float average = (float)sum / maxValues;
  Serial.print("Average: ");
  Serial.println(average);

  // Reset the variables for the next set of values
  count = 0;
  sum = 0;

  // Wait for a moment before starting the next iteration
  delay(1000);
}

void loop()
{
  
}