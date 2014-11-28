import QtQuick 2.3
import QtQuick.Controls 1.2

ApplicationWindow {
    id: aw
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    // Some interaction elements
    Text {
        id: someTxt
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }
    Button {
        id: someBtn
        text: qsTr("someButton")
        anchors.centerIn: parent
        anchors.verticalCenterOffset: -40
        onClicked: {
            // Default button signal
            testObject.someSlot("fn-call")
        }
    }

    // Create connections with c++
    Connections             // Define actions for custom slots
    {
        id:cppConnection
        target:testObject
        ignoreUnknownSignals: true
        onSomeSignal: {
              // To access signal parameter, name the parameter
              someTxt.text = text
       }
    }
}
