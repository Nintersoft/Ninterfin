//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TfrmInicio *frmInicio;
//---------------------------------------------------------------------------
__fastcall TfrmInicio::TfrmInicio(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmInicio::btnAjudaClick(TObject *Sender)
{
	if (txtAjuda->Visible == true) {
		txtAjuda->Visible = false;
	}
	else if (txtAjuda->Visible == false) {
		txtAjuda->Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmInicio::sbMostrarSenhaMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, float X, float Y)
{
	edtSenha->Password = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmInicio::sbMostrarSenhaMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, float X, float Y)
{
	edtSenha->Password = true;
}
//---------------------------------------------------------------------------
