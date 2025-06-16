#ifndef _MYFARAMEH
     #include <wx/wx.h>

     class MyFrame : public wxFrame{
          public:
               MyFrame(const wxString& title,const wxPoint& pos,const wxSize& size);  
          private:
               void FileSaveAs(wxCommandEvent& event);
               wxDECLARE_EVENT_TABLE();
     };
     #define _MYFARAMEH
#endif