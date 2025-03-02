//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLogin *Login;
//---------------------------------------------------------------------------
__fastcall TLogin::TLogin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------






void __fastcall TLogin::BitBtn2Click(TObject *Sender)
{
sign_up->Caption=BitBtn2->Caption;
DM->ATlogin->Insert();
sign_up->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TLogin::BitBtn1Click(TObject *Sender)
{
int soni=DM->ATlogin->RecordCount;
AnsiString login, parol;
DM->ATlogin->First();
for(int i=1;i<=soni;i++)
	{
login=DM->ATlogin->FieldByName("login")->AsString;
parol=DM->ATlogin->FieldByName("parol")->AsString;
	  if(Edit1->Text==login && Edit2->Text==parol)
		{
		 Form1->ShowModal();
		 Login->Hide();
		}
		else{ if(i<soni)
		{
		DM->ATlogin->Next();
		}
		else
		{
			ShowMessage("login yoki parol xato");
		}
		}
		}
}
//---------------------------------------------------------------------------




