#include "MyForm.h"  // ���� ����� ������� MyForm, ��� �������� ����

using namespace ��������������������CLR;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew MyForm()); // ���� ����� ������� MyForm, ��� �������� ����
	return 0;
}