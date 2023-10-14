#include<iostream>
using namespace std;

void fillArray(int size, int numbers[] );
double findMean(int size, int numbers[]);
int lowVal(int size, int numbers[]);
int hiVal(int size, int numbers[]);


int main(){
  cout <<"Please enter the size of your array"<< endl;
  int size;
  cin >> size;
  int numbers[size];
  fillArray(size, numbers);
  for(int i = 0; i < size; i++){
    cout <<"Array Output > "<< i << " " <<numbers[i]<< endl;
  }
  cout <<"The mean of the values in this array is "<<findMean(size, numbers)<<endl;
  cout <<"The lowest value in this array is "<<lowVal(size,numbers)<<endl;
  cout <<"The highest value in this array is "<<hiVal(size,numbers)<<endl;

  return 0;
}

void fillArray(int size, int numbers[] ){
  cout << "Please enter "<< size << " integers seperated by spaces." << endl;
  for(int i = 0; i < size; i++){
    cin >> numbers[i];
  }
  return;
}
double findMean(int size, int numbers[]){
  double mean;
  double total = 0;
  for(int i = 0; i < size; i++){
    total = total + numbers[i];
  }
  mean = total/size;
  return mean;
}

int lowVal(int size, int numbers[]){
  int low = numbers[0];
  for(int i = 0; i < size; i++){
    if( numbers[i] < low ){
      low = numbers[i];
    }
  }
  return low;
}
int hiVal(int size, int numbers[]){
  int hi = numbers[0];
  for(int i = 0; i < size; i++){
    if( numbers[i] > hi ){
      hi = numbers[i];
    }
  }
  return hi;
}
