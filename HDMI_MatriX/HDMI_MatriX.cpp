// HDMI_MatriX.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "Form1.h"
#include <string>
#include "string.h"

using namespace HDMI_MatriX;
using namespace System::Net;
using namespace System::Text;
using namespace System::Net::Sockets;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Habilitar los efectos visuales de Windows XP antes de crear ningún control
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Crear la ventana principal y ejecutarla
	Application::Run(gcnew Form1());
	return 0;
	
}
  char comando1,comando2;


	   enum estados_ {espera,armando,enviando,desconectar};
	   unsigned char estado=espera;
	   unsigned char veces=0;
	   bool comand2=false;
	   bool comand1=false;
	
	const char *matrix[4][4]={{"a09","a1D","a1F","a0D"},
							{"a17","a12","a59","a08"},
							{"a5E","a06","a05","a03"},
							{"a18","a44","a0F","a51"},
							};

 const char *r_canal1[]={"s13","s12","s11","s10"};
 const char *r_canal2[]={"s23","s22","s21","s20"};
 const char *r_canal3[]={"s33","s32","s31","s30"};
 const char *r_canal4[]={"s43","s42","s41","s40"};
