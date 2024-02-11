#include <stdio.h>
#include <stddef.h>
#define SIZE 100

int lineaSearch(const int array[], int key, size_t size);

int main(void)
{
    int a[SIZE];
    size_t x; // счетчик для инициализации элементов массива
    int searchKey = 0; // искомое значение
    size_t element = 0;  // индекс элемента с искомым значением или -1
    
    
    // создать некоторые данные 
    for(x = 0; x < SIZE; ++x){
        a[x] = 2 * x;
    }
    puts("Enter integer search key");
    scanf("%d", &searchKey);
    

    // выполнить поиск значения searchKey в массиве а
    element = lineaSearch(a, searchKey, SIZE);
    
    // вывести элемент 
    if (element != -1){
        printf("Found value element %d", element);
    }
    else{
        puts("Value not found");
    }

}
// функция сравнивает значения каждого элемента массива с кючом,
// найдено совпадение или не встретится конец массива. 
// возвращает индекс элемента или -1, если совпадение не найдено
int lineaSearch(const int array[], int key, size_t size){
    size_t n;
    for(n = 0; n < size; ++n){
        if(array[n] == key){
            return n;
        }
    }
    return -1; // ключ не найден
}