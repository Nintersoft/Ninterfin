//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnAjudaClick(TObject *Sender)
{
	if (txtAjuda->Visible == true) {
		txtAjuda->Visible = false;
	}
	else if (txtAjuda->Visible == false) {
		txtAjuda->Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sbMostrarSenhaMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, float X, float Y)
{
	edtSenha->Password = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sbMostrarSenhaMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, float X, float Y)
{
	edtSenha->Password = true;
}
//---------------------------------------------------------------------------
