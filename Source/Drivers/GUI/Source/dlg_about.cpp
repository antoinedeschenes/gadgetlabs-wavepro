
#include "main.h"
#include "dlg_about.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	ON_BN_CLICKED(IDC_DONATE_EUR, &CAboutDlg::OnBnClickedDonateEur)
	ON_BN_CLICKED(IDC_DONATE_USD, &CAboutDlg::OnBnClickedDonateUsd)
	ON_BN_CLICKED(IDC_EXIT, &CAboutDlg::OnBnClickedExit)
END_MESSAGE_MAP()

const TCHAR*		CAboutDlg::m_Request =  _T("Dear Gadgeter\r\n")
											_T("\r\n")
											_T("It was long time ago when we bought our wonderful GadgetLabs WavePro cards.\r\n")
											_T("And if I may say so, they are serving us very well.\r\n")
										_T("\r\n")
										_T("Of course everybody still remembers the feeling when GadgetLabs went out of business... ej those were sad times.\r\n")
										_T("And when others were celebrating the arrival of XP and its stability, we the Gadgeters were left on\r\n")
										_T("a dry and rocky road.\r\n")
										_T("\r\n")
										_T("Luckily the yahoo group was and still is the place where good people meet.\r\n")
										_T("And after a lot of GadgetLabs love words, we decided that we have to do something about it and that we\r\n")
										_T("won't go down without a fight. But as every up has its down and we got shocked when the price for the XP\r\n")
										_T("driver was returned. That almost destroyed all the hope living in us.\r\n")
										_T("\r\n")
										_T("But then a young chap (me :) ) came and said... \"That can't be so hard to make. It's just a program nothing more.\"\r\n")
										_T("So a crusade was lunched where even the ex-Gadgetlabs employees started helping and the whole yahoo group\r\n")
										_T("was moving as one.\r\n")
										_T("\r\n")
										_T("Then after creating completely new tool (ida2sice plugin) that enabled us to reverse engineer the Win98 driver the\r\n")
										_T("results started to show and we got lower latency with ASIO driver and better stability as some bugs were fixed.\r\n")
										_T("\r\n")
										_T("So we were building and rebuilding again until more than a year later the GadgetLabs XP driver made its\r\n")
										_T("first noise. It was a pure sin sound, but it was like a symphony to our ears. Of course our bellowed driver had its\r\n")
										_T("child years where blue screens were seen every now and then, but we all knew that it will just get better and better.\r\n")
										_T("\r\n")
										_T("Years passed and we were all happy with XP-driver combo, but then Microsoft pulled the plug and we were again on\r\n")
										_T("a dry and rocky road. It showed us the 64bit Windows 7 smiling with those white teeth and inviting us to join it,\r\n")
										_T("but we didn't want to go without our bellowed GadgetLabs cards.\r\n")
										_T("\r\n")
										_T("But then a not so young chap (yeah 8 years passed :) ) came and said... \"That can't be so hard to make.\r\n")
										_T("It's just a 64 bit program nothing more.\" And the crusade started again. ;)\r\n")
										_T("\r\n")
										_T("So I give you the new and shiny 32/64 bit Gadgetlabs Wavepro series driver for XP, Vista and Windows 7. Yeay. :)\r\n")
										_T("\r\n")
										_T("\r\n")
										_T("\r\n")
										_T("Now I would like to tell you another story that is living in me. :)\r\n")
										_T("\r\n")
										_T("It was some 5 years ago, even between writing the GadgetLabs XP driver, I came across a theory that inspired\r\n")
										_T("me to think deeper and wider than before. So I started reading and reading and a small idea was born.\r\n")
										_T("That idea then became a dream which grew and grew in me.\r\n")
										_T("So I read everything I could, made all kind of simulations and now I would like to make this dream a reality. :)\r\n")
										_T("\r\n")
										_T("After a little more then a year trying to save money to buy the main part of the dream device, I realized that I can't make it on my own.\r\n")
										_T("So I'm asking you for a little help.\r\n")
										_T("\r\n")
										_T("For that I prepared some pictures which are part of the driver's package... look into \"Help me with my dream\" folder.\r\n")
										_T("The pictures show simulation of a special kind of homopolar generator and for that to become a reality I need a special kind of a motor:\r\n")
										_T("http://www.etel.ch/Torque_Motors  ->  http://www.etel.ch/documents/showFile.asp?ID=776\r\n")
										_T("\r\n")
										_T("Unfortunately this motor is really rare and really expensive. It costs around 3500eur and that is a lot of money for me.\r\n")
										_T("\r\n")
										_T("I know that asking for money is always a problem, but I hope that you can donate something as an appreciation for the \r\n")
										_T("years I've given into to GadgetLabs driver.\r\n")
										_T("\r\n")
										_T("As none of us lives like a king I would humbly ask you for:\r\n")
										_T("? 15eur or 20usd for the new driver and\r\n")
										_T("? an arbitrary value for the dream in me\r\n")
										_T("  (15 eur or 20 usd would be good, but you can donate more if you think that the work it's been done deserves it :) )\r\n")
										_T("\r\n")
										_T("eur: https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=FHDX7FJ8AC4MN\r\n")
										_T("\r\n")
										_T("usd: https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=N8XQN6DLNLLSU\r\n")
										_T("\r\n")
										_T("\r\n")
										_T("Thank you and God bless.\r\n")
										_T("Yours truly Waldemar the Super Mostek man ;)\r\n");

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

