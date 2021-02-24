
#include<iostream>
#include<cv2/imgcodecs.hpp>

using namespace std;
using namespace cv;

void main()
{


string src1="Resources/empty.jpg";
string src1="Resources/traffic.jpg";

mat img1 = imread(src1);
mat img2 = imread(src2);


Point2f im_1_src[4] = {  {},   {},  {},   {}     };
Point2f im_2_src[4] = {  {},   {},  {},   {}     };


Point2f im_1_dest[4] = {  {},   {},  {},   {}     };
Point2f im_2_dest[4] = {  {},   {},  {},   {}     };


homo_1 = getPerspectiveTransform(im_1_src, im_1_dest);
homo_1 = getPerspectiveTransform(im_2_src, im_2_dest);

warpPerspective(img1, img1_warp, homo_1, Points(w1,h1));
warpPerspective(img2, img2_warp, homo_2, Points(w2,h2));

mat img_crop_1, img_crop_2;

rect c1();
rect c2();



img_crop_1 = img(c1);
img_crop_2 = img(c2);


imshow("empty road", img1_warp);
imshow("traffic road", img2_warp);

waitKey(0);

}
