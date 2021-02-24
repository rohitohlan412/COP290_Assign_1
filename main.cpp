#include <iostream>

using namespace std;

void img_setup(str s);

struct coordinate{
	int xs;
	int ys;
};

coordinate c;
c.xs=-1;
c.ys=-1;

bool newClick = false;

void MouseClick(int event,int x,int y,int flags, void*){
  if (event = EVENT_LBUTTONDOWN){
    c.xs = x;
    c.ys = y;
    newClick = true;
   }
}

int main(){
  return 0;
}

img_setup(s){
  Mat img1 = imread(s);
  if (img1.empty()){
    cout<<"Error loading the image"<<endl;
    return -1;
  }
  namedWindow("My Window",1);
  imshow("My Window",img1);
  coordinate coordinates[4];
  for (int i=0;i<4;i++){
    waitkey(0);
    if (newClick){
      coordinates[i].xs = c.xs;     // coordinates is struct--coordinate.... co[i][0].xs=c.xs   co[i][0].ys=c.ys
      coordinates[i].ys = c.ys;
    }
  }
  vector<Point2f> pts1;
  pts1.push_back(Point2f(coordinates[0].xs,coordinates[0].ys));
  pts1.push_back(Point2f(coordinates[1].xs,coordinates[1].ys));
  pts1.push_back(Point2f(coordinates[2].xs,coordinates[2].ys));
  pts1.push_back(Point2f(coordinates[3].xs,coordinates[3].ys));
}
