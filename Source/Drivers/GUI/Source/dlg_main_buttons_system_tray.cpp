#include "main.h"
#include "dlg_main.h"

void CControlPanelDlg::OnBnClickedSystemTrayOpen()
{
//Show dialog.
	SetWindowPos( &CWnd::wndTop, 0, 0, 0, 0, SWP_SHOWWINDOW | SWP_NOMOVE | SWP_NOSIZE );
	SetActiveWindow();
}

void CControlPanelDlg::OnBnClickedSystemTrayExit()
{
//Exit dialog.
	m_menuExit = TRUE; //AD - Allow application to exit rather than minimize with the system tray Exit button.
	PostMessage( WM_CLOSE );
}
