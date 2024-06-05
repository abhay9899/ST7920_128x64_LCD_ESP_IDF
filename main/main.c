/* Created by Abhay Dutta, 3rd June, 2024 */

/* ESP32 example code for ST7920 128x64 LCD Driver with Driver Library using Serial SPI (not Exactly SPI)*/
/* In this example, Text, Bitmap as well as Different Selected Fonts are used and can be used as your project requires */
/* Please assign the respective Pins according to your proejct needs in the file "ST7920_SERIAL.h"*/

/* 	And please note that, we only use RS, R/W, E and RST pins of the display which are assigned in "ST7920_SERIAL.h"
	along with GND and VCC to ground and 5v respectively.
	Also, to enter the Serial SPI mode, we need to connect PSB pin of the diaplay to GND for this Project
*/

#include "main.h"


void app_main(void)
{
	pin_init();
	ST7920_Init();
  	
  	uint8_t font = FONTID_6X8M;
    ST7920_Clear();

	while(1)
	{
		ST7920_SendString(0, 0, "Hey There!");
		ST7920_SendString(1, 0, "Having fun huh?");
		ST7920_SendString(2, 0, "Haha! Have a good one!");

	  	ST7920_Clear();
	  	ST7920_GraphicMode(1);

	  	ST7920_DrawBitmap(energy_logo);
	  	vTaskDelay(3000 / portTICK_PERIOD_MS);
	  	ST7920_Clear();

	  	disp1color_printf(0, 0, font, "ABCDEFGHIJKLM\r\nNOPQRSTUVWXYZ\r\n0123456789\r\n!@#$%^&*()-+{}[];");
	    disp1color_UpdateFromBuff();

	    vTaskDelay(3000 / portTICK_PERIOD_MS);
	    ST7920_Clear();
 		
 		//Use the functions below to create your required shapes in Graphics Mode only!

		// DrawFilledRectangle(30, 20, 30, 10);
		// DrawCircle(110, 31, 12);
		// DrawCircle(110, 31, 16);
		// DrawLine(3, 60, 127, 33);
		// ST7920_Update();
		// vTaskDelay(5000 / portTICK_PERIOD_MS);
		// ST7920_Clear();
	}
}
