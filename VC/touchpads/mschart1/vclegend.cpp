// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "vclegend.h"

// Dispatch interfaces referenced by this interface
#include "VcLocation.h"
#include "VcBackdrop.h"
#include "VcFont.h"
#include "vctextlayout.h"
#include "Font.h"


/////////////////////////////////////////////////////////////////////////////
// CVcLegend properties

/////////////////////////////////////////////////////////////////////////////
// CVcLegend operations

CVcLocation CVcLegend::GetLocation()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVcLocation(pDispatch);
}

CVcBackdrop CVcLegend::GetBackdrop()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVcBackdrop(pDispatch);
}

CVcFont CVcLegend::GetVtFont()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVcFont(pDispatch);
}

CVcTextLayout CVcLegend::GetTextLayout()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVcTextLayout(pDispatch);
}

void CVcLegend::SetRefFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

COleFont CVcLegend::GetFont()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont(pDispatch);
}

void CVcLegend::Select()
{
	InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}