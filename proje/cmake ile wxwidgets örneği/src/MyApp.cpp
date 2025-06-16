#include <wx/wx.h>
#include "MyApp.hpp"
#include "MyFrame.hpp" 
#include "opencv2/opencv.hpp"

bool MyApp::OnInit(){ 
     MyFrame* frame = new MyFrame("Merhaba WxWidgets",wxPoint(0,0),wxSize(500,500)); 
     frame->Show();  
     return true;
}

wxIMPLEMENT_APP(MyApp);