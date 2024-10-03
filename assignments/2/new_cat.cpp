//Author : Brian Lee
//Assignment 2: New Cat

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

// Command line arguements, file1 being number of arguments passed
//files being the array of strings
int main(int file1, char* files[]){
    //If no files were given
string line;
  //checking if there are no command lines
  if (file1 == 1){
    //reading until end of file
   while (!std::cin.eof()){
    getline(cin, line);
      cout << line << endl;
  }
  //If one or more files were given
} else {
    //loop that checks if the files exists
  for (int i = 1; i < file1; i++){
    ifstream file(files[i]);
      //check f file was opened incorrectly
      if (!file){
        cout << "Filename was not valid." << endl;
        return 1;
      }
  }
}
    //outputting the files
    for (int i = 1; i < file1; i++){
        string line2;
          //opens the file for reading
          ifstream file(files[i]);
            while (getline(file, line2)){
                cout << line2 << endl;
            }
        }   
        return 0;
 }


