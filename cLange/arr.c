#include <stdio.h>
#define COL 5
#define ROW 3

void printArr(const int const array[][COL], const int row, const int col);
void sortArray(int array[], int size);
int medianFunc(const int const array[][COL], size_t sizeArr, size_t column, int sizeArray);

int main()
{
  int myArr[ROW][COL] = {{9, 7, 6, 4, 2},
                         {3, 4, 2, 1, 6},
                         {4, 3, 6, 2, 8}};
  int sizeRow = sizeof(myArr) / sizeof(*myArr);
  int sizeCol = sizeof(myArr[0]) / sizeof(*myArr[0]);
  int sizeArray = sizeCol * sizeRow;
  printf("%d\n", sizeArray);
  printArr(myArr, ROW, COL);
  for(size_t i = 0; i < ROW; ++i){
    sortArray(myArr[i], COL);
  }
  puts("");
  printArr(myArr, ROW, COL);
  medianFunc(myArr, ROW, COL, sizeArray);
}
void printArr(const int const array[][COL], const int row, const int col){
  size_t pass;
  size_t i;
  for(pass = 0; pass < row; ++pass){
    for(i = 0; i < col; ++i){
      printf("%d ", array[pass][i]);
    }
    puts("");
  }
}
void sortArray(int array[], int size){
  void swap(int *element1, int *element2);
  size_t pass;
  size_t i;
  for(pass = 0; pass < size - 1; ++pass){
    for(i = 0; i < size - 1; ++i){
      if(array[i] > array[i + 1]){
        swap(&array[i], &array[i + 1]);
      }
    }
  }
}
void swap(int *element1, int *element2){
  int hold = *element1;
  *element1 = *element2;
  *element2 = hold;
}
int medianFunc(const int const array[][COL], size_t sizeArr, size_t column, int sizeArray){
  int averageFunc(int *total, int size);
  size_t pass;
  size_t i;
  int total = 0;
  for(pass = 0; pass < sizeArr; ++pass){
    for(i = 0; i < column; ++i){
      total += array[pass][i];
    }
  }
  printf("%s", "Total is: ");
  printf("%d", total);
  averageFunc(&total, sizeArray);
}
int averageFunc(int *total, int size){
  float average = 0;
  average = (float)*total / size;
  printf("\n%.2f", average);
}