//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
__fastcall TfrmPrincipal::TfrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::FormClose(TObject *Sender, TCloseAction &Action)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::tmCheckTimer(TObject *Sender)
{
	if (lblUsuario->Text == "Teste") {
		imAbrir->Enabled = false;
		imSalvar->Enabled = false;
	}
	else {
		imAbrir->Enabled = true;
		imSalvar->Enabled = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::imFecharClick(TObject *Sender)
{
	frmPrincipal->Close();
}
//---------------------------------------------------------------------------


void __fastcall TfrmPrincipal::imSobreClick(TObject *Sender)
{
	frmSobre->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::SpeedButton1Click(TObject *Sender)
{
	frmAddItem->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::imAdicionarDadosClick(TObject *Sender)
{
	frmAddItem->Show();
}
//---------------------------------------------------------------------------


