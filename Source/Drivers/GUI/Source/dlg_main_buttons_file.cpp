#include "main.h"
#include "dlg_main.h"

void CControlPanelDlg::OnBnClickedMinimizeToTray()
{
//Tray icon is constantly present -> just hide the dialog.
	ShowWindow( SW_HIDE );
}

void CControlPanelDlg::OnBnClickedExit()
{
//Exit dialog.
	m_menuExit = TRUE;
	PostMessage( WM_CLOSE );
}
