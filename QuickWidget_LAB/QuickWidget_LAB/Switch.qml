import QtQuick 2.0
import QtQuick.Controls 2.13
import QtQuick.Controls.Material 2.0
import QtQuick.Layouts 1.3

Item {
    id: element2

    signal checker(bool checked);
    signal btn(bool chk)
    Switch {
        id: sw
        x: 286
        y: 191
        width: 105
        height: 40
        text: "OFF"
        autoExclusive: false
        display: AbstractButton.TextBesideIcon
        checked: false
        checkable: false
        transformOrigin: Item.Center

        onCheckedChanged: {
            sw.text = sw.checked ? "ON" : "OFF"
            if(sw.text == "ON")
                parent.checker(true);
            else
                parent.checker(false);
        }
    }

    Button {
        id: button
        x: 289
        y: 260
        text: qsTr("off")
        checkable: true
        checked: false
        onCheckedChanged: {
            button.text = button.checked ? "on" : "off"
            if(button.text == "on")
                parent.btn(true)
            else
                parent.btn(false)
        }
    }
}

/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
