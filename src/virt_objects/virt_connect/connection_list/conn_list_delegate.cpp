#include "conn_list_delegate.h"
//#include <QDebug>

ConnListDelegate::ConnListDelegate(
        QObject *parent) :
    QStyledItemDelegate(parent)
{
}

void ConnListDelegate::paint(
        QPainter *painter,
        const QStyleOptionViewItem &option,
        const QModelIndex &index) const
{
    if ( index.column() == 2 ) {
        QIcon icon = qvariant_cast<QIcon>(index.model()->data(index, Qt::DecorationRole));
        QIcon onView = qvariant_cast<QIcon>(index.model()->data(index, Qt::UserRole));
        icon.paint(painter, option.rect, Qt::AlignCenter);
        onView.paint(painter, option.rect, Qt::AlignLeading);
    } else if ( index.column() < 2 ) {
        QStyledItemDelegate::paint(painter, option, index);
    } else {
        QStyledItemDelegate::paint(painter, option, index);
    };
}
