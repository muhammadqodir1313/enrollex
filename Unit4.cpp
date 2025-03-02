//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tyonalish *yonalish;
//---------------------------------------------------------------------------
__fastcall Tyonalish::Tyonalish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tyonalish::BitBtn2Click(TObject *Sender)
{
DM->ATYo->Post();
yonalish->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tyonalish::BitBtn1Click(TObject *Sender)
{
DM->ATYo->Cancel();
yonalish->Close();
}
//---------------------------------------------------------------------------

void __fastcall Tyonalish::FormClose(TObject *Sender, TCloseAction &Action)
{
DM->ATYo->Cancel();
}
//---------------------------------------------------------------------------

