idf_component_register(SRCS "main.c" 
							"../src/ST7920_SERIAL.c" 
							"../src/bitmap.c"
							"../src/fonts/font.c"
							"../src/fonts/f10x16f.c"
							"../src/fonts/f6x8m.c"
                    INCLUDE_DIRS "." "../src" "../src/fonts")
