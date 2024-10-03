/*
 * Name        : Assignment 1 .h
 * Author      : Brian Lee
 * Description : file for my includes and function prototypes
 * Sources     : 
 */

#ifndef ASSIGNMENT_1_H
#define ASSIGNMENT_1_H

// Add any includes and using statements Here
#include <iostream>
#include <string>
#include <climits>
using std::cout;
using std::endl;
using std::string;
#include <cctype>
#include <vector>
#include <sstream>
using std::stringstream;
// Declare Function Prototypes Here (What goes above main)
void CountCharacters(string one, int two, int three){
     two =0;
     three=0;

     for (int i = 0; one[i] != '\0'; i++){
        if ((one[i] >= 'a' && one[i] <= 'z' || (one[i] >= 'A' && one[i] <= 'z'))){
            two++;
     }else if(one[i] >= '0' && one[i] <= '9'){
        three++;
        }
     }
}

string UpAndDown(string letter){
    string result = letter;
    int length = result.length();
    int count = 0;

    for (int i = 0; i < length; i++){
        if (count ==0){
            result[i] = toupper(result[i]); //CAP
        }else {
            result[i] = tolower(result[i]); // lower
        }
        count = 1 - count;
    }
    return result;
}

int CountWords(string one){
    int Count = 1;
    if (one.length() == 0){
        return 0;
    }
    for (int i = 0; i < one.length(); i++){
        if (one[i] == ' '){
            ++Count;
        }
    }
    return Count;
}

double ComputeMeanAverage (int array[], unsigned int one){
    int sum = 0;

    for (unsigned int i = 0; i < one; i++){
        sum = array[i] + sum;
    }
    return sum/one;
}

int FindMinValue (const int array[], unsigned int size){
    int minValue = array[0];

    for (unsigned int i = 1; i < size; i++){
        if (array[i] < minValue){
            minValue = array[i];
        }
    }
    return minValue;
}

int FindMaxValue(const int array[], unsigned int size) {
    int maxValue = array[0];

    for (unsigned int i = 1; i < size; ++i) {
        if (array[i] > maxValue) {
            maxValue = array[i];  
    }

    return maxValue;
}
#endif /* ASSIGNMENT_1_H */
