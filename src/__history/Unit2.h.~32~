//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Menus.hpp>
#include <FMX.Types.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Objects.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Grid.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class TfrmPrincipal : public TForm
{
__published:	// IDE-managed Components
	TMenuBar *MenuBar1;
	TMenuItem *imArquivo;
	TMenuItem *imEditar;
	TMenuItem *imUsuário;
	TMenuItem *imAjuda;
	TMenuItem *imSobre;
	TRectangle *spDados;
	TRectangle *Rectangle2;
	TLabel *lblDadosDoUsuario;
	TLabel *lblEtiquetaUsuario;
	TButton *btnAlterar;
	TLabel *lblNome;
	TLabel *lblUsuario;
	TLabel *lblNomeReal;
	TRectangle *spDiv;
	TTimer *tmCheck;
	TMenuItem *imAbrir;
	TMenuItem *imSalvar;
	TMenuItem *imDivisor;
	TMenuItem *imFechar;
	TRectangle *spEstat;
	TRectangle *spEstatTit;
	TLabel *lblEstatTit;
	TMenuItem *imAdicionar;
	TMenuItem *imAdicionarDados;
	TToolBar *ToolBar1;
	TSpeedButton *SpeedButton1;
	TStringGrid *dtControl;
	TStringColumn *dtSaldo;
	TStringColumn *dtData;
	TStringColumn *dtValor;
	TStringColumn *dtDescrição;
	TStringColumn *dtComentários;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall tmCheckTimer(TObject *Sender);
	void __fastcall imFecharClick(TObject *Sender);
	void __fastcall imSobreClick(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall imAdicionarDadosClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
#endif
