#include"function.h"
#include"main.h"
#include"console.h"
CauTrucBang CTBang;
CauTrucO **CTO;	
void TaoMang2ChieuDong() {
	CTO = new CauTrucO * [CTBang.SoDong];
	for (int i = -0; i < CTBang.SoDong; ++i) {
		CTO[i] = new CauTrucO[CTBang.SoDong];
	}
}
void XoaMangHaiChieuDong() {
	for (int i = 0; i < CTBang.SoDong; ++i) {
		delete[] CTO[i];
	}
	delete[] CTO;
}
void KhoiTao(short SoDong, short SoCot, short SoBom) {
	CTBang.SoDong = SoDong;
	CTBang.SoCot = SoCot;
	CTBang.SoBomDaMo = 0;
	CTBang.Soco = 0;
	TaoMang2ChieuDong();
	VeBang();
	XoaMangHaiChieuDong();
}
short ToaDoX(short x) {//toa do x ve bang
	return (x * 2);
}
short ToaDoY(short y) {//Toa do y ve bang
	return (y);
}
void VeO(short x, short y, short kieu) {
	switch (kieu) {
	case 0:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 0, 10, const_cast<char*> ("  "));
		break;
	case 1:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 9, 15, const_cast<char*> ("1 "));
		break;
	case 2:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 2, 15, const_cast<char*> ("2 "));
		break;
	case 3:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 12, 15, const_cast<char*> ("3 "));	
		break;
	case 4:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 1, 15, const_cast<char*> ("4 "));
		break;
	case 5:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 4, 15, const_cast<char*> ("5 "));
		break;
	case 6: 
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 2, 15, const_cast<char*> ("6 "));
		break;
	case 7:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 0, 15, const_cast<char*> ("7 "));
		break;
	case 8:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 13, 15, const_cast<char*> ("8 "));
		break;
	case 9: 
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 12, 14, const_cast<char*> ("8 "));
		break;
	case 10:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 0, 8, const_cast<char*> ("  "));
		break;
	case 11:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 0, 7, const_cast<char*> ("  "));
		break;
	case 12:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 0, 13, const_cast<char*> ("  "));
		break;
	case 13:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 12, 14, const_cast<char*> ("P "));
		break;
	case 14:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 15, 16, const_cast<char*> ("Px "));
		break;
	case 15:
		setColorBGTextXY(ToaDoX(x), ToaDoY(y), 12, 14, const_cast<char*> ("  "));
		break;

	}

}
void VeBang() {
	for (int i = 0; i < CTBang.SoDong; ++i)
	{
		for(int j=0;j<CTBang.SoCot;++j)
		{
			if (((i % 2) && (j % 2)) || !((i % 2) || j % 2)) {
				VeO(j, i, 10);
			}
			else
			{
				VeO(j, i, 11); 
			}
		}
	}
}