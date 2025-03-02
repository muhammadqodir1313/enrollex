//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tguruh *guruh;
//---------------------------------------------------------------------------
__fastcall Tguruh::Tguruh(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tguruh::BitBtn2Click(TObject *Sender)
{
DM->ATGu->Post();
guruh->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tguruh::BitBtn1Click(TObject *Sender)
{
DM->ATGu->Cancel();
guruh->Close();
}
//---------------------------------------------------------------------------

void __fastcall Tguruh::FormClose(TObject *Sender, TCloseAction &Action)
{
DM->ATGu->Cancel();
}
//---------------------------------------------------------------------------
