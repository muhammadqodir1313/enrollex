//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Unit6.cpp", Talaba);
USEFORM("Unit4.cpp", yonalish);
USEFORM("Unit8.cpp", sign_up);
USEFORM("Unit7.cpp", Login);
USEFORM("Unit3.cpp", fakultet);
USEFORM("Unit2.cpp", DM); /* TDataModule: File Type */
USEFORM("Unit1.cpp", Form1);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Cyan Night");
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TLogin), &Login);
		Application->CreateForm(__classid(TTalaba), &Talaba);
		Application->CreateForm(__classid(TDM), &DM);
		Application->CreateForm(__classid(Tfakultet), &fakultet);
		Application->CreateForm(__classid(Tyonalish), &yonalish);
		Application->CreateForm(__classid(Tsign_up), &sign_up);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
