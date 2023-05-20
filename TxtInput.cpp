#include "TxtInput.h"

TxtInput::TxtInput(String^ text, String^ displayText, TextBox^ editor)
{
    m_text = text;
    m_displayText = displayText;
    m_editor = editor;
}

void TxtInput::Execute()
{
    StreamWriter^ writer = gcnew StreamWriter("Skript.txt", true);
    writer->WriteLine(m_text);
    writer->Close();

    m_displayText += "\r\n";
    m_editor->Text += m_displayText;
    m_editor->SelectionStart = m_editor->Text->Length;
    m_editor->ScrollToCaret();
}
