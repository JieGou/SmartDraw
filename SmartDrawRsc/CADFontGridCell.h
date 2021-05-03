#pragma once

#include <gui\gridctrl\gridcell.h>
#include "SmartDrawRscImp.h"

class ON_EXT_SMARTDRAWRSC CCADFontGridCell : public CGridCell
{
	DECLARE_DYNCREATE(CCADFontGridCell)
public:
	CCADFontGridCell(void);
	virtual ~CCADFontGridCell(void);

	BOOL Edit(int nRow, int nCol, CRect rect, CPoint point, UINT nID, UINT nChar);
	void EndEdit();

	static CString m_rIniFilePath;
};
