#include <iostream>
#include "include/E2Lotery.h"
#include <QGuiApplication>

int main(int argc, char *argv[])
{
    QGuiApplication loteryApp(argc, argv);
    E2Lotery lotery;

    return lotery.init(loteryApp);
}