# ST7920 128x64 Serial Mode LCD Test Example

This example demostrates how to use ST7920 128x64 LCD Module with ESP-IDF in Serial Mode (NOT SPI). The module works using Serial Communication with MCU. Texts, Graphis (using bitmap) and any fonts can be displayed along with basic shape building functionalities.

## How to use example

- To use this example and the library, please assign the E, ES, R/W and RST pins in the "ST7920_SERIAL.h" file.

NOTE:
	- Plese refer the begining of "ST7920_SERIAL.h" files to assign required pins for your proejcts application.

### Hardware Required

- This example requires only a single target (e.g., an ESP32, ESP32-S3 or ESP32-S2).
- This connection usually consists of a E, ES, R/W and RST pins.
- To use the LCD in Serial mode, please connect the PSB Pin to ground to enter the serial mode.


### Build and Flash

Build the project and flash it to the board, then run monitor tool to view serial output:

```
idf.py -p PORT flash monitor
```

(Replace PORT with the name of the serial port to use.)

(To exit the serial monitor, type ``Ctrl-]``.)

See the Getting Started Guide for full steps to configure and use ESP-IDF to build projects.


## Example Breakdown

- In this example, the needed pins get initialized first used for display in output mode.

- Then the display driver gets initialized by calling ST7920_Init().

- After initialization and if wiring is good, we are now ready to display as we like.

- To diaplay graphics like bitmap and shapes and custom fonts (for making fonts, plese refer to fonts file), we need to enter graphics mode as given in example using "ST7920_GraphicMode(1)"

- The display has its own inbuilt font type to diaplay text by using "ST7920_SendString()" and in order to clear this, we must not be in graphics mode, else the text wont be cleared. For safety, use graphics mode and choose custom font and display text using "disp1color_printf()"


## Important Notice

Please refer and go through the library file and its APIs and use it according to your application use cases. You are free to use only the library files and edit it accordingly in your other projects as well but be caseful with the include files and pin assignments!
