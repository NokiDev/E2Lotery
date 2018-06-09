//
// Created by b1u3dr4g0nf1y on 6/9/18.
//

#include <QQmlEngine>
#include <QtQuick/QQuickView>
#include "include/E2Lotery.h"


int E2Lotery::init(QCoreApplication& qCoreApp) {

//    Q_INIT_RESOURCE(E2Llotery);

    qCoreApp.setApplicationName("E2Lotery");


    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:///main.qml"));
    view.show();

    return qCoreApp.exec();
}

bool E2Lotery::loadLanguage() {
    return true;
}