#include <stdio.h>
#include <stddef.h>
#define SIZE 15

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printPow(const int b[], size_t low, size_t mid, size_t high);

int main()
{
    int a[SIZE]; // создать массив а
    size_t i; // счетчик для инициализации элементов массива а
    int key; // искомое значение 
    size_t result; // индекс элемента с искомым значением или -1

    // создать данные 
    for(i = 0; i < SIZE; i++){
        a[i] = 2 * i;
    }
    printf("%s", "Enter a number between 0 and 28: ");
    scanf("%d", &key);

    printHeader();

    // найти значение в массиве а
    result = binarySearch(a, key, 0, SIZE - 1);

    // вывести результаты
    if(result != -1){
        printf("\n%d found in array element %d\n", key, result);
    }
    else{
        printf("\n%d not found\n", key);
    }
}

// выполняет поиск в массиве методом дихотомии
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high){
    int middle; // значение элемента в середине 

    // выполнить итерации, пока нижний индекс не станет больше верхнего 
    while(low <= high){
        // определить индекс элементов в середине оставшегося фрагмента
        middle = (low + high) / 2;
        // вывести фрагмент массива где используется поиск в текущей итерации 
        printPow(b, low, middle, high);
        // если значение searchKey равно элементу middle, вернуть middle
        if(searchKey == b[middle]){
            return middle;
        }
        // если searchKey меньше элемента middle, установить верхний индекс 
        else if(searchKey < b[middle]){
            high = middle - 1;
        }
        // если searchKey больше элемента middle, установить нижний индекс
        else if(searchKey > b[middle]){
            low = middle + 1;
        }
    }
    return -1;
}

// выводит заголовок 
void printHeader(void){
    unsigned int i; 
    puts("\nSubscripts:");
    // вывести заголовки столбцов 
    for(i = 0; i < SIZE; i++){
        printf("%2u ", i);
    }    
    puts("");
    // вывести строку из дефисов 
    for(i = 1; i <= 4 * SIZE; i++){
        printf("%s", "-");
    }
    puts(""); 
}
// выводит одну строку с текущей частью массива, подлежащец обработки 
void printPow(const int b[], size_t low, size_t mid, size_t high){
    size_t i; // счетчик для обходов элементов массива b
    for( i = 0; i < SIZE; i++){
        // вывести пробелы вместо элементов за границами фpагмента 
        if( i < low || i > high){
            printf("%s ", "   ");
        }
        else if(i == mid){
            printf("%3d*", b[i]);
        }
        else{
            printf("%3d", b[i]);
        }
    }
    puts("");
}
   