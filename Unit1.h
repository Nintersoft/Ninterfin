//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Graphics.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TfrmInicio : public TForm
{
__published:	// IDE-managed Components
	TBrushObject *Fundo1;
	TLine *Divisor;
	TEdit *edtlogin;
	TLabel *lblUsuario;
	TEdit *edtSenha;
	TLabel *lblSenha;
	TButton *btnEntrar;
	TButton *btnCadastrar;
	TSpeedButton *sbMostrarSenha;
	TButton *btnAjuda;
	TButton *btnTeste;
	TText *txtAjuda;
	void __fastcall btnAjudaClick(TObject *Sender);
	void __fastcall sbMostrarSenhaMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          float X, float Y);
	void __fastcall sbMostrarSenhaMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          float X, float Y);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmInicio(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmInicio *frmInicio;
//---------------------------------------------------------------------------
#endif