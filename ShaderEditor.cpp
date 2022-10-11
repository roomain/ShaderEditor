#include "ShaderEditor.h"
#include "ui_ShaderEditor.h"
#include <Qsci/qsciscintilla.h>

ShaderEditor::ShaderEditor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ShaderEditorClass())
{
    ui->setupUi(this);
    auto ptextEdit = new QsciScintilla(this);
    ui->tabWidget->addTab(ptextEdit, "Pixel shader");
}

ShaderEditor::~ShaderEditor()
{
    delete ui;
}
