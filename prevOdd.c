#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        a -= 1;
    }
    
    printf("%d\n", a);
    
    return 0;
}


// Считать целое число. Вывести на экран максимальное нечетное число, не большее введенного.

// Пример ввода
// 16
// Пример вывода
// 15