#include "Pet_Navigator.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PetDatabase::Pet_Navigator petNavigator;

	petNavigator.ShowDialog();
	Pet^ pet = petNavigator.pet;

	if (pet != nullptr) {
		MessageBox::Show("Succesfull in finding: " + pet->PetName + ", who has an owner named: " + pet->OwnerName + " with a phone number of: " + pet->OwnerPhone + "!", "Program.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Not succesfull in finding pet", "Program.cpp", MessageBoxButtons::OK);
	}
	
}