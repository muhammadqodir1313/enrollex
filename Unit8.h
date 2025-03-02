//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class Tsign_up : public TForm
{
__published:	// IDE-managed Components
	TDBEdit *DBEdit4;
	TLabel *Label4;
	TDBEdit *DBEdit5;
	TLabel *Label5;
	TLabel *Label7;
	TDBEdit *DBEdit7;
	TDBEdit *DBEdit8;
	TLabel *Label8;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall Tsign_up(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tsign_up *sign_up;
//---------------------------------------------------------------------------
#endif
