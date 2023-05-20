#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

ref class TxtInput
{
private:
    String^ m_text;
    String^ m_displayText;
    TextBox^ m_editor;
public:
    TxtInput(String^ text, String^ displayText, TextBox^ editor);
    void Execute();
};
