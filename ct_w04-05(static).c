#include <stdio.h>
void counCall() {
    static int counter = 0;                         //ประกาศค่าเเค่ครั้งเเรก และคงค่าต่อ
    counter++;                                      // lncrement the counter each time the function is called
    printf("Function called %d\n", counter);        // print the number of times the function has been called
}
int main() {
    printf("Starting funtion calls...%d\n");        //printf ldentifier
    counCall();                                     //นับครั้งที่1
    printf("After first call;\n");                  //printf ldentifier
    counCall();                                     //นับครั้งที่2

}
//การใช้ static การนับ ครั้งเเรกจะได้ 1 และ ครั้งที่สองจะได้ 2 เพราะการนับจะไม่เริ่มใหม่เสมอ เเต่จะคงค่าไว้