//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfakultet *fakultet;
//---------------------------------------------------------------------------
__fastcall Tfakultet::Tfakultet(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfakultet::BitBtn2Click(TObject *Sender)
{
DM->ATFak->Post();
fakultet->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tfakultet::BitBtn1Click(TObject *Sender)
{
DM->ATFak->Cancel();
fakultet->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tfakultet::FormClose(TObject *Sender, TCloseAction &Action)
{
DM->ATFak->Cancel();
}
//---------------------------------------------------------------------------

