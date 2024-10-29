
![[image-15.webp]]


```
#include <pic.h>
void delay();
void main()
{
	TRISD=0X00;
	while(1)
	{
		PORTD=0XFF;
		delay();
		PORTD=0X00;
		delay();
	}
}
	void delay()
	{
		int i,j;
		for(i=0;i<500;i++)
		for(j=0;j<500;j++);
	}
```

to compile top red button

build -->  

protious --> bin --> isis professional --> click p -->  in search bar --> pic16f877a    (ide michro controller name aah  )  
![[PIC16F877A-Microcontroller.png]]


we need to inject the .hex file into the controller


![[PIC16F877A INPUT PIN CCT.png]]

double click on the image

program file --> .hex file

processor clock frequency 10 hz

devices list --> led add ( active led --> animated led)

---
## connection

terminal mod --> ground place near the board

pin 19 --> led blue --> ground

---

to display alternate led

## image

```
#include <pic.h>
void delay();
void main()
{
	TRISD=0X00;
	while(1)
	{
		PORTD=0XAA;
		delay();
		PORTD=0X55;
		delay();
		
	}
}
	void delay()
	{
		int i,j;
		for(i=0;i<250;i++)
		for(j=0;j<250;j++);
	}
```


---

take button input and blink image


![[8d2330b2-dfad-4bb6-a7c1-af103cd0ccd1.jpg]]


```
#include <pic.h>

void delay();  // Function declaration

void main()
{
    TRISD = 0x00;  // Set PORTD as output
    TRISB = 0x01;  // Set RB0 as input (assuming TRISB bit 0 is input)
    
    while(1)
    {
        if(RB0 == 0)  // Check if RB0 is low (button pressed)
        {
            PORTD = 0xAA;  // Set alternating bits (10101010)
            delay();       // Delay
            PORTD = 0x55;  // Set opposite alternating bits (01010101)
            delay();       // Delay
        }
    }
}

void delay()
{
    int i, j;
    for(i = 0; i < 250; i++)
        for(j = 0; j < 250; j++);
}

```


IMAGE


---

ALTERNATE PIN with button

so we are placing three button ito three input pins RB0,RB1,RB2

when we press rb 1 first patter bulb will blink



```
#include <pic.h>

void delay();  // Function declaration

void main()
{
    TRISB = 0xFF;  // Set PORTB as input
    TRISD = 0x00;  // Set PORTD as output
    
    while(1)
    {
        if(RB0 == 0)  // Check if RB0 is pressed
        {
            PORTD = 0xFF;  // Set all pins of PORTD high
            delay();
            PORTD = 0x00;  // Set all pins of PORTD low
            delay();
        }
        else if(RB1 == 0)  // Check if RB1 is pressed
        {
            PORTD = 0x0F;  // Set lower 4 bits of PORTD high
            delay();
            PORTD = 0xF0;  // Set upper 4 bits of PORTD high
            delay();
        }
        else if(RB2 == 0)  // Check if RB2 is pressed
        {
            PORTD = 0x55;  // Set alternating bits (01010101)
            delay();
            PORTD = 0xAA;  // Set opposite alternating bits (10101010)
            delay();
        }
    }
}

void delay()
{
    int i, j;
    for(i = 0; i < 250; i++)
        for(j = 0; j < 250; j++);  // Simple delay using nested loops
}

```


### Changes:

1. **`PORTD` instead of `PORTID`**: Fixed the typo in `PORTD` to ensure you are controlling the correct port.
2. **Input Checking**: The logic checks for `RB0`, `RB1`, and `RB2` being pressed (assuming buttons or switches are connected to those pins). When one of them is pressed, it triggers a specific pattern on `PORTD`.

This code will:

- Set `PORTD` to `0xFF` (all high) and `0x00` (all low) if `RB0` is pressed.
- Set `PORTD` to `0x0F` (lower 4 bits high) and `0xF0` (upper 4 bits high) if `RB1` is pressed.
- Set alternating bit patterns (`0x55` and `0xAA`) if `RB2` is pressed.

Let me know if you have any further questions or issues!


---

we use pointer to work with display