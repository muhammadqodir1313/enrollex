//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------




void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{

DM->ATFak->Insert();
fakultet->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
yonalish->Caption=DBText1->Caption;
DM->ATYo->Insert();
yonalish->ShowModal();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::BitBtn8Click(TObject *Sender)
{
fakultet->Caption="O'zgartirish";
DM->ATFak->Edit();
fakultet->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn7Click(TObject *Sender)
{
int r=MessageDlg("O'chirmoqchimisz",mtWarning,TMsgDlgButtons()
<<mbYes<<mbNo,0) ;
if(r==mrYes){
  DM->ATFak->Delete();
}
if(r==mrNo){
  DM->ATFak->Cancel();
}

}
//---------------------------------------------------------------------------




void __fastcall TForm1::BitBtn9Click(TObject *Sender)
{
 int r=MessageDlg("O'chirmoqchimisz",mtWarning,TMsgDlgButtons()
<<mbYes<<mbNo,0) ;
if(r==mrYes){
  DM->ATYo->Delete();
}
if(r==mrNo){
  DM->ATYo->Cancel();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn10Click(TObject *Sender)
{
yonalish->Caption="O'zgartirish";
DM->ATYo->Edit();
yonalish->ShowModal();
}
//---------------------------------------------------------------------------





void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
Talaba->Caption=DBText3->Caption;
DM->ATtalaba->Insert();
Talaba->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
int r=MessageDlg("O'chirmoqchimisz",mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0);
if(r==mrYes){
  DM->ATtalaba->Delete();
}
if(r==mrNo){
  DM->ATtalaba->Cancel();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn6Click(TObject *Sender)
{
Talaba->Caption="O'zgartirish";
DM->ATtalaba->Edit();
Talaba->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Change(TObject *Sender)
{
 TLocateOptions qidir;
 qidir.Clear();
 qidir<<loPartialKey;
if(ComboBox1->ItemIndex==0)
{
	 if(Edit2->Text=="")
 {
	 DM->ATtalaba->First();
 }
 else
 {
	 DM->ATtalaba->Locate("Familyasi",Edit2->Text,qidir);
 }
}
if(ComboBox1->ItemIndex==1)
{
	 if(Edit2->Text=="")
 {
	 DM->ATtalaba->First();
 }
 else
 {
	 DM->ATtalaba->Locate("Ismi",Edit2->Text,qidir);
 }
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBGrid4CellClick(TColumn *Column)
{
Panel10->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
Login->Close();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Panel10Click(TObject *Sender)
{
Panel10->Visible=false;
}
//---------------------------------------------------------------------------




