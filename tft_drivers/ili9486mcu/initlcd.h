case ILI9486_MCU:
	LCD_Write_COM(0x01);		//Soft Reset
	delay(50);

	LCD_Write_COM(0x28);        //Display Off

	LCD_Write_COM(0xC0);        //Power Control 1 [0x0E0E]
	LCD_Write_DATA(0x0d);
	LCD_Write_DATA(0x0d);

	LCD_Write_COM(0xC1);        //Power Control 2 [0x4300]
    LCD_Write_DATA(0x43);
    LCD_Write_DATA(0x00);

    LCD_Write_COM(0xC2);        //Power Control 3
    LCD_Write_DATA(0x00);

	LCD_Write_COM(0xC5);		//VCOM  Control 1 [0x00400040]
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x48);
	LCD_Write_DATA(0x00);
	LCD_Write_DATA(0x48);

	LCD_Write_COM(0xB4);        //Inversion Control
	LCD_Write_DATA(0x00);

	LCD_Write_COM(0xB6);        // Display Function Control
    LCD_Write_DATA(0x00);
    LCD_Write_DATA(0x02);
    LCD_Write_DATA(0x3B);

    // 2.2 HSD 3.5 Inch Initial Code not bad
    LCD_Write_COM(0xE0);
    LCD_Write_DATA(0x0F);LCD_Write_DATA(0x1F);LCD_Write_DATA(0x1C);LCD_Write_DATA(0x0C);LCD_Write_DATA(0x0F);LCD_Write_DATA(0x08);LCD_Write_DATA(0x48);LCD_Write_DATA(0x98);LCD_Write_DATA(0x37);LCD_Write_DATA(0x0A);LCD_Write_DATA(0x13);LCD_Write_DATA(0x04);LCD_Write_DATA(0x11);LCD_Write_DATA(0x0D);LCD_Write_DATA(0x00);
    LCD_Write_COM(0xE1);
    LCD_Write_DATA(0x0F);LCD_Write_DATA(0x32);LCD_Write_DATA(0x2E);LCD_Write_DATA(0x0B);LCD_Write_DATA(0x0D);LCD_Write_DATA(0x05);LCD_Write_DATA(0x47);LCD_Write_DATA(0x75);LCD_Write_DATA(0x37);LCD_Write_DATA(0x06);LCD_Write_DATA(0x10);LCD_Write_DATA(0x03);LCD_Write_DATA(0x24);LCD_Write_DATA(0x20);LCD_Write_DATA(0x00);

    LCD_Write_COM(0x20);        // Display Inversion OFF

    LCD_Write_COM(0x36);        //Memory Access
    LCD_Write_DATA(0x0A);

    LCD_Write_COM(0x3A);        //Interlace Pixel
    LCD_Write_DATA(0x55);

    LCD_Write_COM(0x11);        //Sleep Out

    delay(50);

    LCD_Write_COM(0x29);       //Display On

	break;
