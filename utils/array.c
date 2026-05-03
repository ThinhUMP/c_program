#include<stdio.h>

int array(void){
    char name[7]="Hello";
    for (int i=0; i<10; i++){
        printf("%c ", name[i]);
    }
    return 0;
}

//Print an array with n elements
void printElement(int a[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
}

//Compute the average of elements
double avgArr(int a[], int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        sum+=a[size];
    }
    return (sum/size);
}

//Reverse an array
//See pointer file

//Find the minimum value
int minArr(int a[], int size){
    int min = a[0];
    for (int i=1; i<size; i++){
        if (a[size]<min){
            min = a[size];
        }
    }
    return min;
}

//Work with a 2D matrix (sum all elements)
void printArr2D(int row, int col, int a[row][col]){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

/*
grades [18, 30] input, find mode

int grades[max] = {0}; int grade
while (scanf("%d", &grade) == 1 and 18<=grade=<30)
grades[grade-18]++;
*/
typedef struct{
    int mode;
    int grade;
} ModeGrade;


ModeGrade mode_grade(){
    int grades[13]={0}, grade;
    while (scanf("%d ", &grade)==1 && (18<=grade) && (grade<=30)){
        grades[grade-18]++;
    }

    int mode=grades[0];
    int mode_grade = 18;
    for (int i=0; i<13;i++){
        if (grades[i]>mode){
            mode=grades[i];
            mode_grade = i + 18;
        }
    }

    ModeGrade result;
    result.mode = mode;
    result.grade = mode_grade;

    return result;
}


/*
sort values in ascending order or descending order from scratch
2 solutions:
- compare => swap
- mergesort
+ mergesort: recursive
+ merge: not recursive
*/
//Method 1: swap util finish
void sortArr(int arr[], int size){
    if (size==1){
        return;
    }

    for (int i=0; i<size-1;i++){
        int temp;
        if (arr[i]>arr[i+1]){
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }

    sortArr(arr, size-1);
}

//Method2: mergesort
//see mergesort.c file

/*
given a sorted array, 
if the index of value, we can do like the guessing number in python, find the middle => compare,
then find the middle again
*/
void guessing(int arr[], int size){
    int left=0, right=size-1, guess=0;
    
    while (!guess){
        int mid=(right+left)/2;
        int guess_num = arr[mid];

        printf("The number is %d\n", guess_num);
        printf("Is your number <,>,or=?\n");
        
        char guide;
        scanf(" %c", &guide);
        
        if (guide=='='){
            guess=1;
        }
        else if (guide=='<')
        {
            right=mid-1;
        }
        else{
            left=mid+1;
        }
        
    }
}

//merge
void merge(int a[], int size_a, int b[], int size_b, int c[]){
    int i=0, j=0, k=0;
    
    while (i<size_a && j<size_b){
        if (a[i]<=b[j]){
            c[k] = a[i];
            i++;
        }
        else if (a[i]>b[j])
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i<size_a){
        c[k]=a[i];
        i++;
        k++;
    }

    while (j<size_b){
        c[k]=b[j];
        j++;
        k++;
    }
}

//mergesort
void mergeSort(int arr[], int size){
    // Base case
    if (size <= 1) {
        return;
    }

    // Divide the array into two sub-arrays
    int mid = size / 2;

    // Create leftArr and rightArr
    int leftSize=mid;
    int rightSize=size-mid;

    int leftArr[leftSize];
    int rightArr[rightSize];

    // Copy data from arr to leffArr and rightArr
    for (int i=0;i<leftSize;i++){
        leftArr[i]=arr[i];
    }

    for (int i=0;i<rightSize;i++){
        rightArr[i]=arr[mid+i];
    }

    // Sort leftArr
    mergeSort(leftArr, leftSize);

    // Sort rightArr
    mergeSort(rightArr, rightSize);

    // Merge two sub-arrays
    merge(leftArr, leftSize, rightArr, rightSize, arr);
}

//readline
int readLine(char line[], int max){
    int c;
    int i=0;

    while (i<max-1 && (c=getchar())!=EOF && c!='\n'){
        line[i] = c;
        i++;
    }

    line[i] = '\0';

    return i;
}