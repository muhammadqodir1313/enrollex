//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TTalaba : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TDBEdit *DBEdit1;
	TDBEdit *DBEdit2;
	TLabel *Label2;
	TDBEdit *DBEdit3;
	TLabel *Label3;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TLabel *Label4;
	TDBEdit *DBEdit4;
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TTalaba(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTalaba *Talaba;
//---------------------------------------------------------------------------
#endif