BOOL CAboutDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

//Set window message.
	CEdit*		pEdit_Request = reinterpret_cast<CEdit *>( GetDlgItem(IDC_REQUEST) );
	if ( pEdit_Request != NULL )
	{
	//Send text.
		CString		request;
		request.Format(m_Request);
		pEdit_Request->SetWindowText( request );

	////Change font to something bigger.
	//	//Get old font.
	//	LOGFONT		logFont;
	//
	//	CFont*		pFont_old = pEdit_Request->GetFont();
	//	pFont_old->GetLogFont( &logFont );
	//
	//	//Update size.
	//	logFont.lfHeight = 100;
	//
	//	//Create new font.
	//	CFont		font_new;
	//	font_new.CreatePointFontIndirect( &logFont );
	//	pEdit_Request->SetFont( &font_new, TRUE );
	//
	//	font_new.DeleteObject();
	}

	return TRUE;
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

void CAboutDlg::OnBnClickedDonateEur()
{
//Get default browser in system.
	CString		browser_default;
	if ( FALSE == GetDefaultBrowser( browser_default ) )
	{
		MessageBox(
		  _T("Failed to retrieve default browser. Please copy and paste the https://www.paypal.com/... link from end of the text window. Thank you."),
		  _T("Error"),
		  MB_OK | MB_TOPMOST
		);
		return;
	}

//Open URL.
	::ShellExecute( NULL, NULL, browser_default, _T("https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=FHDX7FJ8AC4MN"), NULL, SW_SHOWNORMAL );
}

void CAboutDlg::OnBnClickedDonateUsd()
{
//Get default browser in system.
	CString		browser_default;
	if ( FALSE == GetDefaultBrowser( browser_default ) )
	{
		MessageBox(
		  _T("Failed to retrieve default browser. Please copy and paste the https://www.paypal.com/... link from end of the text window. Thank you."),
		  _T("Error"),
		  MB_OK | MB_TOPMOST
		);
		return;
	}

//Open URL.
	::ShellExecute( NULL, NULL, browser_default, _T("https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=N8XQN6DLNLLSU"), NULL, SW_SHOWNORMAL );

}

void CAboutDlg::OnBnClickedExit()
{
	EndDialog( 0 );
}

BOOL CAboutDlg::GetDefaultBrowser( CString& defaultBrowser )
{
//Open registry key: HKCR\http\shell\open\command
	HKEY	hKey = NULL;

	if ( ERROR_SUCCESS != ::RegOpenKeyEx( HKEY_CLASSES_ROOT, _T("http\\shell\\open\\command"), 0, KEY_READ, &hKey ) )
	{
		return FALSE;
	}

//Get length of default value text.
	DWORD		text_length = 0;

	if (
	  ( ERROR_SUCCESS != ::RegQueryValueEx( hKey, NULL, NULL, NULL, NULL, &text_length ) )
	  ||
	  ( text_length == 0 )
	)
	{
	//Failed to get default value size.
		::RegCloseKey( hKey );

		return FALSE;
	}

//Allocate buffer for text.
	//Just to be 100% sure, we'll add another char for NUL character.
	text_length += sizeof( TCHAR );

	//Allocate...
	TCHAR*		pText = new TCHAR[text_length];
	if ( pText == NULL )
	{
	//Failed to allocate memory.
		::RegCloseKey( hKey );

		return FALSE;
	}
	ZeroMemory( pText, text_length );

	//Decrease the length, so that Query will work.
	text_length -= sizeof( TCHAR );

//Get text
	if ( ERROR_SUCCESS != ::RegQueryValueEx( hKey, NULL, NULL, NULL, (LPBYTE)pText, &text_length ) )
	{
	//Failed to get default value text.
		delete[] pText; //AD code test
		::RegCloseKey( hKey );

		return FALSE;
	}

	//Set text...
	defaultBrowser = pText;

//Free resources.
	delete[] pText;
	::RegCloseKey( hKey );

//Did we get anything?
	if ( defaultBrowser.GetLength() == 0 )
	{
	//No...
		return FALSE;
	}

	return TRUE;
}
