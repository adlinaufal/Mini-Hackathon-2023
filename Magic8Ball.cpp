#include "mbed.h"
#include "TextLCD.h"

InterruptIn button(PA_0); // Button
TextLCD lcd(PC_0, PC_1, PC_2, PC_3, PC_4, PC_5); //LCD interface
void disp() //A function to ask question to user
{
    lcd.cls(); // Clear LCD screen
    lcd.printf("Ask the Magic-8 ball a question"); //Display the question to user
}
int main()
{
    int x; // Declare variable x
    disp(); // Calls the function to display the question
    while(1) // Do forever
    {
        if (button == 0) // Button pressed
        {
            lcd.cls(); // Clear LCD screen
            srand(time(0)); // Ensure that x is not repeated
            x = 1 + rand() % 20; // Generate a random number
            switch(x) // Switch case
            {
                case 1: //case for number 1
                lcd.locate(1, 0); // Position of LCD
                lcd.printf("It is certain"); // Display the answer for this case
                wait_ms(10000); // 10 seconds time for displaying the answer
                disp(); // Calls the function to display the question again
                break; // Exits the switch case
                case 2: // Same process happens for the remaining cases until case 20
                lcd.locate(0, 0);
                lcd.printf("It is decidedly");
                lcd.locate(7, 1); //
                lcd.printf("so");
                wait_ms(10000);
                disp();
                break;
                case 3:
                lcd.locate(0, 0);
                lcd.printf("Without a doubt");
                wait_ms(10000);
                disp();
                break;
                case 4:
                lcd.locate(1, 0);
                lcd.printf("Yes definitely");
                wait_ms(10000);
                disp();
                break;
                case 5:
                lcd.locate(0, 0);
                lcd.printf("You may rely on");
                lcd.locate(7, 1);
                lcd.printf("it");
                wait_ms(10000);
                disp();
                break;
                case 6:
                lcd.locate(2, 0);
                lcd.printf("As I see it,");
                lcd.locate(6, 1);
                lcd.printf("yes");
                wait_ms(10000);
                disp();
                break;
                case 7:
                lcd.locate(2, 0);
                lcd.printf("Most likely");
                wait_ms(10000);
                disp();
                break;
                case 8:
                lcd.locate(2, 0);
                lcd.printf("Outlook good");
                wait_ms(10000);
                disp();
                break;
                case 9:
                lcd.locate(3, 0);
                lcd.printf("Of Course");
                wait_ms(10000);
                disp();
                break;
                case 10:
                lcd.locate(1, 0);
                lcd.printf("Signs point to");
                lcd.locate(6, 1);
                lcd.printf("yes");
                wait_ms(10000);
                disp();
                break;
                case 11:
                lcd.locate(2, 0);
                lcd.printf("Reply hazy, ");
                lcd.locate(3, 1);
                lcd.printf("try again");
                wait_ms(10000);
                disp();
                break;
                case 12:
                lcd.locate(0, 0);
                lcd.printf("Ask again later");
                wait_ms(10000);
                disp();
                break;
                case 13:
                lcd.locate(0, 0);
                lcd.printf("Better not tell");
                lcd.locate(4, 1);
                lcd.printf("you now");
                wait_ms(10000);
                disp();
                break;
                case 14:
                lcd.locate(1, 0);
                lcd.printf("Cannot predict");
                lcd.locate(6, 1);
                lcd.printf("now");
                wait_ms(10000);
                disp();
                break;
                case 15:
                lcd.locate(0, 0);
                lcd.printf("Concentrate and");
                lcd.locate(3, 1);
                lcd.printf("ask again");
                wait_ms(10000);
                disp();
                break;
                case 16:
                lcd.locate(1, 0);
                lcd.printf("Don't count on");
                lcd.locate(7, 1);
                lcd.printf("it");
                wait_ms(10000);
                disp();
                break;
                case 17:
                lcd.locate(1, 0);
                lcd.printf("My reply is no");
                wait_ms(10000);
                disp();
                break;
                case 18:
                lcd.locate(1, 0);
                lcd.printf("My sources say");
                lcd.locate(7, 1);
                lcd.printf("no");
                wait_ms(10000);
                disp();
                break;
                case 19:
                lcd.locate(1, 0);
                lcd.printf("Outlook not so");
                lcd.locate(5, 1);
                lcd.printf("good");
                wait_ms(10000);
                disp();
                break;
                case 20:
                lcd.locate(1, 0);
                lcd.printf("Very doubtful");
                wait_ms(10000);
                disp();
                break;
            }
        }
    }
}
