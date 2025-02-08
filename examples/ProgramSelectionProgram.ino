#include <M5Stack.h>
#include <Keypad.h>
#include <FastLED.h>

// Define constants for the examples
#define EXAMPLE_ADC 1
#define EXAMPLE_DAC 2
#define EXAMPLE_DC_MOTOR 3
#define EXAMPLE_ENCODER 4
#define EXAMPLE_JOYSTICK 5
#define EXAMPLE_KEYBOARD 6
#define EXAMPLE_MATRIX 7
#define EXAMPLE_SERVO 8
#define EXAMPLE_MICROPHONE 9
#define EXAMPLE_RELAY 10
#define EXAMPLE_RFID 11
#define EXAMPLE_RS-232 12
#define EXAMPLE_RS-485 13
#define EXAMPLE_SENSOR 14
#define EXAMPLE_STEPMOTOR 15


// Define variables
int selectedExample = 0;

// Keypad setup for Keyboard example
const byte ROWS = 4;
const byte COLS = 4;
byte rowPins[ROWS] = {17, 16, 21, 22};
byte colPins[COLS] = {5, 26, 13, 15};
char keys[ROWS][COLS] = {
  {'a', 'b', 'c', 'd'},
  {'e', 'f', 'g', 'h'},
  {'i', 'j', 'k', 'l'},
  {'m', 'n', 'o', 'p'}
};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// FastLED setup for Matrix example
#define DATA_PIN 15
#define LED_TYPE WS2811
#define COLOR_ORDER GRB
#define NUM_LEDS 64
CRGB leds[NUM_LEDS];
#define BRIGHTNESS 5

void setup() {
  M5.begin();
  showMenu();
}

void loop() {
  if (selectedExample == 0) {
    navigateMenu();
  } else {
    runExample();
  }
}

void showMenu() {
  M5.Lcd.clear();
  M5.Lcd.setCursor(0, 0);
  M5.Lcd.println("Select Example:");
  M5.Lcd.println("1: ADC");
  M5.Lcd.println("2: DAC");
  M5.Lcd.println("3: DC-Motor");
  M5.Lcd.println("4: Encoder");
  M5.Lcd.println("5: Joystick");
  M5.Lcd.println("6: Keyboard");
  M5.Lcd.println("7: Matrix");
  M5.Lcd.println("8: Servo");
  M5.Lcd.println("8: Microphone");
  M5.Lcd.println("9: Relay");
  M5.Lcd.println("10: RFID");
  M5.Lcd.println("11: RS-232");
  M5.Lcd.println("12: RS-485");
  M5.Lcd.println("13: Sensor");
  M5.Lcd.println("14: Stepmotor");
}

void navigateMenu() {
  if (M5.BtnA.wasPressed()) {
    selectedExample = EXAMPLE_ADC;
  } else if (M5.BtnB.wasPressed()) {
    selectedExample = EXAMPLE_DAC;
  } else if (M5.BtnC.wasPressed()) {
    selectedExample = EXAMPLE_DC_MOTOR;
  } else if (M5.BtnA.wasReleased() && M5.BtnB.wasReleased()) {
    selectedExample = EXAMPLE_ENCODER;
  } else if (M5.BtnA.wasReleased() && M5.BtnC.wasReleased()) {
    selectedExample = EXAMPLE_JOYSTICK;
  } else if (M5.BtnB.wasReleased() && M5.BtnC.wasReleased()) {
    selectedExample = EXAMPLE_KEYBOARD;
  } else if (M5.BtnA.wasReleased() && M5.BtnB.wasReleased() && M5.BtnC.wasReleased()) {
    selectedExample = EXAMPLE_MATRIX;
  } else if (M5.BtnA.wasPressed()) {
    selectedExample = EXAMPLE_SERVO;
  } else if (M5.BtnB.wasPressed()) {
    selectedExample = EXAMPLE_MICROPHONE;
  } else if (M5.BtnC.wasPressed()) {
    selectedExample = EXAMPLE_RELAY;
  } else if (M5.BtnA.wasReleased() && M5.BtnB.wasReleased()) {
    selectedExample = EXAMPLE_RFID;
  } else if (M5.BtnA.wasReleased() && M5.BtnC.wasReleased()) {
    selectedExample = EXAMPLE_RS-232;
  } else if (M5.BtnB.wasReleased() && M5.BtnC.wasReleased()) {
    selectedExample = EXAMPLE_RS-485;
  } else if (M5.BtnA.wasReleased() && M5.BtnB.wasReleased() && M5.BtnC.wasReleased()) {
    selectedExample = EXAMPLE_SENSOR;
  } else if (M5.BtnA.wasPressed()) {
    selectedExample = EXAMPLE_STEPMOTOR;
  }
}


void runExample() {
  switch (selectedExample) {
    case EXAMPLE_ADC:
      runADC();
      break;
    case EXAMPLE_DAC:
      runDAC();
      break;
    case EXAMPLE_DC_MOTOR:
      runDCMotor();
      break;
    case EXAMPLE_ENCODER:
      runEncoder();
      break;
    case EXAMPLE_JOYSTICK:
      runJoystick();
      break;
    case EXAMPLE_KEYBOARD:
      runKeyboard();
      break;
    case EXAMPLE_MATRIX:
      runMatrix();
      break;
    case EXAMPLE_SERVO:
      runServo();
      break;
    case EXAMPLE_MICROPHONE:
      runMicrophone();
      break;
    case EXAMPLE_RELAY:
      runRelay();
      break;
    case EXAMPLE_RFID:
      runRFID();
      break;
    case EXAMPLE_RS-232:
      runRS-232();
      break;
    case EXAMPLE_RS-485:
      runRS-485();
      break;
    case EXAMPLE_SENSOR:
      runSensor();
      break;
    case EXAMPLE_STEPMOTOR:
      runStepmotor();
      break;
  }
}



void runADC() {
  // ADC Example code goes here
}

void runDAC() {
  // DAC Example code goes here
}

void runDCMotor() {
  // DC-Motor Example code goes here
}

void runEncoder() {
  // Encoder Example code goes here
}

void runJoystick() {
  // Joystick Example code goes here
}

void runKeyboard() {
  // Keyboard Example code goes here
}

void runMatrix() {
  // Matrix Example code goes here
}

void runServo() {
  // Servo Example code goes here
}

void runMicrophone() {
  // Microphone Example code goes here
}

void runRelay() {
  // Relay Example code goes here
}

void runRFID() {
  // RFID Example code goes here
}

void runRS-232() {
  // RS-232 Example code goes here
}

void runRS-485() {
  // RS-485 Example code goes here
}

void runSensor() {
  // Sensor Example code goes here
}

void runStepmotor() {
  // Stepmotor Example code goes here
}

// ("8: Servo")
// ("9: Microphone")
// ("10: Relay")
// ("11: RFID")
// ("12: RS-232")
// ("13: RS-485")
// ("14: Sensor")
// ("15: Stepmotor")
