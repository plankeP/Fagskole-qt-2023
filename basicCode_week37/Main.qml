import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Controls.Material

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Popup{
        id: popup
        height: parent.height / 2
        width: parent.width / 2
        modal: true
        closePolicy: Popup.CloseOnEscape | Popup.CloseOnReleaseOutside
        anchors.centerIn: parent

        Column{

            Text{
                text:"Select your subjects"
            }

            CheckBox {
                id: chb1
                text: qsTr("Java")

            }
            CheckBox {
                id: chb2
                text: qsTr("Phy")

            }
            CheckBox {
                id: chb3
                text: qsTr("C++")

            }
            Button{
            onClicked: {
                var sp = chb1.text + ", " + chb2.text + ", " + chb3.text;
                lang += chb1.checked ? chb1.text + ", " : "";
                console.log("jeg kan følgende språk: " + lang)
            }
            }
        }
    }


    Rectangle {
        id: rect
        width: parent.width / 2
        height: parent.height
        color: "grey"
        //anchors.centerIn: parent

        Column{
            id: colleft

            Button {
                id: button
                text: "Open Popup"
                onClicked: popup.open()



               // anchors.centerIn: parent.Center
            }
        }
    }

}
