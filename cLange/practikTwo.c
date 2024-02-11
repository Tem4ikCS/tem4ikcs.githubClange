#include <stdio.h>
#include <stddef.h>
#define SIZE 99

void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void bubbleSort(int a[]);
void mode(unsigned int freq[], const unsigned int answer[]);
void printArray(const unsigned int a[]);

int main()
{
    unsigned int frequency[10] = {0}; // инициализация массива частоты
    unsigned int response[SIZE] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 
                                   7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                                   6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                                   7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                                   6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                                   7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                                   5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                                   7, 8, 9, 6, 8, 7, 8, 7, 9, 8,
                                   7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                                   4, 5, 6, 1, 6, 5, 7, 8, 7};   // инициализация массива ответов
    mean(response); 
    median(response);
    mode(frequency, response);

}
// вычисление среднего арифметического всех ответов
void mean(const unsigned int answer[]){ 
    size_t j; // счетчик для суммирования элементов
    unsigned int total = 0; // переменная для хранения суммы
    printf("%s\n%s\n%s\n", "********", "Mean", "********");
    for(j = 0; j < SIZE; j++){
        total += answer[j];
    }
printf("The mean is the average value of data\n"
        "items. The mean is equal to the total of\n"
        "all the data items divided by the number\n"
        "of data items (%u). The mean value for\n"
        "this run is: %u / %u = %.4f\n\b",
        SIZE, total, SIZE, (double) total / SIZE); // ответ исходит из деления тотала на сайз
    }


// сортирует массив и определяет значение медианы (срединого элемента)
void median(unsigned int answer[]){
    printf("\n%s\n%s\n%s\n%s",
    "********", " Median ", "********",
    "The unshorted array of responses is");
    printArray(answer); // вывести неотсортированный массив
    bubbleSort(answer); // отсортировать массив 

    printf("%s", "\n\nThe sorted array is");
    printArray(answer); // вывести отсортированный массив 

    // вывести значение медианы (срединного значения)
    printf("\n\nThe median is element %u of\n"
    "the sorted %u element array.\n"
    "For this run the median is %u\n\n",
    SIZE / 2, SIZE, answer[SIZE / 2]);   
}

// функция определяет модальный (наиболее частый ответ)
void mode(unsigned int freq[], const unsigned int answer[]){
    size_t rating; // счетчик для доступа к элементам массива freq
    size_t j; // счетчик для доступа к элементам массива answer
    unsigned int h; // счетчик для вывода гистограмм
    unsigned int largest = 0; // наибольшая частота встречаемости 
    unsigned int modeValue = 0; // наиболее часто встречаемый ответ

    printf("\n%s\n%s\n%s\n",
    "********", " Mode ", "********");
    // инициализировать массив частот нулями 
    for(rating = 1; rating <= 9; rating++){
        freq[rating] = 0;
    }
    // подсчитать частоты
    for(j = 0; j < SIZE; j++){
        ++freq[answer[j]];
    }

    // вывести заголовки столбцов с результатами 
    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
    "Response", "frequency", "Histogram",
    "1   1   2   2", "5   0   5   0   5");

    // вывести результаты
    for(rating = 1; rating <= 9; rating++){
        printf("%8u%11u ", rating, freq[rating]);
        
        // отслеживать модальное значение и частоту
        if(freq[rating] > largest){
            largest = freq[rating];
            modeValue = rating;
        }
        
        // вывести столбец гистограммы
        for(h = 1; h <= freq[rating]; h++){
        printf("%s ", "*");
        }
        puts(" ");
    }

    // вывести модальное значение 
    printf("\nThe mode is the most frequent value.\n"
           "For this run the mode is %u with occured"
           " %u times.\n", modeValue, largest);
}

// функция пузырьковой сортировки
void bubbleSort(int a[]){
    unsigned int pass; // счетчик проходов
    size_t j; // счетчик сравнений
    unsigned int hold; // удержание большего значения

    // цикл, управляющий проходами 
    for(pass = 1; pass < SIZE; pass++){
        // цикл, управляющий количеством сравнений в одном проходе 
        for(j = 0; j < SIZE; j++){
        if(a[j] > a[j + 1]){
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}
// выводит содержимое массива по 20 элементов в строке 
void printArray(const unsigned int a[]){
    size_t j; // счетчик
    for(j = 0; j < SIZE; j++){
        if(j % 20 == 0) // переносить строку через каждые 20 элементов 
        {
            puts("");
        }
        printf("%2u", a[j]);
    }
}
