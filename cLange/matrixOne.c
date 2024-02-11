#include <stdio.h>
#include <stddef.h>
#define STUDENTS 3
#define EXAMS 4

int minimum(int gradess[][EXAMS], size_t pupils, size_t tests);
int maximum(int grades[][EXAMS], size_t pupils, size_t tests);
double average(const int setOfGrades[], size_t tests);
void printArray(int grades[][EXAMS], size_t pupils, size_t tests);

int main()
{
    size_t student; // счетчик студентов 
    // инициализировать массив оценок для трех студентов 
    int studentsGrades[STUDENTS][EXAMS] = 
    {{77, 68, 86, 73},
     {96, 87, 89, 78},
     {70, 90, 86, 81}};
    // вывести массив studentGrades
    puts("The array is:");
    printArray(studentsGrades, STUDENTS, EXAMS);
    // определить низшую и высшую оценку 
    printf("\n\nLowest grade: %d\nHighest grade: %d\n",
    minimum(studentsGrades, STUDENTS, EXAMS),
    maximum(studentsGrades, STUDENTS, EXAMS));
    // вычислить срднюю оценку для каждого студента в отдельности 
    for(student = 0; student < STUDENTS; student++){
        printf("The average grade for student %u is %.2f\n",
            student, average(studentsGrades[student], EXAMS));
    }
}

// низшая оценка
int minimum(int grades[][EXAMS], size_t pupils, size_t tests){
    size_t i; // счетчик студентов 
    size_t j; // счетчик экзаменов 
    int lowGrade = 100; // наивысшая оценка

    // обойти строки массив оценок
    for(i = 0; i < pupils; i++){
        // обойти столбцы в массиве оценок
        for(j = 0; j < tests; j++){
            if(grades[i][j] < lowGrade){
                lowGrade = grades[i][j];
            }
        }
    }
    return lowGrade; // вернуть низшую оценку
}

// находит высшую оценку
int maximum(int grades[][EXAMS], size_t pupils, size_t tests){
    size_t i;
    size_t j;
    int highGrade = 0;
    for(i = 0; i < pupils; i++){
        for(j = 0; j < tests; j++){
            if(grades[i][j] > highGrade){
                highGrade = grades[i][j];
            }
        }
    }
    return highGrade;
}

// определяет среднюю оценку за симесит для одного ученика 
double average(const int setOfGrades[], size_t tests){
    size_t i; // счетчик экзаменов 
    int total = 0; // сумма оценок
    // вычислить сумму оценок 
    for(i = 0; i < tests; i++){
        total += setOfGrades[i];
    }
    return (double) total / tests; // среднее
}

// выводит массив 
void printArray(int grades[][EXAMS], size_t pupils, size_t tests){
    size_t i; // счетчик студентов 
    size_t j; // счетчик экзаменов 

    // вывести заголовки столбцов 
    printf("%s", "               [0]   [1]   [2]   [3]");
    // вывести оценки в табличной форме 
    for(i = 0; i < pupils; i++){
        // вывести метки строк 
        printf("\nstudentGrades[%d]", i);
        // вывести оценки для одного студента 
        for(j = 0; j < tests; j++){
            printf("%-5d", grades[i][j]);
        }
    }
}