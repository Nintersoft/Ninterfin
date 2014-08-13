//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TfrmAddItem *frmAddItem;
//---------------------------------------------------------------------------
__fastcall TfrmAddItem::TfrmAddItem(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAddItem::btnAdicionarClick(TObject *Sender)
{
//--------- contadores - counters ------------

int i, j;

//--------------------------------------------
	for (j = 0; j < frmPrincipal->dtControl->ColumnCount; j++) {
		for (i = 0; i < frmPrincipal->dtControl->RowCount; i++) {
			if (frmPrincipal->dtControl->Cells[1][j] == "" && j == 1){
				if (ddTipodeSado->ToString() == "Entrada"){
					frmPrincipal->dtControl->Cells[2][j] = "+";
				}
				else if (ddTipodeSado->ToString() == "Gasto") {
					frmPrincipal->dtControl->Cells[2][j] = "-";
				}
				frmPrincipal->dtControl->Cells[2][j] = edtValor->Text;
                frmPrincipal->dtControl->Cells[3][j] = DateEdit1->Text;
			}
			else {

			}
		}
	}
}
//---------------------------------------------------------------------------

