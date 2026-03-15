//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
Graphics::TBitmap *ball;
int x = 100;
int y = 100;
int previousX, previousY;

int x2 = 600;
int y2 = 600;
int previousX2, previousY2;

class Rectangle{
	public:
		int X1, X2, Y1, Y2;
		Rectangle(int x1 = 10, int y1 = 10, int x2 = 200, int y2 = 400){
			X1 = x1;
			X2 = x2;
			Y1 = y1;
			Y2 = y2;
			}
		void Show(){
			Form2 -> Canvas -> Brush -> Color = clGreen;
			Form2 -> Canvas -> Rectangle(X1, Y1, X2, Y2);

			Form2 -> Canvas -> Pen -> Color = clWhite;
			Form2 -> Canvas -> Pen -> Width = 10;
			Form2 -> Canvas -> Ellipse(360, 250, 560, 450);

			Form2 -> Canvas -> Pen -> Color = clWhite;
			Form2 -> Canvas -> Rectangle(50, 250, 100, 450);

			Form2 -> Canvas -> Pen -> Color = clWhite;
			Form2 -> Canvas -> Rectangle(850, 250, 900, 450);

			Form2 -> Canvas -> Pen -> Color = clWhite;
			Form2 -> Canvas -> MoveTo(460, 100);
			Form2 -> Canvas -> LineTo(460, 250);

			Form2 -> Canvas -> Pen -> Color = clWhite;
			Form2 -> Canvas -> MoveTo(460, 450);
			Form2 -> Canvas -> LineTo(460, 600);

			}
		void balll(){
			ball = new Graphics::TBitmap;
			ball -> LoadFromFile("ball.bmp"); // нету пока что, вроде говорили сохранять в просто диске, но мне не вериться
		}


/*class People{
	public:*/

};

class Rectangle A(50, 100, 900, 600);
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
A.Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	previousX = x;
	previousY = y;
	x -= 10;  // сдвигаем кружочек влево
	Form2 -> Canvas -> Pen -> Color = clGreen;
	Form2->Canvas->Rectangle(previousX, previousY, previousX + 50, previousY + 50);  // удаляем предыдущий кружочек
	Form2 -> Canvas -> Pen -> Color = clWhite;
	Form2->Canvas->Ellipse(x, y, x + 50, y + 50);  // рисуем кружочек на новой позиции
	Sleep(20);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
	previousX = x;
	previousY = y;
	x += 10; // сдвигаем кружочек вправо
	Form2 -> Canvas -> Pen -> Color = clGreen;
	Form2->Canvas->Rectangle(previousX, previousY, previousX + 50, previousY + 50); // удаляем предыдущий кружочек
	Form2 -> Canvas -> Pen -> Color = clWhite;
	Form2->Canvas->Ellipse(x, y, x + 50, y + 50); // рисуем кружочек на новой позиции
	Sleep(20);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
	previousX = x;
	previousY = y;
	y -= 10; // сдвигаем кружочек вверх
	Form2 -> Canvas -> Pen -> Color = clGreen;
	Form2->Canvas->Rectangle(previousX, previousY, previousX + 50, previousY + 50); // удаляем предыдущий кружочек
	Form2 -> Canvas -> Pen -> Color = clWhite;
	Form2->Canvas->Ellipse(x, y, x + 50, y + 50); // рисуем кружочек на новой позиции
	Sleep(20);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
	previousX = x;
	previousY = y;
	y += 10; // сдвигаем кружочек вниз
	Form2 -> Canvas -> Pen -> Color = clGreen;
	Form2->Canvas->Rectangle(previousX, previousY, previousX + 50, previousY + 50); // удаляем предыдущий кружочек
	Form2 -> Canvas -> Pen -> Color = clWhite;
	Form2->Canvas->Ellipse(x, y, x + 50, y + 50); // рисуем кружочек на новой позиции
	Sleep(20);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button7Click(TObject *Sender)
{
	previousX2 = x2;
	previousY2 = y2;
	y2 -= 10; // сдвигаем кружочек вверх
	Form2 -> Canvas -> Pen -> Color = clGreen;
	Form2->Canvas->Rectangle(previousX2, previousY2, previousX2 + 50, previousY2 + 50); // удаляем предыдущий кружочек
	Form2 -> Canvas -> Pen -> Color = clWhite;
	Form2->Canvas->Ellipse(x2, y2, x2 + 50, y2 + 50); // рисуем кружочек на новой позиции
	Sleep(20);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button8Click(TObject *Sender)
{
	previousX2 = x2;
	previousY2 = y2;
	x2 -= 10;  // сдвигаем кружочек влево
	Form2 -> Canvas -> Pen -> Color = clGreen;
	Form2->Canvas->Rectangle(previousX2, previousY2, previousX2 + 50, previousY2 + 50);  // удаляем предыдущий кружочек
	Form2 -> Canvas -> Pen -> Color = clWhite;
	Form2->Canvas->Ellipse(x2, y2, x2 + 50, y2 + 50);  // рисуем кружочек на новой позиции
	Sleep(20);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button6Click(TObject *Sender)
{
	previousX2 = x2;
	previousY2 = y2;
	x2 += 10; // сдвигаем кружочек вправо
	Form2 -> Canvas -> Pen -> Color = clGreen;
	Form2->Canvas->Rectangle(previousX2, previousY2, previousX2 + 50, previousY2 + 50); // удаляем предыдущий кружочек
	Form2 -> Canvas -> Pen -> Color = clWhite;
	Form2->Canvas->Ellipse(x2, y2, x2 + 50, y2 + 50); // рисуем кружочек на новой позиции
	Sleep(20);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button9Click(TObject *Sender)
{
	previousX2 = x2;
	previousY2 = y2;
	y2 += 10; // сдвигаем кружочек вниз
	Form2 -> Canvas -> Pen -> Color = clGreen;
	Form2->Canvas->Rectangle(previousX2, previousY2, previousX2 + 50, previousY2 + 50); // удаляем предыдущий кружочек
	Form2 -> Canvas -> Pen -> Color = clWhite;
	Form2->Canvas->Ellipse(x2, y2, x2 + 50, y2 + 50); // рисуем кружочек на новой позиции
	Sleep(20);
}
//---------------------------------------------------------------------------

