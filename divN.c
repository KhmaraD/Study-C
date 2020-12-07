#include <stdio.h>

int main() {
    int min, max, divisor;
    
    scanf("%d %d %d", &min, &max, &divisor);
    
    if ( min <= 0 ) {
        min -= min % divisor;
    } else if ( min % divisor != 0 && min > 0 ) {
        min -= min % divisor;
        min += divisor;
    }
    for ( ; min <= max; min += divisor ) {
        printf("%d\n", min);
    }
    
    return 0;
}


// Считать с клавиатуры целые числа min, max и положительный делитель. Вывести в столбик числа, кратные делителю, от min до max включительно.

// Пример ввода
// 0 8 2
// Пример вывода
// 0
// 2
// 4
// 6
// 8

// int main() {
//     int min, max, divisor;
//     int remainder;
    
//     scanf("%d %d %d", &min, &max, &divisor);
    
//     remainder = min % divisor;
//     if ( remainder > 0 ) {
//         min += divisor;
//     }
//     min -= remainder;
//     for ( int i = min; i <= max; i += divisor ) {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }