#include "ShaderEditor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ShaderEditor w;
    w.show();
    return a.exec();
}
