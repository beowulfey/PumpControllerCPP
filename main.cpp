#include "pumpcontroller.h"

#include <QApplication>
#include <QPalette>
#include <QStyleFactory>
#include "theming.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle(QStyleFactory::create("Fusion"));

    QFont appFont;

#ifdef Q_OS_MAC
    appFont = QFont("Helvetica Neue", 12);  // macOS default system font
#elif defined(Q_OS_WIN)
    appFont = QFont("Segoe UI", 9);  // Windows system font
#else
    appFont = QFont("Sans Serif", 9);  // Linux or fallback
#endif

    QApplication::setFont(appFont);

    PumpController w;
    w.show();
    return a.exec();
}
