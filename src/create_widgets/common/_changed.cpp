#include "_changed.h"
#include <QTimer>

#define MSEC 333

_Changed::_Changed(QWidget *parent) :
    QWidget(parent)
{
    setEnabled(false);
    QTimer::singleShot(MSEC, this, SLOT(emitCompleteSignal()));
}

_Changed::~_Changed()
{
}

/* public slots */
void _Changed::stateChanged()
{
    emit dataChanged();
}
void _Changed::emitCompleteSignal()
{
    setEnabled(true);
    emit complete();
}
