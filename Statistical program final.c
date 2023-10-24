#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
printf("Welcome to the program of statistics \n Statistics is defined as the scientific method of collecting which aggregates the facts Presenting, analysing the data and drawing inference which are known as DATA from the same\n \n");
int data;
printf (" Enter 1 for AM \n Enter 2 for Median \n Enter 3 for Mode \n Enter 4 for quartile \n Enter 5 for GM \n Enter 6 for HM \n Enter 7 for Standard Deviation \n Enter 8 for Variance \n Enter 9 for Co efficient of variation\nEnter 10 to arrange given numbers in aacending order\n");
   scanf("%d",&data);
   if (data == 1){

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
int sum = 0;
int number;
printf("Enter the elements: ");
for (int i = 0; i < n; i++) {
scanf("%d", &number);
sum += number;}
double mean = (double)sum / n;
printf("Mean of the numbers: %.2lf\n", mean);}
else if (data == 2){
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
{int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int numbers[n];
printf("Enter the elements:\n");
for (int i = 0; i < n; i++) {
scanf("%d", &numbers[i]);}
qsort(numbers, n, sizeof(int), compare);double median;
if (n % 2 == 0) {
median = (double)(numbers[n / 2 - 1] + numbers[n / 2]) / 2.0;
    } else {median = (double)numbers[n / 2];}
printf("Median is: %.2lf\n", median);
}
}
else if (data == 3){
int n, max = 0, mode;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
int count[n];
printf("Enter the elements:\n");
for (int i = 0; i < n; i++) {scanf("%d", &arr[i]);
count[i] = 0;}
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if (arr[i] == arr[j]) {count[i]++;}}}
for (int i = 0; i < n; i++) {
if (count[i] > max) {
max = count[i];
mode = arr[i];}}
printf("The mode is %d\n", mode);
printf (" DISCLAIMER:if the first number u entered is the mode but which is actually not, then we can say that the mode is ill defined");
}
else if (data == 4){
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}int n;
printf("Enter the number of data points: ");
scanf("%d", &n);
int data[n];
printf("Enter the data points: ");
for (int i = 0; i < n; i++) {
scanf("%d", &data[i]);}
qsort(data, n, sizeof(int), compare);
float median;
if (n % 2 == 0) {median = (data[n/2 - 1] + data[n/2]) / 2.0;
    } else {median = data[n/2];}
float q1, q3;
int middle = n / 2;
if (middle % 2 == 0) {
q1 = (data[middle/2 - 1] + data[middle/2]) / 2.0;
q3 = (data[middle + middle/2 - 1] + data[middle + middle/2]) / 2.0;}
else {q1 = data[middle/2];
q3 = data[middle + middle/2];}
printf("1st Quartile (Q1): %.2f\n", q1);
printf("Median (Q2): %.2f\n", median);
printf("3rd Quartile (Q3): %.2f\n", q3);}
else if (data == 5){
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
double product = 1.0;
double number;
printf("Enter the elements: ");
for (int i = 0; i < n; i++) {
scanf("%lf", &number);
product *= number;}
double geometric_mean = pow(product, 1.0 / n);
printf("Geometric Mean of the numbers: %.2lf\n", geometric_mean);}
  else if (data == 6){
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
double sum = 0;
double number;
printf("Enter the elements: ");
for (int i = 0; i < n; i++) {
scanf("%lf", &number);
sum += 1.0 / number;}
double harmonic_mean = n / sum;
printf("Harmonic Mean of the numbers: %.2lf\n", harmonic_mean);} 
else if (data == 7){
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
double numbers[n];
double sum = 0.0;
double mean, standardDeviation = 0.0;
printf("Enter the elements: ");
for (int i = 0; i < n; i++) {
scanf("%lf", &numbers[i]);
sum += numbers[i];}
mean = sum / n;
for (int i = 0; i < n; i++) {
standardDeviation += pow(numbers[i] - mean, 2);}
standardDeviation = sqrt(standardDeviation / n);
printf("Standard Deviation of the numbers: %.2lf\n", standardDeviation);}
  else if (data == 9){
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
double sum = 0.0;
double sum_of_squares = 0.0;
double number;
printf("Enter the elements: ");
for (int i = 0; i < n; i++) {
scanf("%lf", &number);
sum += number;
sum_of_squares += number * number;}
double mean = sum / n;
double variance = (sum_of_squares / n) - (mean * mean);
if (mean == 0) {
printf("Coefficient of Variation is undefined when the mean is zero.\n");} else {double cv = (sqrt(variance) / mean) * 100;
printf("Coefficient of Variation: %.2lf%%\n", cv);}}
else if (data == 8){
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
double sum = 0.0;
double sum_of_squares = 0.0;
double number;
printf("Enter the elements: ");
for (int i = 0; i < n; i++) {
scanf("%lf", &number);
sum += number;
sum_of_squares += number * number;}
double mean = sum / n;
double variance = (sum_of_squares / n) - (mean * mean);
printf("Variance of the numbers: %.2lf\n", variance);}
else if (data == 10){
void bubbleSort(int arr[], int n) {
int temp;
for (int i = 0; i < n - 1; i++) {
for (int j = 0; j < n - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;}}}}
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements: ");
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);}
bubbleSort(arr, n);
printf("The entered numbers in ascending order: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);}}
else {
    printf("Wrong number entered, run the program again and please enter the correct input");
}
printf("\n\nTHANK YOU FOR USING THE PROGRAM");
}