#include <stdio.h>

const int GLOBAL_RATE = 10; // ค่าคงที่ระดับ Global

void calculate() {
  const int LOCAL_BONUS = 50; // ค่าคงที่ระดับ Local
  printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
  printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
  calculate();
  printf("GLOBAL_RATE from main = %d\n", GLOBAL_RATE); // แสดงค่า Global rate จาก main

  // ลองพยายามพิมพ์ LOCAL_BONUS ใน main - จะทำให้เกิด compile-time error
  // หากต้องการทดสอบ ให้ลบคอมเมนต์บรรทัดด้านล่างออก
  // printf("LOCAL_BONUS from main = %d\n", LOCAL_BONUS); 

  return 0;
  }