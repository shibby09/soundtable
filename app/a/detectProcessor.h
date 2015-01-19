#ifndef DETECTPROCESSOR_H
#define DETECTPROCESSOR_H

#include "videoprocessor.h"
using namespace cv;

class DetectProcessor
{
public:
    DetectProcessor();
    void analyse(const cv::Mat&source); //Rueckgabe anpassen!
    void RegionAnalyse(const cv::Mat &input);
    void centerOfMass(cv::Mat& image);
private:
    
private:
   

};

#endif // DetectPROCESSOR_H
