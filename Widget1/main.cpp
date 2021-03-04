#include "MainManue.h"
#include <QtWidgets/QApplication>
#include<qdebug.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainManue mainManue;
    mainManue.show();
     return a.exec();
}
