//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tsign_up *sign_up;
//---------------------------------------------------------------------------
__fastcall Tsign_up::Tsign_up(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tsign_up::BitBtn1Click(TObject *Sender)
{
DM->ATlogin->Cancel();
sign_up->Close();

}
//---------------------------------------------------------------------------
void __fastcall Tsign_up::BitBtn2Click(TObject *Sender)
{
DM->ATlogin->Post();
sign_up->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tsign_up::FormClose(TObject *Sender, TCloseAction &Action)
{

DM->ATlogin->Cancel();
}
//---------------------------------------------------------------------------




