commit 5abadc998092b61ef5a1b7cb9398271017616bf5
- open Visual Studio 2019
- create new project
- search for VSTO
- select Excel-VSTP-Add-In
- name it excel-vsto-webview

commit 4f3f96b945fc8e40318acd312c4381f64d16e4b4
- add a Ribbon (XML) via insert new element
- add custom ribbon code (XML) to show button near File->Save As
- initialize ribbon in addin class
OK: pressing F5, creating empty workbook, clicking File, Save,
    My custom task, My Button results in a message box popup

commit f7dca7d775abaaa115b2c4f06dc221bda3822cdc
- add a Windows Form via insert menu
- show form instead of message box in ribbon code (button click)
OK: pressing F5, creating empty workbook, clicking File, Save,
    My custom task, My Button results in an empty Form window popping up

commit
- add WebView2 NuGet package via package manager, version 1.0.1189-prerelease
- drag WebView2 Windows Forms control into Form1 using the designer
OK: pressing F5, creating empty workbook, clicking File, Save,
    My custom task, My Button results in an empty Form window popping up
