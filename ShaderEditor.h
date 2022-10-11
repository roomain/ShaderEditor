#pragma once

#include <QtWidgets/QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ShaderEditorClass; };
QT_END_NAMESPACE

class ShaderEditor : public QMainWindow
{
    Q_OBJECT

public:
    ShaderEditor(QWidget *parent = nullptr);
    ~ShaderEditor();

private:
    Ui::ShaderEditorClass *ui;
};
