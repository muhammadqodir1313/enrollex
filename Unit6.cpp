//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTalaba *Talaba;
//---------------------------------------------------------------------------
__fastcall TTalaba::TTalaba(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTalaba::BitBtn2Click(TObject *Sender)
{
DM->ATtalaba->Post();
Talaba->Close();
}
//---------------------------------------------------------------------------

void __fastcall TTalaba::BitBtn1Click(TObject *Sender)
{
DM->ATtalaba->Cancel();
Talaba->Close();
}
//---------------------------------------------------------------------------

void __fastcall TTalaba::FormClose(TObject *Sender, TCloseAction &Action)
{
DM->ATtalaba->Cancel();
}
//---------------------------------------------------------------------------



