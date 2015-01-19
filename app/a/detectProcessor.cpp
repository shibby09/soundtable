#include "detectProcessor.h"
#include <QDebug>
using namespace cv;


DetectProcessor::DetectProcessor()
 
{
    
}

void DetectProcessor::analyse(const Mat &input){
    Mat mask;
    input.copyTo(mask);
    vector<vector<Point> >contours;
    findContours(mask, contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);
    qDebug() << "Anzahl Objekte: " << contours.size();
    for(int i = 0; i < contours.size(); i++){
            vector<Point>contour = contours[i];
            int area = contourArea(contour);
            qDebug() << "Objekte-Nr.: " << i;
            qDebug() << "Objekte-Nr.: " << area;
    }

   }



