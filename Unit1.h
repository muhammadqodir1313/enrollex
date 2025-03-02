//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel4;
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TPanel *Panel5;
	TPanel *Panel6;
	TLabel *Label1;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn7;
	TBitBtn *BitBtn8;
	TPanel *Panel9;
	TLabel *Label4;
	TBitBtn *BitBtn6;
	TBitBtn *BitBtn4;
	TBitBtn *BitBtn3;
	TDBText *DBText3;
	TDBText *DBText2;
	TDBText *DBText1;
	TDBGrid *DBGrid4;
	TEdit *Edit2;
	TComboBox *ComboBox1;
	TPanel *Panel7;
	TLabel *Label2;
	TBitBtn *BitBtn2;
	TBitBtn *BitBtn9;
	TBitBtn *BitBtn10;
	TPanel *Panel10;
	TDBEdit *DBEdit1;
	TDBEdit *DBEdit2;
	TDBEdit *DBEdit4;
	TDBEdit *DBEdit5;
	TDBEdit *DBEdit6;
	TDBEdit *DBEdit3;
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall BitBtn8Click(TObject *Sender);
	void __fastcall BitBtn7Click(TObject *Sender);
	void __fastcall BitBtn9Click(TObject *Sender);
	void __fastcall BitBtn10Click(TObject *Sender);
	void __fastcall BitBtn3Click(TObject *Sender);
	void __fastcall BitBtn4Click(TObject *Sender);
	void __fastcall BitBtn6Click(TObject *Sender);
	void __fastcall Edit2Change(TObject *Sender);
	void __fastcall DBGrid4CellClick(TColumn *Column);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Panel10Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
