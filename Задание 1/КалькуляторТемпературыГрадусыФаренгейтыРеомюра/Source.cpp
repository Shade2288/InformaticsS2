#include "MyForm.h"  // ���� ����� ������� MyForm, ��� �������� ����

using namespace ����������������������������������������������;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew MyForm()); // ���� ����� ������� MyForm, ��� �������� ����
	return 0;
}