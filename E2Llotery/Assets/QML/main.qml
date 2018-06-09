//import QtQuick.Controls 1.4
import QtQuick 2.0

Rectangle {

    Text {
        font.pointSize : 34
        text : "I'm a text"
    }

    Rectangle {
        anchors.horizontalCenter : parent.horizontalCenter
        anchors.verticalCenter : parent.verticalCenter
        radius : parent.height
        width : radius
        height : radius
        color : "red"


    }
}