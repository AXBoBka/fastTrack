// Напишите функцию, которая инвертирует только выбранные биты в участке памяти, заданном указателем и длиной в байтах. Способ выбора битов для инвертирования на ваше усмотрение.

#include <iostream>

void inverseBits(void* ptr, unsigned count) {
    char* arr = (char*)ptr;
    int mask = 0b1010;
    if (count != 0) {
        unsigned i = 0;
        while (1==1) {
            arr[i] = (~arr[i]&mask)|(arr[i]&~mask);
            if (++i == count) break;
        }
    }
}

int main()
{
    int arr[] = {0b1111, 0b1111};
    inverseBits(arr, 1);
    for (int i = 0; i < 32; i++) {
        std::cout << (arr[0]&1);
    arr[0] >>= 1;
}
    return 0;
}
