//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TfrmSobre : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblproduto;
	TLabel *lblversao;
	TLabel *lbllic;
	TLabel *lblLegal;
	TLabel *lblNomeProduto;
	TLabel *Label1;
	TLabel *Label2;
private:	// User declarations
public:		// User declarations
	__fastcall TfrmSobre(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSobre *frmSobre;
//---------------------------------------------------------------------------
#endif
