void navigateMenu() {
  static int currentSelection = 0;
  if (M5.BtnA.wasPressed()) {
    currentSelection--;
    if (currentSelection < 0) {
      currentSelection = 14; // Wrap around to the last example
    }
  } else if (M5.BtnC.wasPressed()) {
    currentSelection++;
    if (currentSelection > 14) {
      currentSelection = 0; // Wrap around to the first example
    }
  } else if (M5.BtnB.wasPressed()) {
    selectedExample = currentSelection + 1; // Examples are 1-indexed
  }

  // Update the menu display
  showMenu();
  M5.Lcd.setCursor(0, 80);
  M5.Lcd.printf("Current Selection: %d", currentSelection + 1);
}
