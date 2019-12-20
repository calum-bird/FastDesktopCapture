#include <iostream>
#include "../include/ScreenCapture.h"

int main()
{
    std::cout << "Initializing frame capture..." << std::endl;

    //Setup Screen Capture for all monitors
    /*
    auto frameGrabber = SL::Screen_Capture::CreateCaptureConfiguration([]()
    {
        return SL::Screen_Capture::GetMonitors();
    })->onFrameChanged([&](const SL::Screen_Capture::Image& img, const SL::Screen_Capture::Monitor& monitor)
    {
        
    })->onNewFrame([&](const SL::Screen_Capture::Image& img, const SL::Screen_Capture::Monitor& monitor)
    {

    })->start_capturing();

    frameGrabber->setFrameChangeInterval(std::chrono::milliseconds(100));//100 ms
    frameGrabber->setMouseChangeInterval(std::chrono::milliseconds(100));//100 ms
    */

    return 0;
}