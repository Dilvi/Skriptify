#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

ref class SaveSkript
{
public:
    static void SaveAHKFile(Form^ skripteditor_window)
    {
        StreamWriter^ writer = gcnew StreamWriter("Skript.txt", true);
        writer->WriteLine("Return");
        writer->Close();

        SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
        skripteditor_window->Text = "";
        saveFileDialog->Filter = "AHK файлы (*.ahk)|*.ahk|Все файлы (*.*)|*.*";
        saveFileDialog->Title = "Сохранить AHK файл";
        saveFileDialog->FileName = "Скрипт.ahk";

        if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            String^ filePath = saveFileDialog->FileName;
            String^ existingFilePath = Directory::GetCurrentDirectory() + "\\Skript.txt";
            File::Copy(existingFilePath, filePath);
        }
    }
};
