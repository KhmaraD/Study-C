#include <stdio.h>

#define SIZE 10

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[SIZE];
    
    for ( int i = 0; i < SIZE; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    fclose(in);
    
    for ( int i = 0; i < SIZE - 1; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[SIZE-1]);
    fclose(out);
    
    return 0;
}


// Считать в массив последовательность чисел длиной 10 из файла task.in.
// Записать его через пробел в файл task.out.

// Пример ввода
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода
// 10 20 30 40 50 60 70 80 90 100
// epic win