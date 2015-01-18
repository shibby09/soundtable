#ifndef CONTROLPROCESSOR_H
#define CONTROLPROCESSOR_H

#include "videoprocessor.h"
#include "filterProcessor.h"
using namespace cv;

class ControlProcessor : public VideoProcessor
{
public:
    ControlProcessor();
    void startProcessing(const VideoFormat& format){}
    cv::Mat process(const cv::Mat&source);
    
    
private:
    FilterProcessor* filterProcessor;
    int frameCount;
    cv::Mat unprocessedFrame;
    cv::Mat processedFrame;

};

#endif // CONTROLLPROCESSOR_H
