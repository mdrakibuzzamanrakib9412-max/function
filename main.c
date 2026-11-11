#include <stdio.h>

void print_iso_formatted_date_y(int , int );
void print_date();//this is called function signature/declaration
void print_iso_formatted_date(int, int, int) ;//this is called function signature/declaration
int giving_date_value(int , int , int );//this is called function signature/declaration




int main() {
   /*int year=2048;
    int month=12;
    int day=1;*/
    print_date();//()-calling the function to the main(run the specific function)
    print_iso_formatted_date(1,2048,12);
    print_iso_formatted_date_y(1,15);


    int number_of_days_local=giving_date_value(1,12,2048);
    printf("%d\n",number_of_days_local);

    return 0;
}
//Function 2: With Parameters, No Return value (void)
void print_iso_formatted_date(int saddam, int rakib, int jahidul) {

    printf("%d-%02d-%02d\n",rakib,jahidul,saddam);//pads the empty space with leading zeroes
    //this actual block of code called function definition
}
//Function 1: No Parameter, No Return value (void)
void print_date() {

    printf("Today is December 2048\n");

}
//Function 2: With Parameters And a  Return value
int giving_date_value(int day, int month, int year){

    int days=day+month*30+year*365;
    return days;
}
/*void print_iso_formatted_date_y(int day, int month ) {
    printf("%d-%02d-%02d\n", 2024, month, day);//A second function (not overloaded) is possible in C for this purpose:
}
*/
void print_iso_formatted_date_y(int day, int month) {
    print_iso_formatted_date(day,2024, month); //just forward the work to first function
                                                                          // print_iso_formatted_date
}
/*void print_iso_formatted_date_y(int day, int month)- in c++, you can have same name for both functions meaning
void print_iso_formatted_date(int day, int month, int year) and void print_iso_formatted_date_y(int day, int month) are
same thing*/