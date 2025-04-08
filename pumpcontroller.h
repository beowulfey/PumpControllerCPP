#ifndef PUMPCONTROLLER_H
#define PUMPCONTROLLER_H

#include <QMainWindow>
#include <QList>
#include "tablemodel.h"

//#include "pump.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class PumpController;
}
QT_END_NAMESPACE

class PumpController : public QMainWindow
{
    Q_OBJECT

public:
    PumpController(QWidget *parent = nullptr);
    ~PumpController();

public slots:
    void writeToConsole(const QString& text, const QColor& color = Qt::black);
    void openCOMsDialog();
    void setCOMs(const QString& cond, const QString& pump);
    void confirmSettings();
    void settingsChanged();

    void addSegment();
    void rmSegment();
    void clearSegments();
    //void timerTick();



    //void writeToConsole();
    //void resetPumps();
    //void updatePumps();
    //void startPump();
    //void stopPump();
    //void setCondMin();
    //void setCondMax();
    //void resetCond();
    //void receiveReading();
    //void condTimerTick();
    //void beginRecordCond();
    //void stopRecordCond();
    //void saveLog();
    //void saveCond();
    //void startProtocol();

    //void stopProtocol();
    //void addSegment();
    //void rmSegment();
    //void clearSegments();
    //void updateProtocol();
    //void updatePumpProgram();


private:
    Ui::PumpController *ui;
    QColor UiGreen = QColorConstants::Svg::mediumseagreen;
    QColor UiRed = QColorConstants::Svg::indianred;
    QColor UiYellow = QColorConstants::Svg::goldenrod;
    QString pumpComPort;
    QString condComPort;
    float offset;
    TableModel *tableModel;
    //QList<Pump> pumpList;
};
#endif // PUMPCONTROLLER_H
