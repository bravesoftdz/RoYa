//$$---- Form HDR ----
//---------------------------------------------------------------------------

#ifndef BasNntp1H
#define BasNntp1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "NntpCli.hpp"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TBasicNntpForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *ExecButton;
	TMemo *DisplayMemo;
	TNntpCli *NntpCli1;
	void __fastcall ExecButtonClick(TObject *Sender);
	void __fastcall NntpCli1SessionConnected(TObject *Sender, WORD ErrCode);
	void __fastcall NntpCli1SessionClosed(TObject *Sender, WORD ErrCode);
	void __fastcall NntpCli1RequestDone(TObject *Sender, TNntpRequest RqType,
          WORD ErrCode);
	void __fastcall NntpCli1MessageLine(TObject *Sender);
private:	// User declarations
    int   FCurrentArticle;
public:		// User declarations
	__fastcall TBasicNntpForm(TComponent* Owner);
    void __fastcall Display(AnsiString Msg);
};
//---------------------------------------------------------------------------
extern PACKAGE TBasicNntpForm *BasicNntpForm;
//---------------------------------------------------------------------------
#endif
