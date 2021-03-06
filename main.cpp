
#include<iostream>
#include<cv2/imgcodecs.hpp>
#include<cv2/highgui.hpp>
#include<cv2/imgproc.hpp>

using namespace std;
using namespace cv;







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

coordinate coordinates[4];              //  new line addition to make it global

void img_setup(s){
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
	
}
	
	
	
 /*   vector<Point2f> pts1;                        //needs to be deleted........
  pts1.push_back(Point2f(coordinates[0].xs,coordinates[0].ys));
  pts1.push_back(Point2f(coordinates[1].xs,coordinates[1].ys));
  pts1.push_back(Point2f(coordinates[2].xs,coordinates[2].ys));
  pts1.push_back(Point2f(coordinates[3].xs,coordinates[3].ys));

*/
	
	
	
	// deletion of above vector ...............

















void main()
{


string src1="Resources/empty.jpg";
string src1="Resources/traffic.jpg";

mat img1 = imread(src1);
mat img2 = imread(src2);


img_setup(src1);  
Point2f im_1_src[4] = {  {(coordinates[0].xs).0f,(coordinates[0].ys).0f},   {(coordinates[1].xs).0f, (coordintes[1].ys).0f},  {(coordinates[2].xs).0f,(coordinates[2].ys).0f},   {(coordinates[3].xs).0f,(coordinates[3].ys).0f}     };        // check for syntax of how to use
  img_setup(src2);
Point2f im_2_src[4] = {  {(coordinates[0].xs).0f,(coordinates[0].ys).0f},   {(coordinates[1].xs).0f, (coordintes[1].ys).0f},  {(coordinates[2].xs).0f,(coordinates[2].ys).0f},   {(coordinates[3].xs).0f,(coordinates[3].ys).0f}     };        // check for syntax of how to use

 
	// changes in the above four lines... instead of using vector<2f> directly taking values from global coordinate coordinates  struct...........
	
	



Point2f im_1_dest[4] = {  {0.0f,0.0f},   {1050.0f,0.0f},  {0.0f,0.1075.0f},   {1050.0f,1075.0f}     };         // set  the dimensions of the desired output wrapped image
Point2f im_2_dest[4] = {  {0.0f,0.0f},   {1050.0f,0.0f},  {0.0f,0.1075.0f},   {1050.0f,1075.0f}     };         // set  the dimensions of the desired output wrapped image

	

homo_1 = getPerspectiveTransform(im_1_src, im_1_dest);
homo_2 = getPerspectiveTransform(im_2_src, im_2_dest);

warpPerspective(img1, img1_warp, homo_1, Points(w1,h1));
warpPerspective(img2, img2_warp, homo_2, Points(w2,h2));

mat img_crop_1, img_crop_2;

rect c1(850,0,1050,1075);
rect c2(850,0,1050,1075);



img_crop_1 = img(c1);
img_crop_2 = img(c2);


imshow("empty road", img1_warp);
imshow("traffic road", img2_warp);

waitKey(0);

}
