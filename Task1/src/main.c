#include <stdio.h>

int replaceThirdByte(int* number, int* new_value);

int main() {
  int number, new_value;

  printf("Введите целое положительное число: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Ошибка, число должно быть положительным\n");
    return 1;
  }

  printf("Введите новое значение 3-го байта (0...255): ");
  scanf("%d", &new_value);

  if (new_value >= 0 && new_value <= 255) {
    printf("Результат: %d\n", replaceThirdByte(&number, &new_value));
  } else {
    printf("Ошибка, некорректное значение для байта\n");
    return 1;
  }

  return 0;
}

int replaceThirdByte(int* number, int* new_value) {
  unsigned char* byte_p = number;
  byte_p += 2;
  *byte_p = (unsigned char)(*new_value);

  return *number;
}