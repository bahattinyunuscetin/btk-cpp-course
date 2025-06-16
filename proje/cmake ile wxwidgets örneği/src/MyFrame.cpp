#include <wx/wx.h>
#include <wx/filedlg.h> 
#include <wx/wfstream.h>
#include <wx/splitter.h>  
#include "MyFrame.hpp"

wxBEGIN_EVENT_TABLE(MyFrame,wxFrame)
     EVT_MENU(1,MyFrame::FileSaveAs)
wxEND_EVENT_TABLE()

enum{
     wxID_KAYDET,
     wxID_KAPAT
};
 
MyFrame::MyFrame(const wxString& title,const wxPoint& pos,const wxSize& size) : wxFrame(NULL,wxID_ANY,title,pos,size){
     FreeConsole(); 

     wxMenu* menuFile = new wxMenu;
     menuFile->Append(wxID_KAYDET,"Kaydet","Bu buton dosyayı kaydeder"); 
     menuFile->Append(wxID_KAPAT,"Kapat","Bu buton dosyayı kaydeder"); 

     wxMenu* menu2 = new wxMenu;
     menu2->Append(3,(L"Önemli Beklgeler"),"yardım açıklaması");

     wxMenuBar* menuBar = new wxMenuBar;
     menuBar->Append(menuFile,"Dosya");
     menuBar->Append(menu2,wxString::FromUTF8("Örnek"));

     CreateStatusBar();
     SetStatusText("Merhaba BTK");
     SetMenuBar(menuBar);
  

     //wxSplitterWindow* splitter = new wxSplitterWindow(this,wxID_ANY,wxDefaultPosition,wxDefaultSize); wxSP_LIVE_UPDATE
     wxSplitterWindow* splitter = new wxSplitterWindow(this,wxID_ANY,wxDefaultPosition,wxDefaultSize,wxSP_3DBORDER|wxSP_LIVE_UPDATE);
     wxSplitterWindow* rightSplitter = new wxSplitterWindow(splitter,wxID_ANY,wxDefaultPosition,wxDefaultSize,wxSP_3DBORDER|wxSP_LIVE_UPDATE);

     wxPanel* left  = new wxPanel(splitter);
     wxPanel* right = new wxPanel(rightSplitter);
     wxPanel* bottom = new wxPanel(rightSplitter);
 
     left->SetBackgroundColour(wxColor(198,72,45));
     right->SetBackgroundColour(wxColor(94,198,45));
     bottom->SetBackgroundColour(wxColor(104,0,104)); //	104	0	104

     rightSplitter->SetMinimumPaneSize(100);
     splitter->SetMinimumPaneSize(100);

     splitter->SplitVertically(left,rightSplitter);
     rightSplitter->SplitHorizontally(right,bottom);  
     
}
 
void MyFrame::FileSaveAs(wxCommandEvent& event){
     wxFileDialog saveFileDialog(this, _("Dosyayı btk olarak kaydet"), "", "", "Btk dosyaları (*.btk)|*.btk", wxFD_SAVE|wxFD_OVERWRITE_PROMPT);
     

     if (saveFileDialog.ShowModal() == wxID_CANCEL)
        return;  

     wxFileOutputStream output_stream(saveFileDialog.GetPath());
     if (output_stream.IsOk()){
          wxFile file(saveFileDialog.GetPath(),wxFile::read_write); 
          if(file.IsOpened()){
               file.Write(wxT("Merhaba TÜRKÇE"));
               file.Close();
          }

     }else{
          wxLogError("Cannot save current contents in file '%s'.", saveFileDialog.GetPath());
          return;
     }
}