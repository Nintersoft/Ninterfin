//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"

#include <IOUtils.hpp>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TfrmCadastro *frmCadastro;

//--------------------------- Declara��o de Fun��es -------------------------

bool CheckUser (bool);
void CriarUsuario ();
void Limpar();

//--------------------------- Ambiente de vari�veis -------------------------

bool UserExiste;

//---------------------------------------------------------------------------
__fastcall TfrmCadastro::TfrmCadastro(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadastro::btnLimparClick(TObject *Sender)
{
	Limpar();
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadastro::SpeedButton1MouseDown(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, float X, float Y)
{
	edtSenha->Password = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadastro::SpeedButton1MouseUp(TObject *Sender, TMouseButton Button,
		  TShiftState Shift, float X, float Y)
{
	edtSenha->Password = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadastro::btnCadastroClick(TObject *Sender)
{
	if (cbAceitar->IsChecked == false) {
		throw Exception ("Voc� precisa aceitar os termos descritos na ajuda!");
	}
	if (edtConfirmar->Text != edtSenha->Text) {
		throw Exception ("A senha e a confirma��o est�o diferentes!");
	}
	CheckUser (UserExiste);

	if (UserExiste == true) {
		throw Exception ("O usu�rio requisitado j� existe! Por favor escolha outro nome de usu�rio!");
	}
	else {
		CriarUsuario();
	}
}
//---------------------------------------------------------------------------
bool CheckUser (bool test){
	int i=2;
	do {
		if (frmCadastro->dtCadastro->Lines->Strings[i] == frmCadastro->edtUsuario->Text) {
			test = true;
			i=12;
		}
		if (frmCadastro->dtCadastro->Lines->Strings[i] == "" | frmCadastro->dtCadastro->Lines->Strings[i] == NULL) {
			i=12;
			test = false;
		}
	i+=2;
	} while (i<12 && frmCadastro->dtCadastro->Lines->Strings[i] != NULL);

//	for (i = 0; i < 10; i+=2) {
//		if (frmCadastro->dtCadastro->Lines->Strings[i] == frmCadastro->edtUsuario->Text) {
//			test = true;
//			i=10;
//		}
//		if (frmCadastro->dtCadastro->Lines->Strings[i] == "") {
//			i=10;
//			test = false;
//		}
//	}

	return test;
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadastro::FormClose(TObject *Sender, TCloseAction &Action)
{
	Limpar();
	frmInicio->Show();
}
//---------------------------------------------------------------------------
void CriarUsuario (){
	int i = 2;
	for (i = 0; i < 12; i++) {
		if (frmCadastro->dtCadastro->Lines->Strings[i] == "" && i%2 == 0) {
			frmCadastro->dtCadastro->Lines->Add(frmCadastro->edtUsuario->Text);
			frmCadastro->dtCadastro->Lines->Add(frmCadastro->edtSenha->Text);

			String DiretorioDados = System::Ioutils::TPath::Combine(Sysutils::GetEnvironmentVariable(L"APPDATA"), L"Nintersoft\\Ninterfin");
			String LocalArquivo = System::Ioutils::TPath::Combine(DiretorioDados, L"Inf.nf");

			frmCadastro->dtCadastro->Lines->SaveToFile(LocalArquivo);

			i = 12;
			ShowMessage("Usuario criado com sucesso!");
				if (frmCadastro->cbEntrar->IsChecked == true) {
					frmPrincipal->lblNome->Text = frmCadastro->edtUsuario->Text;
					Limpar();
					frmCadastro->Hide();
					frmPrincipal->Show();
				}
				else {
					frmCadastro->Close();
				}
		}
		if (frmCadastro->dtCadastro->Lines->Strings[i] != "" && i == 11) {
			throw Exception ("A aplica��o j� atingiu o limite m�ximo de usu�rios! Infelizmente n�o h� como fazer um novo cadastro (limite m�ximo: 5)");
			i=12;
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadastro::FormShow(TObject *Sender)
{
	String DadosCadastro = System::Ioutils::TPath::Combine(Sysutils::GetEnvironmentVariable(L"APPDATA"), L"Nintersoft\\Ninterfin\\Inf.nf");

	if (TFile::Exists(DadosCadastro)) {
		dtCadastro->Lines->LoadFromFile(DadosCadastro);
	}
}
//---------------------------------------------------------------------------
void Limpar(){
	frmCadastro->edtUsuario->Text = "";
	frmCadastro->edtSenha->Text = "";
	frmCadastro->edtConfirmar->Text = "";
	frmCadastro->cbEntrar->IsChecked = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadastro::btnAjudaClick(TObject *Sender)
{
	if (txtAjuda->Visible == false) {
		txtAjuda->Visible = true;
	}
	else {
		txtAjuda->Visible = false;
    }
}
//---------------------------------------------------------------------------
