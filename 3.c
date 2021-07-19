//Get input of your name, address, age in years, weight and height from 
//keyboard and display the information using unformatted I/O (String I/O).

#include <stdio.h>

int main(){
    char name[30];
    char address[50];
    char age[3];  //2digit(00-99)+NULL character
    char weight[3];  //2digit(00-99)+NULL character
    char height_ft[2];  //1digit(0-9)+NULL character
    char height_inch[3];  ////2digit(0-11)+NULL character TODO: Input Validation

    puts("Enter your name.");
    gets(name);
    fseek(stdin, 0, SEEK_END); //Clears buffer.

    puts("\nEnter your address.");
    gets(address);
    fseek(stdin, 0, SEEK_END);

    puts("\nEnter your age in years.");
    gets(age);
    fseek(stdin, 0, SEEK_END);

    puts("\nEnter your weight in kg.");
    gets(weight);
    fseek(stdin, 0, SEEK_END);

    puts("\nEnter your height:");
    puts("Feet:");
    gets(height_ft);
    puts("Inch:");
    gets(height_inch);
    fseek(stdin, 0, SEEK_END);

    puts("\n\nInfo:");
    puts("--------------------");
    puts("Name: ");
    puts(name);
    putchar('\n');

    puts("Address: ");
    puts(address);
    putchar('\n');

    puts("Age: ");
    puts(age);
    puts("Years");
    putchar('\n');

    puts("Weight: ");
    puts(weight);
    puts("kg");
    putchar('\n');
    
    puts("Height: ");
    puts(height_ft);
    puts("feet");
    puts(height_inch);
    puts("inch");

    putchar('\n');
    puts("Thank You!!!");
    putchar('\n');

    return 0;
}

