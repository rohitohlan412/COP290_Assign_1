#include <iostream>

using namespace std;

int main(){
  Mat img1 = imread("empty.jpg");
  if (img1.empty()){
    cout<<"Error loading the image"<<endl;
    return -1;
  }
  namedWindow("My Window",1);
  imshow("My Window",img1);
}
