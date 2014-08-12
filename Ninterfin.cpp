//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit2.cpp", frmPrincipal);
USEFORM("Unit3.cpp", frmCadastro);
USEFORM("Unit4.cpp", frmSobre);
USEFORM("Unit1.cpp", frmInicio);
USEFORM("Unit5.cpp", frmAddItem);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TfrmInicio), &frmInicio);
		Application->CreateForm(__classid(TfrmPrincipal), &frmPrincipal);
		Application->CreateForm(__classid(TfrmCadastro), &frmCadastro);
		Application->CreateForm(__classid(TfrmSobre), &frmSobre);
		Application->CreateForm(__classid(TfrmAddItem), &frmAddItem);
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
