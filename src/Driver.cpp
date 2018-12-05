#include "ComplexMath.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


Complex parseStringToComplex(string in){
  double realComponent = 0.0;
  double imaginaryComponent = 0.0;

  string temp;

  bool lookingforRealComponent = true;
  for (int i =0 ; i < in.length(); i++){
    if ((in[i]) == '+' || in[i]== '-' || in[i] == 'i'){
      if (lookingforRealComponent){
        realComponent = stof(temp);
      }
      else{
        imaginaryComponent = stof(temp);
      }
      temp = "";
    }
    else{
      temp+= in[i];
    }
  }
  Complex complexNumberParsed(realComponent, imaginaryComponent);
  return complexNumberParsed;
}


int main(){
  ifstream infile; // ifstream object to read in from DriverOperations
  cout << "something" << endl;
  infile.open("DriverOperations.txt");
  // if (infile.is_open())
  // {
  //   cout << "File Opened" << endl;
  //   string line;
  //   while (getline(infile, line)){
  //     string temp; // string to hold the information that is being loaded into the complex number
  //     bool lookingForComplex1 //boolean that is true when putting data in to the first complex number, false when the second complex number
  //
  //   }
  //   infile.close();
  // }
  string a ("1+2i");
  cout << "TESTING PARSE WITH STRING: " << a << endl;
  cout << "YIELDS: " << parseStringToComplex(a) << endl;
  return 0;

}
